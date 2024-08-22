// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CINEMATICFRAMINGSESSION_H
#define CINEMATICFRAMINGSESSION_H

@class NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CinematicDirectorSession.h"
#import "PerspectiveDistortionCorrectionSession.h"
#import "CinematicFramingSessionOptions.h"

@interface CinematicFramingSession : NSObject {
    CinematicDirectorSession *_directorSession;
    NSObject<OS_dispatch_queue> *_dataOutputDelegateQueue;
    PerspectiveDistortionCorrectionSession *_cropSession;
    ? _outputDimensions;
    *__CVPixelBufferPool _outputPixelBufferPool;
    unsigned int _roiHeatMap;
}


@property (nonatomic) int cameraOrientation;
@property (readonly, nonatomic) CGRect displayViewport; // ivar: _displayViewport
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (readonly, nonatomic) NSArray *roiHeatMapCounts;


-(float)zoomLevel;
-(id)init;
-(id)initWithOutputDimensions:(struct ? )arg0 ;
-(int)processPixelBuffer:(struct __CVBuffer *)arg0 withMetadata:(id)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 ;
-(struct CGRect )processWithMetadata:(id)arg0 ;
-(struct CGRect )warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect )arg0 ;
-(struct __CVBuffer *)processPixelBuffer:(struct __CVBuffer *)arg0 withMetadata:(id)arg1 ;
-(struct opaqueCMSampleBuffer *)_createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg0 referenceSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_updateROIHeatMapCountersWithCropRect:(struct CGRect )arg0 ;
-(void)dealloc;
-(void)reset;
-(void)setZoomLevel:(float)arg0 ;


@end


#endif