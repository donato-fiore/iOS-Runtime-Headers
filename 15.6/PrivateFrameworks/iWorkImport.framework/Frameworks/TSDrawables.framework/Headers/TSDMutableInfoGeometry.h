// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDMUTABLEINFOGEOMETRY_H
#define TSDMUTABLEINFOGEOMETRY_H



#import "TSDInfoGeometry.h"

@interface TSDMutableInfoGeometry : TSDInfoGeometry



-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)setAngle:(CGFloat)arg0 ;
-(void)setCenter:(struct CGPoint )arg0 ;
-(void)setHeightValid:(BOOL)arg0 ;
-(void)setHorizontalFlip:(BOOL)arg0 ;
-(void)setPosition:(struct CGPoint )arg0 ;
-(void)setSize:(struct CGSize )arg0 ;
-(void)setTransformedBoundsOrigin:(struct CGPoint )arg0 ;
-(void)setVerticalFlip:(BOOL)arg0 ;
-(void)setWidthValid:(BOOL)arg0 ;


@end


#endif