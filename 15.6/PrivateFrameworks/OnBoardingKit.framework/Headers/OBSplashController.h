// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OBSPLASHCONTROLLER_H
#define OBSPLASHCONTROLLER_H

@class UIViewController, UIView, _UIBackdropView, NSMutableArray, UIColor, NSString, UIImage, NSArray, UIScrollView;
@protocol UIScrollViewDelegate;


#import "OBBuddyPaneHeaderView.h"
#import "OBPrivacyLinkController.h"

@interface OBSplashController : UIViewController <UIScrollViewDelegate>

 {
    OBBuddyPaneHeaderView *_headerView;
    UIView *_trayBackdropContainer;
    _UIBackdropView *_lightTrayBackdrop;
    _UIBackdropView *_ultraLightTrayBackdrop;
    NSMutableArray *_buttons;
    UIColor *_tint;
    UIView *_bleedView;
    OBPrivacyLinkController *_privacyLink;
}


@property (nonatomic) UIEdgeInsets additionalInsets; // ivar: _additionalInsets
@property (retain, nonatomic) UIColor *bleedColor; // ivar: _bleedColor
@property (readonly, nonatomic) UIView *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewPosition; // ivar: _contentViewPosition
@property (nonatomic, getter=isDarkMode) BOOL darkMode; // ivar: _darkMode
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL disableIconTint; // ivar: _disableIconTint
@property (nonatomic) BOOL displayPrivacyLinkCaptionText; // ivar: _displayPrivacyLinkCaptionText
@property (nonatomic) BOOL fullWidthContent; // ivar: _fullWidthContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) OBBuddyPaneHeaderView *headerView;
@property (retain, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSString *iconAccessibilityLabel;
@property (nonatomic) CGSize iconSize;
@property (copy, nonatomic) NSString *onBoardingBundleIdentifier;
@property (copy, nonatomic) NSArray *onBoardingBundleIdentifiers; // ivar: _onBoardingBundleIdentifiers
@property (nonatomic) NSInteger privacyLinkPosition; // ivar: _privacyLinkPosition
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled; // ivar: _scrollingDisabled
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesTwoButtonLayout; // ivar: _usesTwoButtonLayout


-(NSInteger)preferredUserInterfaceStyle;
-(id)_createButtonWithTitle:(id)arg0 style:(NSInteger)arg1 ;
-(id)buttonAtIndex:(NSUInteger)arg0 ;
-(id)contentScrollView;
-(id)init;
-(void)_buttonPressed:(id)arg0 ;
-(void)_updateButtonFonts;
-(void)_updateTrayVisibility;
-(void)addButtonWithTitle:(id)arg0 style:(NSInteger)arg1 action:(id)arg2 ;
-(void)loadView;
-(void)removeAllButtons;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)setButtonsEnabled:(BOOL)arg0 ;
-(void)setLinkText:(id)arg0 action:(id)arg1 ;
-(void)setTitle:(id)arg0 ;
-(void)setTitle:(id)arg0 forButtonAtIndex:(NSUInteger)arg1 action:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateBleedColor;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif