// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFDRAWERGESTURECOORDINATOR_H
#define WFDRAWERGESTURECOORDINATOR_H

@class NSString, UIPanGestureRecognizer, UIScrollView, UITapGestureRecognizer;
@protocol WFDrawerDismissalHelperDelegate, WFDrawerGestureCoordinatorDelegate;

#import <Foundation/Foundation.h>

#import "WFDrawerVelocityFilter.h"

@interface WFDrawerGestureCoordinator : NSObject <WFDrawerDismissalHelperDelegate>



@property (nonatomic) CGFloat bottomRubberBandRange; // ivar: _bottomRubberBandRange
@property (nonatomic) BOOL correctingContentOffset; // ivar: _correctingContentOffset
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) NSObject<WFDrawerGestureCoordinatorDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) WFDrawerVelocityFilter *heightAccelerationFilter; // ivar: _heightAccelerationFilter
@property (readonly, nonatomic) WFDrawerVelocityFilter *heightVelocityFilter; // ivar: _heightVelocityFilter
@property (nonatomic) CGPoint initialContentOffset; // ivar: _initialContentOffset
@property (nonatomic) CGFloat maximumDrawerHeight; // ivar: _maximumDrawerHeight
@property (nonatomic) CGFloat minimumDrawerHeight; // ivar: _minimumDrawerHeight
@property (readonly, nonatomic) UIPanGestureRecognizer *panGestureRecognizer; // ivar: _panGestureRecognizer
@property (nonatomic) CGPoint previousPanTranslation; // ivar: _previousPanTranslation
@property (retain, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger tapGestureIgnoringCount; // ivar: _tapGestureIgnoringCount
@property (readonly, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // ivar: _tapGestureRecognizer
@property (nonatomic) CGFloat topRubberBandRange; // ivar: _topRubberBandRange
@property (nonatomic) CGPoint unmodifiedInitialContentOffset; // ivar: _unmodifiedInitialContentOffset


-(CGFloat)applyRubberBandToValue:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(CGFloat)clampedDrawerHeight:(CGFloat)arg0 ;
-(CGFloat)containerHeight;
-(CGFloat)dismissalRectTopEdgeForCardDismissalHelper:(id)arg0 coordinateSpace:(id)arg1 ;
-(CGFloat)drawerHeight;
-(CGFloat)heightForRubberBandHeight:(CGFloat)arg0 ;
-(CGFloat)rubberBandHeightForHeight:(CGFloat)arg0 ;
-(CGFloat)unapplyRubberBandToValue:(CGFloat)arg0 withRange:(CGFloat)arg1 ;
-(id)dragGestureTrackerForCardDismissalHelper:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 ;
-(void)beginDragging;
-(void)beginIgnoringTapGestures;
-(void)dragTranslatedWithVerticalDelta:(CGFloat)arg0 ;
-(void)drawerDismissalHelper:(id)arg0 requestedDismissalWithVelocity:(CGFloat)arg1 ;
-(void)endDraggingWithAnimation:(id)arg0 ;
-(void)endDraggingWithVerticalVelocity:(CGFloat)arg0 animation:(id)arg1 ;
-(void)endIgnoringTapGestures;
-(void)handlePanGesture:(id)arg0 ;
-(void)handleTapGesture:(id)arg0 ;
-(void)scrollViewDidScroll:(id)arg0 ;
-(void)scrollViewWillBeginDragging:(id)arg0 ;
-(void)scrollViewWillEndDragging:(id)arg0 withVelocity:(struct CGPoint )arg1 targetContentOffset:(struct CGPoint *)arg2 ;
-(void)updateTapGestureRecognizer;


@end


#endif