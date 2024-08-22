// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDATABASEIMPLEMENTATION_H
#define CKDATABASEIMPLEMENTATION_H

@class NSOperationQueue;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKContainerImplementation.h"

@interface CKDatabaseImplementation : NSObject

@property (readonly, weak, nonatomic) CKContainerImplementation *containerImplementation; // ivar: _containerImplementation
@property (readonly, nonatomic) NSInteger databaseScope;
@property (readonly, nonatomic) NSOperationQueue *operationQueue; // ivar: _operationQueue
@property (readonly, nonatomic) NSInteger scope; // ivar: _scope
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *underlyingDispatchQueue; // ivar: _underlyingDispatchQueue


-(NSUInteger)countAssetCacheItems;
-(id)CKPropertiesDescription;
-(id)CKStatusReportArray;
-(id)_initWithContainerImplementation:(id)arg0 scope:(NSInteger)arg1 ;
-(id)description;
-(void)_addOperation:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 isConvenience:(BOOL)arg3 ;
-(void)_scheduleConvenienceOperation:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 ;
-(void)addOperation:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 ;
-(void)clearAssetCache;
-(void)clearAuthTokensForRecordWithID:(id)arg0 ;
-(void)clearCacheEntriesForRecord:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearCacheEntriesForZone:(id)arg0 completionHandler:(id)arg1 ;
-(void)clearCachesWithOptions:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)clearInvalidatedPCSCacheEntriesIfNeeded;
-(void)clearRecordCache;
-(void)deleteRecordWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteRecordZoneWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)deleteSubscriptionWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchAllRecordZonesWithWrappingDatabase:(id)arg0 convenienceConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchAllSubscriptionsWithWrappingDatabase:(id)arg0 convenienceConfiguration:(id)arg1 completionHandler:(id)arg2 ;
-(void)fetchPCSFromCacheForShareWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchPCSFromCacheForZoneWithID:(id)arg0 completionHandler:(id)arg1 ;
-(void)fetchRecordWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchRecordZoneWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)fetchSubscriptionWithID:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)getCorruptRecordsForAllZonesWithCompletionHandler:(id)arg0 ;
-(void)getPCSDiagnosticsForZonesWithCompletionHandler:(id)arg0 ;
-(void)performQuery:(id)arg0 inZoneWithID:(id)arg1 wrappingDatabase:(id)arg2 convenienceConfiguration:(id)arg3 completionHandler:(id)arg4 ;
-(void)saveRecord:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)saveRecordZone:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)saveSubscription:(id)arg0 wrappingDatabase:(id)arg1 convenienceConfiguration:(id)arg2 completionHandler:(id)arg3 ;
-(void)showAssetCache;


@end


#endif