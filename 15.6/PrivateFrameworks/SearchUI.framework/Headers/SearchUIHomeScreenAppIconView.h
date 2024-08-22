// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SEARCHUIHOMESCREENAPPICONVIEW_H
#define SEARCHUIHOMESCREENAPPICONVIEW_H

@class SBIconView, NSString, TLKProminenceView;
@protocol SBIconViewDelegate, SBIconDelegate, SearchUIHomeScreenEngagementDelegate, SearchUIFeedbackDelegate;


#import "SearchUIRowModel.h"

@interface SearchUIHomeScreenAppIconView : SBIconView <SBIconViewDelegate, SBIconDelegate>



@property (nonatomic) BOOL addRoundedKeyboardHighlight; // ivar: _addRoundedKeyboardHighlight
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<SearchUIHomeScreenEngagementDelegate> *engagementDelegate; // ivar: _engagementDelegate
@property (weak, nonatomic) NSObject<SearchUIFeedbackDelegate> *feedbackDelegate; // ivar: _feedbackDelegate
@property (retain) TLKProminenceView *focusHighlightView; // ivar: _focusHighlightView
@property (readonly) NSUInteger hash;
@property BOOL labelNeedsUpdateOnMovingToWindow; // ivar: _labelNeedsUpdateOnMovingToWindow
@property (retain) TLKProminenceView *placeholderView; // ivar: _placeholderView
@property (retain) SearchUIRowModel *rowModel; // ivar: _rowModel
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger variant; // ivar: _variant


+(id)cacheForVariant:(NSUInteger)arg0 ;
-(BOOL)canBecomeFirstResponder;
-(BOOL)canBecomeFocused;
-(BOOL)currentIconIsPlaceholder;
-(BOOL)iconView:(id)arg0 shouldActivateApplicationShortcutItem:(id)arg1 atIndex:(NSUInteger)arg2 ;
-(BOOL)iconViewCanBeginDrags:(id)arg0 ;
-(BOOL)iconViewShouldBeginShortcutsPresentation:(id)arg0 ;
-(BOOL)iconViewShouldIncludeUninstallShortcutItem:(id)arg0 ;
-(BOOL)isTimedOutForIcon:(id)arg0 ;
-(BOOL)shouldHideShortcutsForAppIcon:(id)arg0 ;
-(BOOL)shouldUseSecureWindowForShortcutsPresentationWithIconView:(id)arg0 ;
-(NSInteger)_focusItemDeferralMode;
-(NSInteger)iconView:(id)arg0 draggingStartLocationWithProposedStartLocation:(NSInteger)arg1 ;
-(NSUInteger)imageLoadingBehavior;
-(id)_focusEffectStyle;
-(id)delegate;
-(id)init;
-(id)parallaxSettingsForShortcutsPresentationWithIconView:(id)arg0 ;
-(id)shortcutsDelegateForIconView:(id)arg0 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_updateLabel;
-(void)didEngageWithTriggerEvent:(NSUInteger)arg0 destination:(NSUInteger)arg1 ;
-(void)didMoveToWindow;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)hidePlaceholder:(BOOL)arg0 ;
-(void)icon:(id)arg0 launchFromLocation:(id)arg1 context:(id)arg2 ;
-(void)iconImageViewDidEndAsynchronousImageLoadForIcon:(id)arg0 ;
-(void)iconImageViewWillBeginAsynchronousImageLoadForIcon:(id)arg0 ;
-(void)iconTapped:(id)arg0 ;
-(void)iconViewWillBeginDrag:(id)arg0 session:(id)arg1 ;
-(void)launchIcon;
-(void)layoutSubviews;
-(void)pressesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)pressesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)removePlaceholderAndSetShadowAnimated:(BOOL)arg0 ;
-(void)setFocusHighlightFrame;
-(void)tlk_updateForAppearance:(id)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif