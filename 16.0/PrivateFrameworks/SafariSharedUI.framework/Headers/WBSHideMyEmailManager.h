// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WBSHIDEMYEMAILMANAGER_H
#define WBSHIDEMYEMAILMANAGER_H

@class WBSPrimaryAppleAccountObserver, WBSCloudSubscriptionFeatureAvailabilityObserver, AKPrivateEmailController;

#import <Foundation/Foundation.h>


@interface WBSHideMyEmailManager : NSObject {
    WBSPrimaryAppleAccountObserver *_accountObserver;
    WBSCloudSubscriptionFeatureAvailabilityObserver *_provisionNewHideMyEmailAvailabilityObserver;
    AKPrivateEmailController *_privateEmailController;
}




+(id)sharedManager;
-(id)init;
-(void)_performOperation:(NSUInteger)arg0 withURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)getRecordForURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)provisionRecordForURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif