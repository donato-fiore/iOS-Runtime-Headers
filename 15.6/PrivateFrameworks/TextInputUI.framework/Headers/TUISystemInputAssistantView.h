// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUISYSTEMINPUTASSISTANTVIEW_H
#define TUISYSTEMINPUTASSISTANTVIEW_H

@class UIView, UIKBVisualEffectView, NSString, UITextInputAssistantItem, UIKBRenderConfig;
@protocol TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate, _UIButtonBarAppearanceDelegate, TUISystemInputAssistantViewDelegate, TUISystemInputAssistantStyle;


#import "TUICandidateView.h"
#import "TUISystemInputAssistantPageView.h"
#import "TUISystemInputAssistantLayoutStandard.h"
#import "TUISystemInputAssistantLayout.h"
#import "TUIAssistantButtonBarView.h"
#import "TUIPredictionView.h"

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate>

 {
    BOOL _buttonBarItemsExpanded;
    BOOL _needsValidation;
    int _needsValidationGuard;
}


@property (retain, nonatomic) NSObject<_UIButtonBarAppearanceDelegate> *appearanceDelegate; // ivar: _appearanceDelegate
@property (retain, nonatomic) UIKBVisualEffectView *backdropView; // ivar: _backdropView
@property (nonatomic) BOOL backgroundVisible; // ivar: _backgroundVisible
@property (readonly, nonatomic) TUICandidateView *candidateView;
@property (retain, nonatomic) TUISystemInputAssistantPageView *centerPageView; // ivar: _centerPageView
@property (retain, nonatomic) UIView *centerView; // ivar: _centerView
@property (nonatomic) BOOL centerViewHidden; // ivar: _centerViewHidden
@property (nonatomic) CGFloat centerViewWidth; // ivar: _centerViewWidth
@property (readonly, nonatomic) CGRect containerFrame; // ivar: _containerFrame
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) TUISystemInputAssistantLayoutStandard *defaultLayout; // ivar: _defaultLayout
@property (weak, nonatomic) NSObject<TUISystemInputAssistantViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hidesExpandableButton; // ivar: _hidesExpandableButton
@property (retain, nonatomic) UITextInputAssistantItem *inputAssistantItem; // ivar: _inputAssistantItem
@property (readonly, nonatomic) BOOL isInputAssistantItemHidden;
@property (readonly, nonatomic) BOOL isTransitioning; // ivar: _isTransitioning
@property (retain, nonatomic) TUISystemInputAssistantLayout *layout; // ivar: _layout
@property (retain, nonatomic) TUIAssistantButtonBarView *leftButtonBar; // ivar: _leftButtonBar
@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (retain, nonatomic) UIKBRenderConfig *renderConfig; // ivar: _renderConfig
@property (retain, nonatomic) TUIAssistantButtonBarView *rightButtonBar; // ivar: _rightButtonBar
@property (nonatomic) BOOL showsButtonBarItemsInline; // ivar: _showsButtonBarItemsInline
@property (readonly, nonatomic) BOOL showsCenterView;
@property (nonatomic) BOOL showsExpandableButtonBarItems; // ivar: _showsExpandableButtonBarItems
@property (retain, nonatomic) NSObject<TUISystemInputAssistantStyle> *style; // ivar: _style
@property (readonly) Class superclass;
@property (retain, nonatomic) UITextInputAssistantItem *systemInputAssistantItem; // ivar: _systemInputAssistantItem
@property (retain, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar; // ivar: _unifiedButtonBar


-(BOOL)_areButtonBarItemsVisible;
-(BOOL)_shouldHostCenterViewOutsidePageView;
-(BOOL)_swiftPlaygroundsWorkaroundEnabled;
-(BOOL)shouldSkipValidation;
-(id)_createUnifiedButtonBarIfNecessary;
-(id)_currentLayoutViewSet;
-(id)_hostedCenterView;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_didTapExpandButton:(id)arg0 ;
-(void)_exchangeCenterViewIfNecessaryForCompatibility;
-(void)_setButtonBarItemsExpanded:(BOOL)arg0 animationType:(NSUInteger)arg1 ;
-(void)_updateBarButtonGroups;
-(void)_updateBarButtonGroupsIfNeeded;
-(void)_updateExpandableButtonBarItems;
-(void)_updateStyle;
-(void)_updateVisualProvider;
-(void)assistantButtonBarView:(id)arg0 wantsToShowCollapsedItemGroup:(id)arg1 fromButton:(id)arg2 ;
-(void)assistantPageView:(id)arg0 didSwitchToSecondaryViewVisible:(BOOL)arg1 ;
-(void)setButtonBarItemsExpanded:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setNeedsValidation;
-(void)transitionToLayout:(id)arg0 withStyle:(id)arg1 start:(id)arg2 ;
-(void)validateIfNeeded;


@end


#endif