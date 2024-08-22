// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PTDISPARITYPOSTPROCESSING_H
#define PTDISPARITYPOSTPROCESSING_H

@protocol PTAbstractDisparityFilter, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface PTDisparityPostProcessing : NSObject {
    id<PTAbstractDisparityFilter> *_disparityFilter;
    id<MTLCommandQueue> *_commandQueue;
    ? _filteredDisparitySize;
    ? _disparitySize;
    ? _colorSize;
}




+(int)prewarmForMediaserverd;
+(int)prewarmWithDescriptor:(id)arg0 ;
-(id)initWithCommandQueue:(id)arg0 disparitySize:(struct ? )arg1 filteredDisparitySize:(struct ? )arg2 disparityPixelFormat:(NSUInteger)arg3 colorSize:(struct ? )arg4 colorPixelFormat:(NSUInteger)arg5 sensorPort:(id)arg6 ;
-(id)initWithDescriptor:(id)arg0 ;
-(int)computeOpticalFlow:(id)arg0 outDisplacement:(id)arg1 ;
-(int)temporalDisparityFilter:(id)arg0 inDisplacement:(id)arg1 inDisparityFilteredPrev:(id)arg2 outDisparityFiltered:(id)arg3 disparityBias:(float)arg4 ;
-(int)temporalDisparityFilter:(id)arg0 inStatePrev:(id)arg1 inDisparity:(id)arg2 outDisparityFiltered:(id)arg3 outState:(id)arg4 ;
-(void)reset;


@end


#endif