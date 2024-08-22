// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWINFERENCESCHEDULERRESOURCECOORDINATOR_H
#define BWINFERENCESCHEDULERRESOURCECOORDINATOR_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface BWInferenceSchedulerResourceCoordinator : NSObject {
    NSMutableDictionary *_requestedPoolSizeByFormat;
    NSMutableDictionary *_pixelBufferPoolByFormat;
}




+(void)initialize;
-(id)formatsWithRequestedPoolsRemainingAfterSubtractingFormats:(id)arg0 ;
-(id)init;
-(id)pixelBufferPoolForFormat:(id)arg0 ;
-(int)requestPixelBufferPoolForFormat:(id)arg0 size:(NSUInteger)arg1 ;
-(int)requestPixelBufferPoolForRequirement:(id)arg0 size:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)preparePixelBufferPools;


@end


#endif