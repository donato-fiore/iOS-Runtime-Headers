// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSANALYTICSLOGGER_H
#define CPSANALYTICSLOGGER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CPSAnalyticsLogger : NSObject {
    NSObject<OS_dispatch_queue> *_analyticsSynchronizationQueue;
}




+(id)sharedLogger;
-(id)initWithQueue:(id)arg0 ;
-(void)_sendEventLazyWithName:(id)arg0 clipBundleIdentifier:(id)arg1 payload:(id)arg2 ;
-(void)didAgeOutClip:(id)arg0 ;
-(void)didCancelInterstitialForClip:(id)arg0 withEvent:(NSInteger)arg1 didShowCardInline:(BOOL)arg2 ;
-(void)didDiscoverClip:(id)arg0 event:(id)arg1 alreadyInstalled:(BOOL)arg2 ;
-(void)didManuallyDeleteClip:(id)arg0 withEvent:(NSInteger)arg1 ;
-(void)didPresentInvocationCardForClip:(id)arg0 adamID:(id)arg1 sourceBundleIdentifier:(id)arg2 referrerBundleIdentifier:(id)arg3 event:(id)arg4 url:(id)arg5 didShowCardInline:(BOOL)arg6 ;
-(void)didUpgradeToFullAppFromClip:(id)arg0 ;
-(void)didUseClip:(id)arg0 atLatitude:(CGFloat)arg1 longitude:(CGFloat)arg2 ;
-(void)recordClientClipRequestWithBundleID:(id)arg0 launchReason:(id)arg1 ;
-(void)recordClientMetadataRequestWithBundleID:(id)arg0 launchReason:(id)arg1 ;
-(void)recordDidActivateCardWithBundleID:(id)arg0 launchReason:(id)arg1 deviceLocked:(BOOL)arg2 didShowCardInline:(BOOL)arg3 ;
-(void)recordDidInstallWithBundleID:(id)arg0 succeeded:(BOOL)arg1 ;
-(void)recordDidOpenAppClipWithBundleID:(id)arg0 launchReason:(id)arg1 didShowCard:(BOOL)arg2 didOpenFullApp:(BOOL)arg3 didInstallAppClip:(BOOL)arg4 ;
-(void)recordDidShowErrorWithBundleID:(id)arg0 place:(id)arg1 errorCode:(NSInteger)arg2 ;
-(void)recordDidShowLocationConsentWithBundleID:(id)arg0 response:(NSUInteger)arg1 ;
-(void)recordDidTapAppStoreBannerWithBundleID:(id)arg0 ;
-(void)recordDidTapOpenButtonInCardWithBundleID:(id)arg0 metadata:(id)arg1 launchReason:(id)arg2 launchOptions:(id)arg3 didShowCardInline:(BOOL)arg4 ;
-(void)recordReportProblemStepCompletedWithBundleID:(id)arg0 problemLabel:(id)arg1 event:(NSInteger)arg2 ;


@end


#endif