// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCCLOUDKITSYNCTOCKTRANSACTION_H
#define BCCLOUDKITSYNCTOCKTRANSACTION_H



#import "BCCloudKitTransaction.h"
#import "BCCloudDataSyncManager.h"

@interface BCCloudKitSyncToCKTransaction : BCCloudKitTransaction

@property (retain, nonatomic) BCCloudDataSyncManager *syncManager; // ivar: _syncManager


+(id)transactionNameForEntityName:(id)arg0 ;
-(CGFloat)coalescingDelay;
-(CGFloat)transactionLifetimeTimout;
-(id)initWithEntityName:(id)arg0 syncManager:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(id)arg0 ;


@end


#endif