// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UICALLOUTBAR_H
#define UICALLOUTBAR_H

@class NSArray, NSMutableArray, NSDictionary, NSString;
@protocol UICalloutBarDelegate;


#import "UIView.h"
#import "UICalloutBarButton.h"
#import "UICalloutBarBackground.h"
#import "_UICalloutBarVisualStyle.h"
#import "UIResponder.h"
#import "UIScrollView.h"
#import "UIStackView.h"

@interface UICalloutBar : UIView {
    BOOL m_fadeAfterCommand;
    BOOL m_recalcVisibleItems;
    int m_pageCount;
    int m_currentPage;
    CGRect m_supressesHorizontalMovementFrame;
    CGFloat m_supressedHorizontalMovementX;
    CGFloat m_availableSpaceOnLeft;
    CGFloat m_availableSpaceOnRight;
    NSArray *m_systemButtonDescriptions;
    NSMutableArray *m_currentSystemButtons;
    NSMutableArray *m_extraButtons;
    UICalloutBarButton *m_nextButton;
    UICalloutBarButton *m_previousButton;
    UICalloutBarBackground *m_overlay;
    CGFloat m_fadedTime;
    BOOL m_fadedDueToCommand;
    id *m_responderTargetCompletionHandler;
    BOOL m_didPromptForReplace;
    BOOL m_ignoreFade;
    NSMutableArray *m_separatorViews;
    UIView *m_buttonView;
    NSInteger m_hoveredIndex;
    _UICalloutBarVisualStyle *m_visualStyle;
}


@property (nonatomic) int arrowDirection; // ivar: m_arrowDirection
@property (nonatomic) CGRect controlFrame; // ivar: m_controlFrame
@property (retain, nonatomic) NSDictionary *currentAppearOrFadeContext; // ivar: m_currentAppearOrFadeContext
@property (weak, nonatomic) NSObject<UICalloutBarDelegate> *delegate; // ivar: m_delegate
@property (copy, nonatomic) NSArray *extraItems; // ivar: m_extraItems
@property (readonly, nonatomic) BOOL isDisplayingVertically; // ivar: m_isDisplayingVertically
@property (readonly, nonatomic) BOOL isUsingVerticalFallbackPosition; // ivar: m_isUsingVerticalFallbackPosition
@property (nonatomic) CGPoint pointAboveControls; // ivar: m_pointAboveControls
@property (nonatomic) CGPoint pointBelowControls; // ivar: m_pointBelowControls
@property (nonatomic) CGPoint pointLeftOfControls; // ivar: m_pointLeftOfControls
@property (nonatomic) CGPoint pointRightOfControls; // ivar: m_pointRightOfControls
@property (readonly, nonatomic) NSArray *rectsToEvade; // ivar: m_rectsToEvade
@property (copy, nonatomic) NSArray *replacements; // ivar: m_replacements
@property (weak, nonatomic) UIResponder *responderTarget; // ivar: m_responderTarget
@property (nonatomic) BOOL showAllReplacements; // ivar: m_showAllReplacements
@property (nonatomic) BOOL suppressesAppearance; // ivar: m_suppressesAppearance
@property (nonatomic) BOOL supressesHorizontalMovement; // ivar: m_supressesHorizontalMovement
@property (nonatomic) int targetDirection; // ivar: m_targetDirection
@property (nonatomic) BOOL targetHorizontal; // ivar: m_targetHorizontal
@property (nonatomic) CGPoint targetPoint; // ivar: m_targetPoint
@property (nonatomic) CGRect targetRect; // ivar: m_targetRect
@property (weak, nonatomic) UIView *targetView; // ivar: m_targetView
@property (copy, nonatomic) NSString *untruncatedString; // ivar: m_untruncatedString
@property (readonly, nonatomic) UIScrollView *verticalScrollView; // ivar: m_verticalScrollView
@property (readonly, nonatomic) UIStackView *verticalStackView; // ivar: m_verticalStackView
@property (readonly, nonatomic) BOOL visible;


+(BOOL)sharedCalloutBarIsVisible;
+(id)_visualStyleForCalloutBar:(id)arg0 ;
+(id)activeCalloutBar;
+(id)sharedCalloutBar;
+(void)_releaseSharedInstance;
+(void)fadeSharedCalloutBar;
+(void)fadeSharedCalloutBarFromTargetView:(id)arg0 ;
+(void)hideSharedCalloutBar;
+(void)hideSharedCalloutBarFromTargetView:(id)arg0 ;
+(void)performWithoutAffectingSharedCalloutBar:(id)arg0 ;
+(void)registerVisualStyle:(Class)arg0 forIdiom:(NSInteger)arg1 ;
-(BOOL)_isOwnedByView:(id)arg0 ;
-(BOOL)_touchesInsideShouldHideCalloutBar;
-(BOOL)_updateVisibleItemsAnimated:(BOOL)arg0 ;
-(BOOL)calculateControlFrameForCalloutSize:(struct CGSize )arg0 below:(BOOL)arg1 ;
-(BOOL)calculateControlFrameForCalloutSize:(struct CGSize )arg0 right:(BOOL)arg1 ;
-(BOOL)calculateControlFrameInsideTargetRect:(struct CGSize )arg0 ;
-(BOOL)containsButtonForAction:(SEL)arg0 ;
-(BOOL)fadedDueToCommand;
-(BOOL)hasReplacements;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)recentlyFaded;
-(BOOL)rectClear:(struct CGRect )arg0 ;
-(BOOL)setFrameForSize:(struct CGSize )arg0 ;
-(CGFloat)maxVerticalCalloutHeightForMinButtonHeight:(CGFloat)arg0 ;
-(CGFloat)supressHorizontalXMovementIfNeededForPoint:(struct CGPoint )arg0 proposedX:(CGFloat)arg1 ;
-(NSInteger)indexOfButton:(id)arg0 ;
-(id)_targetForAction:(SEL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(int)textEffectsVisibilityLevel;
-(struct CGRect )textEffectsWindowSafeArea;
-(void)_clearResponderTarget;
-(void)_endOngoingAppearOrFadeAnimations;
-(void)_fadeAfterCommand:(SEL)arg0 ;
-(void)_showNextItems:(id)arg0 ;
-(void)_showPreviousItems:(id)arg0 ;
-(void)addRectToEvade:(struct CGRect )arg0 ;
-(void)addVerticalSeparatorAfterButton:(id)arg0 usingLargeText:(BOOL)arg1 ;
-(void)adjustFrameToAvoidDividerOnArrow;
-(void)appear;
-(void)appearAnimationDidStopWithContext:(id)arg0 ;
-(void)applicationDidAddDeactivationReason:(id)arg0 ;
-(void)buttonHighlighted:(id)arg0 highlighted:(BOOL)arg1 ;
-(void)buttonHovered:(id)arg0 index:(NSInteger)arg1 hovered:(BOOL)arg2 ;
-(void)buttonPressed:(id)arg0 ;
-(void)clearEvadeRects;
-(void)clearReplacements;
-(void)clearSupressesHorizontalMovementFrame;
-(void)configureButtons:(CGFloat)arg0 ;
-(void)configureButtonsForVerticalView:(CGFloat)arg0 ;
-(void)dealloc;
-(void)fade;
-(void)fadeAnimationDidStopWithContext:(id)arg0 finished:(BOOL)arg1 ;
-(void)fadeFromTargetView:(id)arg0 ;
-(void)hide;
-(void)hideFromTargetView:(id)arg0 ;
-(void)keyboardAnalyticsDispatchWithSelector:(SEL)arg0 ;
-(void)removeFromSuperview;
-(void)resetPage;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)scrollableButtonTouchDown:(id)arg0 ;
-(void)show;
-(void)update;
-(void)updateAnimated:(BOOL)arg0 ;
-(void)updateAvailableButtons;
-(void)updateForCurrentHorizontalPage;
-(void)updateForCurrentPage;
-(void)updateForCurrentVerticalPage;


@end


#endif