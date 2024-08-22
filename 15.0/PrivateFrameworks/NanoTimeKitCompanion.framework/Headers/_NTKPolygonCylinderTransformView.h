// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NTKPOLYGONCYLINDERTRANSFORMVIEW_H
#define _NTKPOLYGONCYLINDERTRANSFORMVIEW_H

@class UIView, NSMutableDictionary;



@interface _NTKPolygonCylinderTransformView : UIView {
    CGFloat _interiorAngle;
    CGFloat _exteriorAngle;
    NSMutableDictionary *_faceViews;
}


@property (readonly, nonatomic) CGFloat faceDistanceToCenter; // ivar: _faceDistanceToCenter
@property (readonly, nonatomic) NSUInteger numberOfFaces; // ivar: _numberOfFaces
@property (readonly, nonatomic) NSUInteger numberOfVisibleFaces; // ivar: _numberOfVisibleFaces
@property (readonly, nonatomic) CGFloat rotationAnglePerFace;


+(Class)layerClass;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithNumberOfFaces:(NSUInteger)arg0 ;
-(id)viewForFaceAtIndex:(NSUInteger)arg0 ;
-(struct CATransform3D )_transformForFaceIndex:(NSUInteger)arg0 ;
-(void)enumerateFaceViewsWithBlock:(id)arg0 ;
-(void)layoutSubviews;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setView:(id)arg0 forFaceAtIndex:(NSUInteger)arg1 ;


@end


#endif