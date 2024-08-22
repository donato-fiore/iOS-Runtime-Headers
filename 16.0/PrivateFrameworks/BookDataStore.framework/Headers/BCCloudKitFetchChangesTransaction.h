// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BCCLOUDKITFETCHCHANGESTRANSACTION_H
#define BCCLOUDKITFETCHCHANGESTRANSACTION_H



#import "BCCloudKitTransaction.h"
#import "BCCloudKitController.h"

@interface BCCloudKitFetchChangesTransaction : BCCloudKitTransaction

@property (weak, nonatomic) BCCloudKitController *cloudKitController; // ivar: _cloudKitController


+(id)transactionNameForEntityName:(id)arg0 ;
-(CGFloat)coalescingDelay;
-(CGFloat)transactionLifetimeTimout;
-(id)initWithCloudKitController:(id)arg0 delegate:(id)arg1 ;
-(void)performWorkWithCompletion:(id)arg0 ;


@end


#endif