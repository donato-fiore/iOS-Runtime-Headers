// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWDETECTEDOBJECTSINFORINGBUFFER_H
#define BWDETECTEDOBJECTSINFORINGBUFFER_H

@class NSMutableArray, NSString;
@protocol BWObjectDetector;

#import <Foundation/Foundation.h>


@interface BWDetectedObjectsInfoRingBuffer : NSObject <BWObjectDetector>

 {
    NSMutableArray *_ringBuffer;
    *OpaqueFigSimpleMutex _mutex;
    int _depth;
    int _numConsecutiveFramesWithObjects;
    ? _lastUpdatePTS;
    ? _lastStableObjectPTS;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSObject<BWObjectDetector> *objectDetector;
@property (readonly) float secondsSinceLastObjectDetected;
@property (readonly) Class superclass;


-(id)initWithRingBufferDepth:(int)arg0 ;
-(id)objectsForPTS:(struct ? )arg0 ;
-(void)addObjectsFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)transferObjectsToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 totalSensorCropRect:(struct CGRect )arg1 ;


@end


#endif