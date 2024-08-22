// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NUJSIMAGETRANSFORM_H
#define NUJSIMAGETRANSFORM_H

@protocol NUJSImageTransformExport;


#import "NUJSProxy.h"
#import "NUImageTransform.h"

@interface NUJSImageTransform : NUJSProxy <NUJSImageTransformExport>



@property (readonly) NUImageTransform *transform;


-(id)description;
-(id)initWithImageTransform:(id)arg0 context:(id)arg1 ;
-(id)initWithRepresentedObject:(id)arg0 context:(id)arg1 ;
-(id)transformByRotateX:(CGFloat)arg0 y:(CGFloat)arg1 z:(CGFloat)arg2 ;
-(id)transformByRotateZ:(CGFloat)arg0 ;
-(id)transformByScaleX:(CGFloat)arg0 scaleY:(CGFloat)arg1 ;
-(id)transformByTranslateX:(CGFloat)arg0 translateY:(CGFloat)arg1 ;


@end


#endif