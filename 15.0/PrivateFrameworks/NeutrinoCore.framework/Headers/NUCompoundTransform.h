// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUCOMPOUNDTRANSFORM_H
#define NUCOMPOUNDTRANSFORM_H

@class NSArray;


#import "NUGeometryTransform.h"

@interface NUCompoundTransform : NUGeometryTransform {
    NSArray *_transforms;
}




-(id)description;
-(id)initWithSrcTransforms:(id)arg0 dstTransforms:(id)arg1 ;
-(id)initWithTransforms:(id)arg0 ;
-(id)inverseTransform;
-(struct ? )transformMatrix:(struct ? )arg0 ;
-(struct ? )transformTime:(struct ? )arg0 ;
-(struct CGPoint )transformPoint:(struct CGPoint )arg0 ;


@end


#endif