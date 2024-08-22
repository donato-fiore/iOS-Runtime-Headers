// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPSBANNERSOURCE_H
#define CPSBANNERSOURCE_H

@class BNBannerSource, NSString, NSTimer, NSUUID;
@protocol CPSBannerViewControllerDelegate, BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving, CPBannerDelegate;

#import <Foundation/Foundation.h>

#import "CPSApplicationStateMonitor.h"
#import "CPSBannerViewController.h"

@interface CPSBannerSource : NSObject <CPSBannerViewControllerDelegate, BSInvalidatable, CPBannerProviding, CPSApplicationStateObserving>



@property (nonatomic) BOOL active; // ivar: _active
@property (retain, nonatomic) CPSApplicationStateMonitor *applicationStateMonitor; // ivar: _applicationStateMonitor
@property (retain, nonatomic) BNBannerSource *bannerKitSource; // ivar: _bannerKitSource
@property (copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<CPBannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSTimer *dimissTimer; // ivar: _dimissTimer
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSUUID *lastUserDismissedIdentifier; // ivar: _lastUserDismissedIdentifier
@property (retain, nonatomic) NSTimer *lastUserDismissedIdentifierResetTimer; // ivar: _lastUserDismissedIdentifierResetTimer
@property (retain, nonatomic) CPSBannerViewController *presentedBannerViewController; // ivar: _presentedBannerViewController
@property (nonatomic, getter=isRateLimited) BOOL rateLimited; // ivar: _rateLimited
@property (readonly) Class superclass;


-(id)initWithBundleIdentifier:(id)arg0 delegate:(id)arg1 applicationStateMonitor:(id)arg2 ;
-(void)_dismissTimerFired:(id)arg0 ;
-(void)_enqueueBannerItem:(id)arg0 ;
-(void)_flushQueue;
-(void)_postBannerRequestForBannerItem:(id)arg0 ;
-(void)_resetDismissTimer;
-(void)_revokePresentedBannerWithReason:(id)arg0 ;
-(void)_setBannerRateLimitEnabled:(BOOL)arg0 bundleIdentifier:(id)arg1 ;
-(void)applicationStateMonitor:(id)arg0 didBecomeActive:(BOOL)arg1 ;
-(void)bannerViewController:(id)arg0 requestsDismissalWithReason:(id)arg1 ;
-(void)bannerViewControllerDidAppearWithIdentifier:(id)arg0 ;
-(void)bannerViewControllerDidDisappearWithIdentifier:(id)arg0 ;
-(void)bannerViewControllerTappedWithIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)postBannerForManeuver:(id)arg0 travelEstimates:(id)arg1 ;
-(void)postBannerForNavigationAlert:(id)arg0 ;


@end


#endif