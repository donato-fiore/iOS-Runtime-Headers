// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIINDEXBARVIEW_H
#define UIINDEXBARVIEW_H

@class NSString, NSArray;
@protocol UIAccessibilityHUDGestureDelegate, UIIndexBarViewDelegate, UIIndexBarVisualStyle;


#import "UIControl.h"
#import "UIAccessibilityHUDGestureManager.h"
#import "UIColor.h"
#import "UISelectionFeedbackGenerator.h"

@interface UIIndexBarView : UIControl <UIAccessibilityHUDGestureDelegate>



@property (retain, nonatomic) UIAccessibilityHUDGestureManager *axHUDGestureManager; // ivar: _axHUDGestureManager
@property (nonatomic) CGFloat cachedDisplayHighlightedIndex; // ivar: _cachedDisplayHighlightedIndex
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) CGFloat deflection; // ivar: _deflection
@property (weak, nonatomic) NSObject<UIIndexBarViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSArray *displayEntries; // ivar: _displayEntries
@property (readonly, nonatomic) CGFloat displayHighlightedIndex;
@property (copy, nonatomic) NSArray *entries; // ivar: _entries
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger highlightStyle; // ivar: _highlightStyle
@property (nonatomic) CGFloat highlightedIndex; // ivar: _highlightedIndex
@property (copy, nonatomic) UIColor *indexColor; // ivar: _indexColor
@property (copy, nonatomic) UIColor *nonTrackingBackgroundColor; // ivar: _nonTrackingBackgroundColor
@property (retain, nonatomic) UISelectionFeedbackGenerator *selectionFeedbackGenerator; // ivar: _selectionFeedbackGenerator
@property (readonly) Class superclass;
@property (copy, nonatomic) UIColor *trackingBackgroundColor; // ivar: _trackingBackgroundColor
@property (retain, nonatomic) NSObject<UIIndexBarVisualStyle> *visualStyle; // ivar: _visualStyle


+(id)visualStyleForIndexBarView:(id)arg0 ;
+(void)registerVisualStyle:(Class)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_accessibilityHUDGestureManager:(id)arg0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg1 ;
-(BOOL)_accessibilityHUDGestureManagerCancelsTouchesInView:(id)arg0 ;
-(BOOL)_canDrawContent;
-(BOOL)_defaultCanBecomeFocused;
-(BOOL)_didSelectEntry:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)_selectEntry:(id)arg0 atIndex:(NSInteger)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(BOOL)canBecomeFocused;
-(BOOL)continueTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(id)_accessibilityHUDGestureManager:(id)arg0 HUDItemForPoint:(struct CGPoint )arg1 ;
-(id)backgroundColor;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_accessibilityHUDGestureManager:(id)arg0 gestureLiftedAtPoint:(struct CGPoint )arg1 ;
-(void)_handleTouches:(id)arg0 withEvent:(id)arg1 ;
-(void)_largeContentViewerEnabledStatusDidChange:(id)arg0 ;
-(void)_setupAXHUDGestureIfNecessary;
-(void)_updateBackgroundColor;
-(void)_updateDisplayEntries;
-(void)_userInteractionStarted;
-(void)_userInteractionStopped;
-(void)cancelTrackingWithEvent:(id)arg0 ;
-(void)didMoveToWindow;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)endTrackingWithTouch:(id)arg0 withEvent:(id)arg1 ;
-(void)layoutSubviews;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)tintColorDidChange;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;


@end


#endif