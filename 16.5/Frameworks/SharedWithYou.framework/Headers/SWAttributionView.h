// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SWATTRIBUTIONVIEW_H
#define SWATTRIBUTIONVIEW_H

@class UIView, NSString, NSArray, UIMenu, SLAttributionView;
@protocol SLAttributionViewDelegate;


#import "SWHighlight.h"

@interface SWAttributionView : UIView <SLAttributionViewDelegate>



@property (nonatomic) NSInteger backgroundStyle; // ivar: _backgroundStyle
@property (retain, nonatomic) NSString *blurEffectGroupName; // ivar: _blurEffectGroupName
@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger displayContext; // ivar: _displayContext
@property (nonatomic) BOOL enablesMarquee; // ivar: _enablesMarquee
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SWHighlight *highlight; // ivar: _highlight
@property (readonly, nonatomic) UIMenu *highlightMenu; // ivar: _highlightMenu
@property (nonatomic) NSInteger horizontalAlignment; // ivar: _horizontalAlignment
@property (retain, nonatomic) NSString *menuTitleForHideAction; // ivar: _menuTitleForHideAction
@property (nonatomic) CGFloat preferredMaxLayoutWidth; // ivar: _preferredMaxLayoutWidth
@property (retain, nonatomic) SLAttributionView *slAttributionView; // ivar: _slAttributionView
@property (readonly) Class superclass;
@property (retain, nonatomic) UIMenu *supplementalMenu; // ivar: _supplementalMenu


+(void)presentTranscriptForAttributionIdentifier:(id)arg0 attachmentGUID:(id)arg1 presentingViewController:(id)arg2 ;
-(id)closeButton;
-(id)init;
-(struct CGSize )intrinsicContentSize;
-(void)_sendFeedbackForCurrentDisplayContext;
-(void)_updateSLAttributionViewAlignment;
-(void)_updateSLAttributionViewBackgroundStyle;
-(void)_updateSLAttributionViewEnablesMarquee;
-(void)_updateSLAttributionViewHideMenuItemTitle;
-(void)_updateSLAttributionViewSupplementalMenu;
-(void)didMoveToWindow;
-(void)updateConstraints;
-(void)useBannerLayout;


@end


#endif