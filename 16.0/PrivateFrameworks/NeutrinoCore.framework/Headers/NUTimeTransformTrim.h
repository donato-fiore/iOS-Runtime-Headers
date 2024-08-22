// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NUTIMETRANSFORMTRIM_H
#define NUTIMETRANSFORMTRIM_H



#import "NUGeometryTransform.h"

@interface NUTimeTransformTrim : NUGeometryTransform

@property (readonly) ? beginTime; // ivar: _beginTime


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)init;
-(id)initWithTrimBeginTime:(struct ? )arg0 ;
-(id)inverseTransform;
-(struct ? )transformTime:(struct ? )arg0 ;


@end


#endif