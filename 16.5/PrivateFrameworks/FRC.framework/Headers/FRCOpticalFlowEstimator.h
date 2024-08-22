// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FRCOPTICALFLOWESTIMATOR_H
#define FRCOPTICALFLOWESTIMATOR_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "OpticalFlow.h"
#import "FRCImageProcessor.h"

@interface FRCOpticalFlowEstimator : NSObject {
    OpticalFlow *_opticalFlow;
    FRCImageProcessor *_processor;
    BOOL _resourcePreAllocated;
    NSInteger _usage;
    NSUInteger _width;
    NSUInteger _height;
    NSInteger _inputRotation;
    NSObject<OS_os_log> *_logger;
}


@property (readonly, nonatomic) NSUInteger flowHeight;
@property (readonly, nonatomic) NSUInteger flowWidth;


-(NSInteger)opticalFlowFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 flow:(struct __CVBuffer *)arg2 ;
-(NSInteger)opticalFlowsFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 forwardFlow:(struct __CVBuffer *)arg2 backwardFlow:(struct __CVBuffer *)arg3 ;
-(id)initWithUsage:(NSInteger)arg0 ;
-(id)opticalFlowsFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 ;
-(struct __CVBuffer *)opticalFlowFrom:(struct __CVBuffer *)arg0 to:(struct __CVBuffer *)arg1 ;
-(void)allocateResources;
-(void)dealloc;
-(void)releaseResources;


@end


#endif