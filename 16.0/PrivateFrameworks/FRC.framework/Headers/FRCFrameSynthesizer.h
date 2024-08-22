// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FRCFRAMESYNTHESIZER_H
#define FRCFRAMESYNTHESIZER_H

@protocol FRCSynthesis, OS_os_log;

#import <Foundation/Foundation.h>

#import "FRCImageProcessor.h"

@interface FRCFrameSynthesizer : NSObject {
    BOOL _resourcePreAllocated;
    NSInteger _usage;
    id<FRCSynthesis> *_synthesis;
    FRCImageProcessor *_processor;
    NSUInteger _width;
    NSUInteger _height;
    BOOL _featureCreated;
    NSInteger _inputRotation;
    NSObject<OS_os_log> *_logger;
}




-(BOOL)checkForwardFlow:(struct __CVBuffer *)arg0 backwardFlow:(struct __CVBuffer *)arg1 ;
-(BOOL)configureSynthesisWithMode:(NSInteger)arg0 ;
-(id)errorWithErrorCode:(NSInteger)arg0 ;
-(id)initWithUsage:(NSInteger)arg0 ;
-(id)initWithUsage:(NSInteger)arg0 qualityMode:(NSInteger)arg1 ;
-(id)synthesizeFramesFromFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 forwardFlow:(struct __CVBuffer *)arg2 backwardFlow:(struct __CVBuffer *)arg3 numberOfFrames:(NSUInteger)arg4 withError:(*id)arg5 ;
-(id)synthesizeFramesFromFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 forwardFlow:(struct __CVBuffer *)arg2 backwardFlow:(struct __CVBuffer *)arg3 timeScales:(id)arg4 withError:(*id)arg5 ;
-(void)allocateResources;
-(void)dealloc;
-(void)releaseResources;
-(void)setFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 forwardFlow:(struct __CVBuffer *)arg2 backwardFlow:(struct __CVBuffer *)arg3 ;
-(void)synthesizeFrameForTimeScale:(float)arg0 destination:(struct __CVBuffer *)arg1 ;
-(void)synthesizeFrameFromFirstFrame:(struct __CVBuffer *)arg0 secondFrame:(struct __CVBuffer *)arg1 forwardFlow:(struct __CVBuffer *)arg2 backwardFlow:(struct __CVBuffer *)arg3 timeScale:(float)arg4 destination:(struct __CVBuffer *)arg5 ;


@end


#endif