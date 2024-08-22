// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BWDETECTEDFACESRINGBUFFER_H
#define BWDETECTEDFACESRINGBUFFER_H

@class NSMutableArray, NSString;
@protocol BWFaceDetector;

#import <Foundation/Foundation.h>


@interface BWDetectedFacesRingBuffer : NSObject <BWFaceDetector>

 {
    NSMutableArray *_ringBuffer;
    *OpaqueFigSimpleMutex _mutex;
    int _depth;
    int _numConsecutiveFramesWithFaces;
    ? _lastUpdatePTS;
    ? _lastStableFacePTS;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<BWFaceDetector> *faceDetector;
@property (readonly) NSUInteger hash;
@property (readonly) float secondsSinceLastFaceDetected;
@property (readonly) Class superclass;


-(id)initWithDepth:(int)arg0 ;
-(void)addFacesFromSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(void)dealloc;
-(void)flush;
-(void)transferFacesToSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 totalSensorCropRect:(struct CGRect )arg1 ;


@end


#endif