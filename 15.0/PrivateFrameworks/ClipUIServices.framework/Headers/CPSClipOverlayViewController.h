// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPSCLIPOVERLAYVIEWCONTROLLER_H
#define CPSCLIPOVERLAYVIEWCONTROLLER_H

@class UIViewController, NSTimer, CPSAppClipRecord, CPSClipMetadata, CPSSessionProxy, CPSWebClip, CPSPromise, NSString;
@protocol CPSSessionProxyDelegate;


#import "CPSAppAttributionBanner.h"
#import "CPSBannerContainerView.h"
#import "CPSClipLoadingView.h"

@interface CPSClipOverlayViewController : UIViewController <CPSSessionProxyDelegate>

 {
    NSTimer *_automaticBannerDismissTimer;
    BOOL _attemptToShowBannerOnceSessionProxyIsResolved;
    CPSAppAttributionBanner *_banner;
    CPSBannerContainerView *_bannerContainer;
    CPSAppClipRecord *_clipRecord;
    BOOL _displayedOverPlaceholder;
    CPSClipLoadingView *_loadingView;
    CPSClipMetadata *_placeholderClipMetadata;
    NSInteger _sceneActivationState;
    CPSSessionProxy *_sessionProxy;
    BOOL _showingDemoProgress;
    CGFloat _initialAppearanceTime;
    CPSWebClip *_webClip;
    CPSPromise *_clipUpdatePromise;
}


@property (nonatomic) NSInteger appAttributionBannerPolicy; // ivar: _appAttributionBannerPolicy
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *referrerBundleID; // ivar: _referrerBundleID
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesMockData; // ivar: _usesMockData
@property (copy, nonatomic) NSString *webClipID; // ivar: _webClipID


-(NSInteger)preferredStatusBarStyle;
-(id)_initWithAppClipBundleID:(id)arg0 ;
-(id)initWithAppClipBundleID:(id)arg0 ;
-(id)initWithAppClipBundleID:(id)arg0 webClipID:(id)arg1 ;
-(id)initWithAppClipRecord:(id)arg0 ;
-(void)_didTapBanner;
-(void)_dismissLoadingViewAnimated:(BOOL)arg0 ;
-(void)_loadClipMetadataUsingPlaceholderWebClipID;
-(void)_loadClipRecordUsingBundleID;
-(void)_presentLoadingViewAnimated:(BOOL)arg0 ;
-(void)_scheduleBannerDismissTimerIfNeeded;
-(void)_setBannerHidden:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setClipRecord:(id)arg0 ;
-(void)_setClipSessionProxy:(id)arg0 ;
-(void)_setPlaceholderClipMetadata:(id)arg0 ;
-(void)_setUpNewSessionProxy;
-(void)_showFailedLoadingStateAndReloadMetadata:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_updateBanner;
-(void)_updateBannerLabels;
-(void)_updateLoadingView;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)proxy:(id)arg0 didFinishLoadingWithError:(id)arg1 ;
-(void)proxy:(id)arg0 didRetrieveHeroImage:(id)arg1 ;
-(void)proxyDidChangeProgress:(id)arg0 ;
-(void)proxyDidUpdateMetadata:(id)arg0 ;
-(void)proxyRemoteServiceDidCrash:(id)arg0 ;
-(void)setClipNeedsUpdateToLatestVersion;
-(void)setDisplayedOverPlaceholder:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setDisplayedOverPlaceholder:(BOOL)arg0 forWebClipID:(id)arg1 animated:(BOOL)arg2 ;
-(void)setDisplayedOverPlaceholder:(BOOL)arg0 usingClipMetadata:(id)arg1 animated:(BOOL)arg2 ;
-(void)setSceneActivationState:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif