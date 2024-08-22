// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef APODMLDESRECORD_H
#define APODMLDESRECORD_H

@class NSMutableDictionary, NSArray, NSMutableArray, NSUUID, DESRecordStore, NSString;

#import <Foundation/Foundation.h>

#import "APOdmlVector.h"
#import "APOdmlSettings.h"

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *adRecords; // ivar: _adRecords
@property (retain, nonatomic) APOdmlVector *counterfactualAppUsageVector; // ivar: _counterfactualAppUsageVector
@property (retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings; // ivar: _counterfactualOdmlSettings
@property (nonatomic) BOOL organicsExist; // ivar: _organicsExist
@property (retain, nonatomic) NSArray *organicsList; // ivar: _organicsList
@property (retain, nonatomic) NSArray *originalAdOrderList; // ivar: _originalAdOrderList
@property (retain, nonatomic) NSMutableArray *postWriteOperations; // ivar: _postWriteOperations
@property (retain, nonatomic) NSUUID *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) DESRecordStore *recordStore; // ivar: _recordStore
@property (retain, nonatomic) NSString *requestID; // ivar: _requestID
@property (retain, nonatomic) NSArray *rerankedAdOrderList; // ivar: _rerankedAdOrderList
@property (retain, nonatomic) APOdmlVector *runtimeAppUsageVector; // ivar: _runtimeAppUsageVector
@property (retain, nonatomic) APOdmlSettings *runtimeOdmlSettings; // ivar: _runtimeOdmlSettings
@property (nonatomic) BOOL shouldMakeRecord; // ivar: _shouldMakeRecord
@property BOOL writingInProgress; // ivar: _writingInProgress


-(id)dictionaryRepresentation;
-(id)initWithRequestID:(id)arg0 ;
-(id)recordData;
-(void)addAdListToDES:(id)arg0 organics:(id)arg1 ;
-(void)handleSaveCompletion:(id)arg0 error:(id)arg1 ;
-(void)performAfterWrite:(id)arg0 ;
-(void)saveDESRecord:(id)arg0 info:(id)arg1 ;
-(void)updateAd:(id)arg0 event:(NSInteger)arg1 ;
-(void)updateRerankedAdList:(id)arg0 ;
-(void)writeDESRecord;


@end


#endif