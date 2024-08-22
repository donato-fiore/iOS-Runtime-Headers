// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BCCLOUDKITDATACHANGEDTRANSACTION_H
#define BCCLOUDKITDATACHANGEDTRANSACTION_H

@class NSString;


#import "BCCloudKitTransaction.h"

@interface BCCloudKitDataChangedTransaction : BCCloudKitTransaction

@property (copy, nonatomic) NSString *notificationName; // ivar: _notificationName


+(id)transactionNameForEntityName:(id)arg0 ;
-(CGFloat)coalescingDelay;
-(id)initWithEntityName:(id)arg0 notificationName:(id)arg1 delegate:(id)arg2 ;
-(void)performWorkWithCompletion:(id)arg0 ;


@end


#endif