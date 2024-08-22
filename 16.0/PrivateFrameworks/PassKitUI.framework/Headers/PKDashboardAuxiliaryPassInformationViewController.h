// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKDASHBOARDAUXILIARYPASSINFORMATIONVIEWCONTROLLER_H
#define PKDASHBOARDAUXILIARYPASSINFORMATIONVIEWCONTROLLER_H

@class UIImageView, NSIndexPath, NSString, UIButton;
@protocol OS_dispatch_source;


#import "PKDashboardViewController.h"
#import "PKDashboardViewControllerFooterView.h"
#import "PKDashboardViewControllerFooterContainer.h"
#import "PKAnimatedNavigationBarTitleView.h"
#import "PKDashboardDetailHeaderItemPresenter.h"
#import "PKContactAvatarManager.h"
#import "PKAlignedContentContainerView.h"

@interface PKDashboardAuxiliaryPassInformationViewController : PKDashboardViewController {
    PKDashboardViewControllerFooterView *_footer;
    PKDashboardViewControllerFooterContainer *_footerContainer;
    PKAnimatedNavigationBarTitleView *_titleView;
    UIImageView *_titleIconImageView;
    PKDashboardDetailHeaderItemPresenter *_headerPresenter;
    PKContactAvatarManager *_contactAvatarManager;
    BOOL _isHeaderPinned;
    UIEdgeInsets _lastContentInset;
    CGFloat _headerHeight;
    NSIndexPath *_headerIndexPath;
    CGFloat _merchantHeaderAnimationProgress;
    NSString *_titleText;
    BOOL _loadingMapsViewController;
    NSObject<OS_dispatch_source> *_loadingMapsTimer;
    PKAlignedContentContainerView *_detailsButtonContainer;
    PKAlignedContentContainerView *_phoneButtonContainer;
    PKAlignedContentContainerView *_messageButtonContainer;
    UIButton *_detailsButton;
    UIButton *_phoneButton;
    UIButton *_messageButton;
}




-(BOOL)_shouldBlurButtons;
-(id)_barButtonItems;
-(id)initWithItem:(id)arg0 forPass:(id)arg1 ;
-(struct ? )pkui_navigationStatusBarStyleDescriptor;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)_handleInfoButtonTapped;
-(void)_handleMessageButtonTapped;
-(void)_handlePhoneButtonTapped;
-(void)_showMapsDetailsViewController;
-(void)_updateButtonConfigurationsDisablingBlur:(BOOL)arg0 ;
-(void)_updateHeaderCellWithAnimationProgress:(id)arg0 ;
-(void)_updateNavigationBarIconForNavigationBarAppeared:(BOOL)arg0 ;
-(void)updateContent;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif