// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKDAYOCCURRENCEVIEW_H
#define EKDAYOCCURRENCEVIEW_H

@class UIView, UIImageView, UIColor, UIPointerInteraction, UIEditMenuInteraction, NSString, EKEvent;
@protocol UIPointerInteractionDelegate, UIEditMenuInteractionDelegate, NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate, EKDayOccurrenceViewDelegate;


#import "EKDayOccurrenceTravelTimeView.h"
#import "EKDayOccurrenceState.h"
#import "EKDayOccurrenceView.h"

@interface EKDayOccurrenceView : UIView <UIPointerInteractionDelegate, UIEditMenuInteractionDelegate, NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate>

 {
    UIImageView *_eventBackgroundView;
    UIImageView *_contentView;
    UIImageView *_travelBackgroundView;
    EKDayOccurrenceTravelTimeView *_travelTimeContentView;
    BOOL _needsContentCalc;
    BOOL _needsBackgroundImageUpdate;
    UIView *_startResizeHandle;
    UIView *_endResizeHandle;
    CGFloat _originalXBeforeOffset;
    BOOL _touchKeptInsideOccurrence;
    BOOL _offsetContentForLandscape;
    UIEdgeInsets _padding;
    NSUInteger _bottomPinningState;
    CGRect _unpinnedEventBackgroundFrame;
    CGRect _unpinnedTravelBackgroundFrame;
    UIView *_pinFadeView;
    NSInteger _currentRequestId;
    NSUInteger _invalidatedRequestOptions;
    CGPoint _contentLocationDuringReducedProcessing;
    UIColor *_stagedBackgroundColor;
    BOOL _editMenuPresented;
    UIPointerInteraction *_pointerInteraction;
    UIEditMenuInteraction *_editMenuInteraction;
}


@property (nonatomic, getter=isAllDay) BOOL allDay; // ivar: _allDay
@property (nonatomic) BOOL allDayDrawingStyle; // ivar: _allDayDrawingStyle
@property (nonatomic, getter=isBirthday) BOOL birthday; // ivar: _birthday
@property (nonatomic) NSInteger birthdayCount; // ivar: _birthdayCount
@property (nonatomic) CGFloat bottomPinningProximity; // ivar: _bottomPinningProximity
@property (nonatomic, getter=isCancelled) BOOL cancelled; // ivar: _cancelled
@property (nonatomic) CGFloat cappedColorBarHeight; // ivar: _cappedColorBarHeight
@property (readonly, nonatomic) EKDayOccurrenceState *currentImageState; // ivar: _currentImageState
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isDeclined) BOOL declined; // ivar: _declined
@property (weak, nonatomic) NSObject<EKDayOccurrenceViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL dimmed; // ivar: _dimmed
@property (nonatomic) BOOL drawsResizeHandles; // ivar: _drawsResizeHandles
@property (nonatomic) BOOL hasPrecedingDuration; // ivar: _hasPrecedingDuration
@property (nonatomic) BOOL hasTrailingDuration; // ivar: _hasTrailingDuration
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideBackgroundImage; // ivar: _hideBackgroundImage
@property (nonatomic) BOOL hideText; // ivar: _hideText
@property (readonly, nonatomic) BOOL isPinned;
@property (nonatomic) BOOL isProposedTime; // ivar: _isProposedTime
@property (nonatomic) BOOL isSelectedCopyView; // ivar: _isSelectedCopyView
@property (nonatomic) BOOL isVibrant; // ivar: _isVibrant
@property (nonatomic) UIEdgeInsets margin; // ivar: _margin
@property (nonatomic) BOOL needsReply; // ivar: _needsReply
@property (retain, nonatomic) EKEvent *occurrence; // ivar: _occurrence
@property (nonatomic) NSInteger occurrenceBackgroundStyle; // ivar: _occurrenceBackgroundStyle
@property (nonatomic) UIEdgeInsets padding;
@property (nonatomic) BOOL pointerInteractionDisabled; // ivar: _pointerInteractionDisabled
@property (nonatomic) BOOL reduceLayoutProcessingForAnimation; // ivar: _reduceLayoutProcessingForAnimation
@property (nonatomic) NSInteger routingMode;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (weak, nonatomic) EKDayOccurrenceView *selectedCopy; // ivar: _selectedCopy
@property (nonatomic) BOOL showsTravelTime; // ivar: _showsTravelTime
@property (readonly) Class superclass;
@property (nonatomic, getter=isTentative) BOOL tentative; // ivar: _tentative
@property (nonatomic) CGFloat topPinningProximity; // ivar: _topPinningProximity
@property (nonatomic) CGFloat topYBoundaryForText; // ivar: _topYBoundaryForText
@property (nonatomic) BOOL touchesAreBeingTracked; // ivar: _touchesAreBeingTracked
@property (nonatomic) CGFloat travelTime; // ivar: _travelTime
@property (nonatomic) CGFloat travelTimeSubviewHeightInPoints; // ivar: _travelTimeSubviewHeightInPoints
@property (nonatomic) BOOL usesSmallText; // ivar: _usesSmallText
@property (nonatomic) CGFloat visibleHeight; // ivar: _visibleHeight
@property (readonly, nonatomic) BOOL visibleHeightLocked; // ivar: _visibleHeightLocked


+(CGFloat)barToBarGapWidth;
+(CGFloat)barToBarHorizontalDistanceIncludingBarWidth;
+(CGFloat)bottomShadowMargin;
+(CGFloat)colorBarThickness;
+(CGFloat)enoughHeightForOneLineForEvent:(id)arg0 usingSmallText:(BOOL)arg1 sizeClass:(NSInteger)arg2 ;
+(CGFloat)minNaturalTextHeightForEvent:(id)arg0 usingSmallText:(BOOL)arg1 sizeClass:(NSInteger)arg2 ;
+(CGFloat)minimumHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 ;
+(CGFloat)minimumHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 isAllDay:(BOOL)arg2 ;
+(CGFloat)minimumHeightForSizeClass:(NSInteger)arg0 orientation:(NSInteger)arg1 isAllDay:(BOOL)arg2 usesSmallText:(BOOL)arg3 ;
+(id)_viewCache;
+(id)framePathForExternalDragOperationWithSize:(struct CGSize )arg0 ;
+(id)imageForExternalDragOperationFromEvent:(id)arg0 style:(NSInteger)arg1 ;
+(id)occurrenceViewWithFrame:(struct CGRect )arg0 ;
+(struct CGRect )contentStretchRectForFrame:(struct CGRect )arg0 ;
+(struct UIEdgeInsets )defaultMargin;
+(struct UIEdgeInsets )defaultPadding;
+(void)_clearViewCache;
+(void)clearCaches;
-(BOOL)_isAboveAllDayOccurrenceView:(id)arg0 ;
-(BOOL)_isAboveOccurrenceView:(id)arg0 overlapToIgnore:(CGFloat)arg1 ;
-(BOOL)_isBelowAllDayOccurrenceView:(id)arg0 ;
-(BOOL)_isBelowOccurrenceView:(id)arg0 overlapToIgnore:(CGFloat)arg1 ;
-(BOOL)_isTimedOccurrenceDrawingStyle;
-(BOOL)hasIcon;
-(BOOL)pointInside:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(BOOL)resetContentViewToOriginalState:(BOOL)arg0 ;
-(CGFloat)_verticalContentInset;
-(CGFloat)enoughHeightForOneLine;
-(CGFloat)viewMaxNaturalTextHeight;
-(NSInteger)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg0 ;
-(NSInteger)_compareOccurrenceViewLeftToRight:(id)arg0 ;
-(NSInteger)_compareOccurrenceViewTopToBottom:(id)arg0 ;
-(NSInteger)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg0 ;
-(NSInteger)compareOccurrenceViewForTabOrdering:(id)arg0 ;
-(id)_newResizeHandleView;
-(id)arrayOfResizeHandles;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)editMenuInteraction:(id)arg0 menuForConfiguration:(id)arg1 suggestedActions:(id)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)pointerInteraction:(id)arg0 regionForRequest:(id)arg1 defaultRegion:(id)arg2 ;
-(id)pointerInteraction:(id)arg0 styleForRegion:(id)arg1 ;
-(int)dragTypeFromPoint:(struct CGPoint )arg0 ;
-(struct CGRect )_computeTravelTimeContentRect;
-(struct CGRect )_frameForText;
-(struct CGRect )_frameMutatedForProximityToHourLine:(struct CGRect )arg0 ;
-(struct CGRect )editMenuInteraction:(id)arg0 targetRectForConfiguration:(id)arg1 ;
-(struct CGRect )frameOfOpaqueContent;
-(void)_addTravelTimeSubviews;
-(void)_invalidateAllImages;
-(void)_invalidateBackgroundImage;
-(void)_invalidateContentBounds;
-(void)_invalidateCurrentRequest;
-(void)_invalidateTextImage;
-(void)_invalidateTravelTimeImage;
-(void)_removeTravelTimeSubviews;
-(void)_resetContentViewPosition;
-(void)_setUpInteractions;
-(void)_updateColors;
-(void)_updateContentImageViewIfNeeded;
-(void)_updateContentWithPayload:(id)arg0 ;
-(void)_updateCornerRadius;
-(void)_updateResizeHandleLocations;
-(void)animateToFrame:(struct CGRect )arg0 isAllDay:(BOOL)arg1 beginFromCurrentState:(BOOL)arg2 whenFinished:(id)arg3 ;
-(void)bringResizeHandlesToFront;
-(void)dealloc;
-(void)didMoveToSuperview;
-(void)dismissEditingMenu;
-(void)editMenuInteraction:(id)arg0 willDismissMenuForConfiguration:(id)arg1 animator:(id)arg2 ;
-(void)fadeInContentViewAt:(CGFloat)arg0 minWidth:(CGFloat)arg1 animated:(BOOL)arg2 ;
-(void)forceUpdateColors;
-(void)forceUpdateContentWithPayload:(id)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)presentEditingMenu;
-(void)removeFromSuperview;
-(void)requestContentIfNeeded:(NSUInteger)arg0 completion:(id)arg1 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setUserInteractionEnabled:(BOOL)arg0 ;
-(void)touchesBegan:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesCancelled:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesEnded:(id)arg0 withEvent:(id)arg1 ;
-(void)touchesMoved:(id)arg0 withEvent:(id)arg1 ;
-(void)updateAlpha;


@end


#endif