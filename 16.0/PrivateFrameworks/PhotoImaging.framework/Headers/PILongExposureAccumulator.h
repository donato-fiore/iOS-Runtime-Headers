// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PILONGEXPOSUREACCUMULATOR_H
#define PILONGEXPOSUREACCUMULATOR_H

@class NSMutableArray, NSDictionary, NSError;
@protocol NURenderer, NUSurfaceStorage, OS_dispatch_queue, OS_dispatch_semaphore, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface PILongExposureAccumulator : NSObject {
    ? _pixelSize;
    id<NURenderer> *_renderer;
    id<NUSurfaceStorage> *_temporaryDestinationStorage;
    id<NUSurfaceStorage> *_averageAccumulationStorage;
    id<NUSurfaceStorage> *_minimumAccumulationStorage;
    id<NUSurfaceStorage> *_maximumAccumulationStorage;
    NSInteger _frameCount;
    NSUInteger _jobNumber;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_accumQueue;
    NSObject<OS_dispatch_semaphore> *_accumSemaphore;
    NSObject<OS_dispatch_semaphore> *_readySemaphore;
    NSObject<OS_dispatch_group> *_doneGroup;
    NSMutableArray *_inputFrames;
    BOOL _finished;
    NSDictionary *_imageOptions;
}


@property (retain) NSError *_accumError; // ivar: __accumError
@property (readonly) BOOL isReadyForMoreData;


-(BOOL)_accumulate:(id)arg0 error:(*id)arg1 ;
-(BOOL)_exportOutputImage:(id)arg0 format:(int)arg1 colorSpace:(struct CGColorSpace *)arg2 toURL:(id)arg3 uti:(id)arg4 error:(*id)arg5 ;
-(BOOL)_initializeAccumulation:(*id)arg0 ;
-(BOOL)_initializeStorage:(id)arg0 image:(id)arg1 error:(*id)arg2 ;
-(BOOL)accumulate:(id)arg0 error:(*id)arg1 ;
-(BOOL)start:(*id)arg0 ;
-(BOOL)writeLongExposureImage:(id)arg0 UTI:(id)arg1 colorSpace:(id)arg2 error:(*id)arg3 ;
-(BOOL)writeMaskImage:(id)arg0 UTI:(id)arg1 error:(*id)arg2 ;
-(id)_dynamismMapWithMinImage:(id)arg0 maxImage:(id)arg1 extent:(struct ? )arg2 ;
-(id)_nextInputFrame;
-(id)initWithSize:(struct ? )arg0 renderer:(id)arg1 jobNumber:(NSUInteger)arg2 ;
-(id)nextInputFrame;
-(id)workingColorSpace;
-(void)_accumulate:(id)arg0 ;
-(void)_appendInputFrame:(id)arg0 ;
-(void)_initializeAccumulation;
-(void)_markAsFinished;
-(void)_start;
-(void)cancel;
-(void)dealloc;
-(void)markAsFinished;
-(void)waitUntilDone;


@end


#endif