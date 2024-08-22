// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BFFSPLASHCONTROLLER_H
#define BFFSPLASHCONTROLLER_H

@class UIViewController, UIScrollView, NSMutableArray, UIView, UIColor, NSString, UIVisualEffectView, UIImage;
@protocol UIScrollViewDelegate;


#import "BFFPaneHeaderView.h"

@interface BFFSplashController : UIViewController <UIScrollViewDelegate>

 {
    BFFPaneHeaderView *_headerView;
    UIScrollView *_scrollView;
    NSMutableArray *_buttons;
    UIView *_bleedView;
}


@property (nonatomic) UIEdgeInsets additionalInsets; // ivar: _additionalInsets
@property (retain, nonatomic) UIColor *bleedColor; // ivar: _bleedColor
@property (readonly, nonatomic) UIView *buttonTray; // ivar: _buttonTray
@property (retain, nonatomic) UIView *contentView; // ivar: _contentView
@property (nonatomic) NSInteger contentViewPosition; // ivar: _contentViewPosition
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *detailText; // ivar: _detailText
@property (nonatomic) BOOL disableIconTint; // ivar: _disableIconTint
@property (retain, nonatomic) UIVisualEffectView *effectView; // ivar: _effectView
@property (nonatomic) BOOL fullWidthContent; // ivar: _fullWidthContent
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BFFPaneHeaderView *headerView;
@property (retain, nonatomic) UIImage *icon;
@property (nonatomic, getter=isScrollingDisabled) BOOL scrollingDisabled; // ivar: _scrollingDisabled
@property (readonly) Class superclass;
@property (retain, nonatomic) UIColor *tint; // ivar: _tint
@property (nonatomic) BOOL usesTwoButtonLayout; // ivar: _usesTwoButtonLayout


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
-(void)updateBleedViewLayout;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif