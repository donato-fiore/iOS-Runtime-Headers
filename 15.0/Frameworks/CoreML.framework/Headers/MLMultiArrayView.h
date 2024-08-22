// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MLMULTIARRAYVIEW_H
#define MLMULTIARRAYVIEW_H



#import "MLMultiArray.h"

@interface MLMultiArrayView : MLMultiArray

@property (readonly, nonatomic) MLMultiArray *parent; // ivar: _parent


+(BOOL)isSqueezableShape:(id)arg0 ;
+(BOOL)isSqueezableShape:(id)arg0 dimensions:(id)arg1 ;
+(void)squeezeShape:(id)arg0 strides:(id)arg1 resultingShape:(*id)arg2 resultingStrides:(*id)arg3 ;
-(id)initExpandingDimensionsOfMultiArray:(id)arg0 axis:(NSInteger)arg1 ;
-(id)initSlicingMultiArray:(id)arg0 origin:(id)arg1 shape:(id)arg2 squeeze:(BOOL)arg3 error:(*id)arg4 ;
-(id)initSqueezingMultiArray:(id)arg0 dimensions:(id)arg1 error:(*id)arg2 ;


@end


#endif