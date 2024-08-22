// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSTOREBANNER_H
#define SFSTOREBANNER_H

@class SKProductPageViewController, ASCLockupView, UIButton, UIView, NSNumber, NSString, NSURL;
@protocol ASCLockupViewDelegate, SKProductPageViewControllerDelegate, SFAppSuggestionBanner, SFAppSuggestionBannerDelegate;


#import "SFPinnableBanner.h"
#import "SFThemeColorEffectView.h"

@interface SFStoreBanner : SFPinnableBanner <ASCLockupViewDelegate, SKProductPageViewControllerDelegate, SFAppSuggestionBanner>

 {
    SKProductPageViewController *_productViewController;
    SFThemeColorEffectView *_backdrop;
    ASCLockupView *_lockupView;
    UIButton *_closeButton;
    UIView *_separator;
    NSNumber *_productID;
    NSString *_affiliateData;
    NSURL *_mainDocumentURL;
    NSString *_argument;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SFAppSuggestionBannerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)omitsBottomSeparator;
-(id)initWithProductID:(id)arg0 mainDocumentURL:(id)arg1 affiliateData:(id)arg2 applicationLaunchArgument:(id)arg3 ;
-(id)presentingViewControllerForLockupView:(id)arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_openApp;
-(void)_removeAppStoreLockUpView;
-(void)_setBlockedByUser;
-(void)_setUpAppStoreLockUpView;
-(void)_setUpStoreKitProductView;
-(void)dealloc;
-(void)layoutSubviews;
-(void)lockupView:(id)arg0 appStateDidChange:(id)arg1 ;
-(void)lockupView:(id)arg0 didFailRequestWithError:(id)arg1 ;
-(void)productPage:(id)arg0 didFailLoadWithError:(id)arg1 ;
-(void)productPage:(id)arg0 didFinishPurchase:(id)arg1 withError:(id)arg2 ;
-(void)productPage:(id)arg0 didFinishWithResult:(NSInteger)arg1 ;
-(void)productPage:(id)arg0 willMakePurchases:(id)arg1 ;
-(void)themeDidChange;


@end


#endif