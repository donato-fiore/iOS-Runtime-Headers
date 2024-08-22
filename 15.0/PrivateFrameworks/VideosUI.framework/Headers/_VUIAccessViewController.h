// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _VUIACCESSVIEWCONTROLLER_H
#define _VUIACCESSVIEWCONTROLLER_H

@class UIViewController, NSArray, OBPrivacyLinkController, NSMutableArray, NSDictionary;


#import "VUIAccessView_iOS.h"
#import "VUIAppSpinnerView.h"

@interface _VUIAccessViewController : UIViewController {
    VUIAccessView_iOS *_accessView;
    VUIAppSpinnerView *_loadingView;
    NSArray *_channels;
    OBPrivacyLinkController *_privacyController;
    NSMutableArray *_bundleIDs;
    NSDictionary *_options;
    BOOL _hasCalledCompletion;
    NSArray *_appInfos;
    NSArray *_appChannels;
    NSMutableArray *_channelIds;
    BOOL _hasOptedIn;
    BOOL _shouldDenyOnCancel;
}


@property (copy, nonatomic) id *completionHandler; // ivar: _completionHandler


+(BOOL)_isHostedInRemoteViewService;
-(id)_imageForBundleID:(id)arg0 ;
-(id)_watchListAppIcon;
-(id)cappedTraitCollection;
-(id)init;
-(id)initWithBundleIDs:(id)arg0 channels:(id)arg1 options:(id)arg2 completionHandler:(id)arg3 ;
-(id)preferredFocusEnvironments;
-(void)_allow:(id)arg0 ;
-(void)_completeWithStatus:(NSUInteger)arg0 ;
-(void)_disallow:(id)arg0 ;
-(void)_fetchRemoteAppInfo;
-(void)_handleMenuGesture:(id)arg0 ;
-(void)_handleNackButton:(id)arg0 ;
-(void)_handleSeeAllButton:(id)arg0 ;
-(void)_init;
-(void)_presentGenericErrorWithCompletion:(id)arg0 ;
-(void)_setupAccessViews;
-(void)_setupNavigationBar;
-(void)_toggleLoadingScreen;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;


@end


#endif