// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NTKPOLYGONCYLINDERVIEW_H
#define NTKPOLYGONCYLINDERVIEW_H

@class UIView, NSString;
@protocol NTKEditOptionContainerView;


#import "_NTKPolygonCylinderTransformView.h"

@interface NTKPolygonCylinderView : UIView <NTKEditOptionContainerView>

 {
    _NTKPolygonCylinderTransformView *_transformView;
    CGFloat _rotationAngle;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger numberOfSides;
@property (readonly, nonatomic) NSUInteger numberOfVisibleSides;
@property (readonly) Class superclass;


-(CGFloat)_rotationAngleForFaceIndex:(NSInteger)arg0 ;
-(id)init;
-(id)viewForSideAtIndex:(NSUInteger)arg0 ;
-(void)_informFaceViewsOfRotation;
-(void)_setRotationAngle:(CGFloat)arg0 ;
-(void)_updateTransform;
-(void)enumerateSideViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setView:(id)arg0 forSideAtIndex:(NSUInteger)arg1 ;
-(void)transitionToFraction:(CGFloat)arg0 fromSideAtIndex:(NSUInteger)arg1 toSideAtIndex:(NSUInteger)arg2 ;
-(void)transitionToSideAtIndex:(NSUInteger)arg0 ;


@end


#endif