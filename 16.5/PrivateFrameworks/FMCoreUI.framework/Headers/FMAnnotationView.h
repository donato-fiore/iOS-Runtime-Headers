// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FMANNOTATIONVIEW_H
#define FMANNOTATIONVIEW_H

@class MKAnnotationView, CALayer, CAShapeLayer;
@protocol FMAnnotation><MKAnnotation;



@interface FMAnnotationView : MKAnnotationView

@property (retain, nonatomic) NSObject<FMAnnotation><MKAnnotation> *annotation;
@property (nonatomic) BOOL hasPhotoImage; // ivar: _hasPhotoImage
@property (nonatomic) BOOL isDelayed; // ivar: _isDelayed
@property (nonatomic) BOOL isShowingLargeSelectedAnnotation; // ivar: _isShowingLargeSelectedAnnotation
@property (retain, nonatomic) CALayer *largeCircleLayer; // ivar: _largeCircleLayer
@property (retain, nonatomic) CALayer *largePersonImageLayer; // ivar: _largePersonImageLayer
@property (retain, nonatomic) CAShapeLayer *largeRingLayer; // ivar: _largeRingLayer
@property (retain, nonatomic) CALayer *locationInnerLayer; // ivar: _locationInnerLayer
@property (retain, nonatomic) CALayer *locationOuterLayer; // ivar: _locationOuterLayer
@property (nonatomic) BOOL shouldPreventLargeAnnotationState; // ivar: _shouldPreventLargeAnnotationState
@property (retain, nonatomic) CALayer *smallCircleLayer; // ivar: _smallCircleLayer
@property (retain, nonatomic) CALayer *smallPersonImageLayer; // ivar: _smallPersonImageLayer
@property (retain, nonatomic) CAShapeLayer *smallRingLayer; // ivar: _smallRingLayer


+(BOOL)_followsTerrain;
+(void)preloadAssets;
+(void)setImagePadding:(CGFloat)arg0 ;
+(void)setLargeAnnotationBorderVisible:(BOOL)arg0 ;
+(void)setShouldMaskLayer:(BOOL)arg0 ;
+(void)setThickAnnotationBorder:(BOOL)arg0 ;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 ;
-(id)initWithAnnotation:(id)arg0 reuseIdentifier:(id)arg1 tintColor:(id)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)_selectionWasUpdated:(BOOL)arg0 ;
-(void)_setupSpringActions;
-(void)_transitionToNewSize:(BOOL)arg0 ;
-(void)_updateAnnotationStyle;
-(void)addColorInvertFilterToLayer:(id)arg0 ;
-(void)animateDelayedAnimation;
-(void)dealloc;
-(void)invertColorStatusDidChange:(id)arg0 ;
-(void)prepareForReuse;
-(void)removeColorInvertFilterToLayer:(id)arg0 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 delay:(CGFloat)arg2 ;
-(void)setTintColor:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)updateStyleForAnnotation:(id)arg0 ;


@end


#endif