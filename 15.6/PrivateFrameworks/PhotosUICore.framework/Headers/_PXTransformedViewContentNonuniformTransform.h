// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _PXTRANSFORMEDVIEWCONTENTNONUNIFORMTRANSFORM_H
#define _PXTRANSFORMEDVIEWCONTENTNONUNIFORMTRANSFORM_H

@class UIView;


#import "PXNonuniformTransform.h"

@interface _PXTransformedViewContentNonuniformTransform : PXNonuniformTransform

@property (readonly, nonatomic) PXNonuniformTransform *transform; // ivar: _transform
@property (readonly, nonatomic) UIView *transformedView; // ivar: _transformedView


-(id)initWithTransformedView:(id)arg0 transform:(id)arg1 ;
-(id)inverseTransform;
-(struct CGAffineTransform )affineTransformForRect:(struct CGRect )arg0 inCoordinateSpace:(id)arg1 ;


@end


#endif