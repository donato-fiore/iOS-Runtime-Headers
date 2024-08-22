// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDMUTABLELAYOUTGEOMETRY_H
#define TSDMUTABLELAYOUTGEOMETRY_H



#import "TSDLayoutGeometry.h"

@interface TSDMutableLayoutGeometry : TSDLayoutGeometry

@property (nonatomic) CGSize size;
@property (nonatomic) CGAffineTransform transform;


-(void)outsetBy:(struct CGSize )arg0 ;
-(void)transformBy:(struct CGAffineTransform )arg0 ;


@end


#endif