// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CINEMATICFRAMINGSESSION_H
#define CINEMATICFRAMINGSESSION_H

@class NSString, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CinematicDirectorSession.h"
#import "PerspectiveDistortionCorrectionSession.h"
#import "CinematicFramingSessionOptions.h"

@interface CinematicFramingSession : NSObject {
    CinematicDirectorSession *_directorSession;
    NSObject<OS_dispatch_queue> *_dataOutputDelegateQueue;
    PerspectiveDistortionCorrectionSession *_cropSession;
    CinematicFramingSessionOptions *_options;
    ? _outputDimensions;
    *__CVPixelBufferPool _outputPixelBufferPool;
    unsigned int _roiHeatMap;
    BOOL _calibrationDataRegistered;
    ? _focusPoint;
    NSString *_portType;
    NSString *_deviceModelName;
}


@property (readonly, nonatomic) ? backProjectedDisplayViewport; // ivar: _backProjectedDisplayViewport
@property (nonatomic) int cameraOrientation;
@property (nonatomic) BOOL cameraOrientationCorrectionEnabled;
@property (readonly, nonatomic) CGRect displayViewport; // ivar: _displayViewport
@property (readonly, nonatomic) BOOL displayViewportTransformIsValid; // ivar: _displayViewportTransformIsValid
@property (readonly, nonatomic) ? displayViewportTransformMatrix; // ivar: _displayViewportTransformMatrix
@property (readonly, nonatomic) unsigned int exifOrientation; // ivar: _exifOrientation
@property ? focusPoint;
@property (readonly, nonatomic) int mode; // ivar: _mode
@property (retain, nonatomic) CinematicFramingSessionOptions *options;
@property (nonatomic) int outputType; // ivar: _outputType
@property (readonly, nonatomic) NSArray *roiHeatMapCounts;
@property (readonly, nonatomic) float subjectOccupancyFraction; // ivar: _subjectOccupancyFraction
@property (readonly, nonatomic) CGRect subjectRectangle; // ivar: _subjectRectangle


-(id)initWithOutputDimensions:(struct ? )arg0 mode:(int)arg1 portType:(id)arg2 ;
-(id)initWithOutputDimensions:(struct ? )arg0 mode:(int)arg1 portType:(id)arg2 deviceModelName:(id)arg3 ;
-(int)processPixelBuffer:(struct __CVBuffer *)arg0 withMetadata:(id)arg1 outputPixelBuffer:(struct __CVBuffer *)arg2 ;
-(struct CGRect )processWithMetadata:(id)arg0 ;
-(struct CGRect )warpBoundingBoxInFrameCoordinatesToDisplayCoordinates:(struct CGRect )arg0 ;
-(struct __CVBuffer *)processPixelBuffer:(struct __CVBuffer *)arg0 withMetadata:(id)arg1 ;
-(struct opaqueCMSampleBuffer *)_createSampleBufferFromPixelBuffer:(struct __CVBuffer *)arg0 referenceSampleBuffer:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)_updateROIHeatMapCountersWithCropRect:(struct CGRect )arg0 ;


@end


#endif