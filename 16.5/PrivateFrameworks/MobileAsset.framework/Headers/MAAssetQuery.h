// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MAASSETQUERY_H
#define MAASSETQUERY_H

@class NSSet, NSString, NSDate, NSMutableArray, NSArray;

#import <Foundation/Foundation.h>


@interface MAAssetQuery : NSObject {
    BOOL _isPallasResult;
}


@property (readonly, nonatomic) NSSet *assetIds; // ivar: _assetIds
@property (readonly, nonatomic) NSString *assetType; // ivar: _assetType
@property (nonatomic) BOOL doNotBlockBeforeFirstUnlock; // ivar: _doNotBlockBeforeFirstUnlock
@property (nonatomic) BOOL doNotBlockOnNetworkStatus; // ivar: _doNotBlockOnNetworkStatus
@property (readonly, nonatomic) BOOL isDone; // ivar: _isDone
@property (readonly, nonatomic) NSDate *lastFetchDate; // ivar: _lastFetchDate
@property (readonly, nonatomic) NSDate *postedDate; // ivar: _postedDate
@property (retain, nonatomic) NSString *purpose; // ivar: _purpose
@property (readonly, nonatomic) NSMutableArray *queryParams; // ivar: _queryParams
@property (readonly, nonatomic) NSInteger resultCode; // ivar: _resultCode
@property (readonly, nonatomic) NSArray *results; // ivar: _results
@property (readonly, nonatomic) NSInteger returnTypes; // ivar: _returnTypes


-(BOOL)isCatalogFetchedFromLiveServer;
-(BOOL)isCatalogFetchedWithinThePastFewDays:(int)arg0 ;
-(NSInteger)addKeyValueArray:(id)arg0 with:(id)arg1 ;
-(NSInteger)addKeyValueNull:(id)arg0 ;
-(NSInteger)addKeyValuePair:(id)arg0 with:(id)arg1 ;
-(NSInteger)queryInstalledAssetIds;
-(NSInteger)queryMetaDataSync;
-(id)description;
-(id)initWithType:(id)arg0 ;
-(id)initWithType:(id)arg0 andPurpose:(id)arg1 ;
-(void)augmentResultsWithState:(BOOL)arg0 ;
-(void)getResultsFromMessage:(id)arg0 ;
-(void)queryMetaData:(id)arg0 ;
-(void)queryMetaDataWithError:(id)arg0 ;
-(void)returnTypes:(NSInteger)arg0 ;


@end


#endif