// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBORIENTATIONTRANSFORMWRAPPERVIEW_H
#define SBORIENTATIONTRANSFORMWRAPPERVIEW_H

@class UIView, NSMutableArray, NSArray;


#import "_SBOrientationTransformedContentView.h"

@interface SBOrientationTransformWrapperView : UIView {
    _SBOrientationTransformedContentView *_transformedView;
    NSMutableArray *_hitTestViews;
}


@property (nonatomic) NSInteger containerOrientation; // ivar: _containerOrientation
@property (nonatomic) NSInteger contentOrientation; // ivar: _contentOrientation
@property (readonly, nonatomic) NSArray *contentViews;
@property (nonatomic, getter=isCounterTransformView) BOOL counterTransformView;


-(id)description;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGAffineTransform )convertTransformFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGAffineTransform )arg0 ;
-(struct CGAffineTransform )convertTransformFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGAffineTransform )arg0 ;
-(struct CGPoint )convertPointFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGPoint )arg0 ;
-(struct CGPoint )convertPointFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGPoint )arg0 ;
-(struct CGRect )convertRectFromContainerInterfaceOrientationToContentInterfaceOrientation:(struct CGRect )arg0 ;
-(struct CGRect )convertRectFromContentInterfaceOrientationToContainerInterfaceOrientation:(struct CGRect )arg0 ;
-(struct CGSize )_referenceContainerSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateGeometry;
-(void)addContentView:(id)arg0 ;
-(void)addGestureRecognizerToTransformedView:(id)arg0 ;
-(void)addHitTestView:(id)arg0 ;
-(void)bringContentSubviewToFront:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeGestureRecognizerFromTransformedView:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;


@end


#endif