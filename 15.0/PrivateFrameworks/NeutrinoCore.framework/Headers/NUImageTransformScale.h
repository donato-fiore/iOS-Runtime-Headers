// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUIMAGETRANSFORMSCALE_H
#define NUIMAGETRANSFORMSCALE_H



#import "NUImageTransformAffine.h"

@interface NUImageTransformScale : NUImageTransformAffine

@property (readonly) ? scale; // ivar: _scale


-(BOOL)isIdentityImageTransform;
-(id)initWithAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)initWithScale:(struct ? )arg0 ;
-(id)inverseTransform;


@end


#endif