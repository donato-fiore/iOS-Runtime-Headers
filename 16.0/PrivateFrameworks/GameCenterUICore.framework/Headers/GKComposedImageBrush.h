// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOMPOSEDIMAGEBRUSH_H
#define GKCOMPOSEDIMAGEBRUSH_H

@class UIImage;


#import "GKImageBrush.h"

@interface GKComposedImageBrush : GKImageBrush

@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (retain, nonatomic) UIImage *maskImage; // ivar: _maskImage
@property (nonatomic) UIEdgeInsets maskInsets; // ivar: _maskInsets
@property (retain, nonatomic) UIImage *overlayImage; // ivar: _overlayImage


-(CGFloat)scaleForInput:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(struct CGSize )sizeForInput:(id)arg0 ;
-(void)drawInRect:(struct CGRect )arg0 withContext:(struct CGContext *)arg1 input:(id)arg2 ;


@end


#endif