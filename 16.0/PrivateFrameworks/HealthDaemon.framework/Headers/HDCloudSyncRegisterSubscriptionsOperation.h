// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDCLOUDSYNCREGISTERSUBSCRIPTIONSOPERATION_H
#define HDCLOUDSYNCREGISTERSUBSCRIPTIONSOPERATION_H

@class NSDictionary, CKContainer;


#import "HDCloudSyncOperation.h"

@interface HDCloudSyncRegisterSubscriptionsOperation : HDCloudSyncOperation {
    NSDictionary *_subscriptions;
    CKContainer *_container;
}




-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 ;
-(id)initWithConfiguration:(id)arg0 cloudState:(id)arg1 container:(id)arg2 subscriptions:(id)arg3 ;
-(void)main;


@end


#endif