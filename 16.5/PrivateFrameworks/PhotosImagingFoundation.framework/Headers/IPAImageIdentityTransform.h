// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAIMAGEIDENTITYTRANSFORM_H
#define IPAIMAGEIDENTITYTRANSFORM_H



#import "IPAImageTransform.h"

@interface IPAImageIdentityTransform : IPAImageTransform



-(BOOL)canAlignToPixelsExactly;
-(id)description;
-(id)inverseTransform;
-(struct Vector2d )mapVector:(struct Vector2d )arg0 ;


@end


#endif