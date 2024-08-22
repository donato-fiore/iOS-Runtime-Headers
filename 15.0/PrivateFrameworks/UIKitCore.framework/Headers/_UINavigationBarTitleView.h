// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UINAVIGATIONBARTITLEVIEW_H
#define _UINAVIGATIONBARTITLEVIEW_H

@class NSLayoutConstraint, NSArray, NSString;
@protocol _UINavigationBarAugmentedTitleView, _UINavigationBarTitleViewDataSource;


#import "UIView.h"
#import "_UINavigationBarTitleViewOverlayRects.h"
#import "UIMenu.h"
#import "UINavigationItem.h"

@interface _UINavigationBarTitleView : UIView <_UINavigationBarAugmentedTitleView>

 {
    NSLayoutConstraint *_heightConstraint;
    _UINavigationBarTitleViewOverlayRects *_overlayRects;
    id<_UINavigationBarTitleViewDataSource> *_dataSource;
}


@property (readonly, nonatomic) BOOL _hideNavigationBarBackButton;
@property (readonly, nonatomic) BOOL _hideNavigationBarLeadingBarButtons;
@property (readonly, nonatomic) BOOL _hideNavigationBarStandardTitle;
@property (readonly, nonatomic) BOOL _hideNavigationBarTrailingBarButtons;
@property (readonly, nonatomic) CGFloat _navigationBarBackButtonAlpha;
@property (readonly, nonatomic) CGFloat _navigationBarBackButtonMaximumWidth;
@property (readonly, nonatomic) CGFloat _navigationBarContentHeight;
@property (readonly, nonatomic) CGFloat _navigationBarLeadingBarButtonsAlpha;
@property (readonly, nonatomic) CGFloat _navigationBarTrailingBarButtonsAlpha;
@property (readonly, nonatomic) NSInteger _preferredAlignment;
@property (readonly, nonatomic) BOOL _underlayNavigationBarContent;
@property (nonatomic) CGFloat backButtonAlpha; // ivar: _backButtonAlpha
@property (nonatomic) CGFloat backButtonMaximumWidth; // ivar: _backButtonMaximumWidth
@property (readonly, copy, nonatomic) UIMenu *backButtonMenu;
@property (readonly, nonatomic) CGFloat contentBaseHeight;
@property (readonly, nonatomic) CGFloat contentBaselineOffsetFromTop;
@property (readonly, copy, nonatomic) NSArray *contentOverlayRects;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat height; // ivar: _height
@property (nonatomic) BOOL hideBackButton; // ivar: _hideBackButton
@property (nonatomic) BOOL hideLeadingBarButtons; // ivar: _hideLeadingBarButtons
@property (nonatomic) BOOL hideStandardTitle; // ivar: _hideStandardTitle
@property (nonatomic) BOOL hideTrailingBarButtons; // ivar: _hideTrailingBarButtons
@property (readonly, nonatomic) CGFloat largeTitleHeight;
@property (readonly, nonatomic) ? largeTitleHeightRange;
@property (nonatomic) CGFloat leadingBarAlpha; // ivar: _leadingBarAlpha
@property (readonly, nonatomic) NSInteger leadingOverlayCount;
@property (readonly, weak, nonatomic) UINavigationItem *navigationItem; // ivar: _navigationItem
@property (nonatomic) NSInteger preferredContentAlignment; // ivar: _preferredContentAlignment
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSInteger titleLocation; // ivar: _titleLocation
@property (nonatomic) CGFloat trailingBarAlpha; // ivar: _trailingBarAlpha
@property (readonly, nonatomic) NSInteger trailingOverlayCount;
@property (nonatomic) BOOL underlayBarContent; // ivar: _underlayBarContent


-(BOOL)_wantsTwoPartTransition;
-(NSInteger)_preferredContentSizeForSize:(NSInteger)arg0 ;
-(NSInteger)preferredContentSizeForSize:(NSInteger)arg0 ;
-(id)_traitCollectionOverridesForNavigationBarTraitCollection:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentDidChange;
-(void)_navigationBarTraitCollectionDidChangeTo:(id)arg0 from:(id)arg1 ;
-(void)_navigationBarTransitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_navigationBarTransitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_performNavigationBarTransition:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)_setDataSource:(id)arg0 navigationItem:(id)arg1 titleLocation:(NSInteger)arg2 ;
-(void)contentDidChange;
-(void)navigationBarTraitCollectionDidChangeTo:(id)arg0 from:(id)arg1 ;
-(void)performTransition:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)preferredContentSizeDidChange;
-(void)setTranslatesAutoresizingMaskIntoConstraints:(BOOL)arg0 ;
-(void)transitionCompleted:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;
-(void)transitionWillBegin:(NSInteger)arg0 willBeDisplayed:(BOOL)arg1 ;


@end


#endif