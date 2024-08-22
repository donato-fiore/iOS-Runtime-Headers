// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APODMLDESRECORD_H
#define APODMLDESRECORD_H

@class NSMutableDictionary, NSDictionary, NSMutableArray, NSString, NSUUID, DESRecordStore;

#import <Foundation/Foundation.h>

#import "APOdmlSettings.h"

@interface APOdmlDESRecord : NSObject

@property (retain, nonatomic) NSMutableDictionary *adRecords; // ivar: _adRecords
@property (retain, nonatomic) APOdmlSettings *counterfactualOdmlSettings; // ivar: _counterfactualOdmlSettings
@property (retain, nonatomic) NSDictionary *deviceFeatures; // ivar: _deviceFeatures
@property (nonatomic) NSUInteger placementType; // ivar: _placementType
@property (retain, nonatomic) NSMutableArray *postWriteOperations; // ivar: _postWriteOperations
@property (retain, nonatomic) NSString *recordID; // ivar: _recordID
@property (retain, nonatomic) NSUUID *recordIdentifier; // ivar: _recordIdentifier
@property (retain, nonatomic) DESRecordStore *recordStore; // ivar: _recordStore
@property (retain, nonatomic) APOdmlSettings *runtimeOdmlSettings; // ivar: _runtimeOdmlSettings
@property (nonatomic) BOOL shouldMakeRecord; // ivar: _shouldMakeRecord
@property BOOL writingInProgress; // ivar: _writingInProgress


-(id)dictionaryRepresentation;
-(id)featureForKey:(id)arg0 assetManagerType:(NSUInteger)arg1 ;
-(id)initWithRecordID:(id)arg0 placementType:(NSUInteger)arg1 ;
-(id)onDeviceFeatures;
-(id)recordData;
-(void)addAdListToDES:(id)arg0 ;
-(void)commonInit:(id)arg0 placementType:(NSUInteger)arg1 ;
-(void)handleSaveCompletion:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)performAfterWrite:(id)arg0 ;
-(void)saveDESRecord:(id)arg0 info:(id)arg1 completionHandler:(id)arg2 ;
-(void)updateAd:(id)arg0 event:(NSInteger)arg1 ;
-(void)writeDESRecord:(id)arg0 ;


@end


#endif