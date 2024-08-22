// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMIBACKGROUNDESTIMATOR_H
#define HMIBACKGROUNDESTIMATOR_H

@class HMFObject, NSString, NSMutableDictionary, NSMutableArray;
@protocol HMFLogging;


#import "HMIVideoAnalyzerConfiguration.h"

@interface HMIBackgroundEstimator : HMFObject <HMFLogging>



@property BOOL adjustBrightness; // ivar: _adjustBrightness
@property *unsigned short assignment; // ivar: _assignment
@property (readonly) ? backgroundChangeInterval; // ivar: _backgroundChangeInterval
@property (readonly) ? backgroundChangeResetInterval; // ivar: _backgroundChangeResetInterval
@property ? backgroundChangeTimeStamp; // ivar: _backgroundChangeTimeStamp
@property (readonly) ? backgroundExpireInterval; // ivar: _backgroundExpireInterval
@property ? backgroundTimeStamp; // ivar: _backgroundTimeStamp
@property (readonly) HMIVideoAnalyzerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property ? foregroundTimeStamp; // ivar: _foregroundTimeStamp
@property (readonly) BOOL hasNewBackground;
@property (readonly) NSUInteger hash;
@property CGSize imageSize; // ivar: _imageSize
@property (readonly) NSMutableDictionary *inactiveTracks; // ivar: _inactiveTracks
@property (readonly) NSUInteger minSampleSize; // ivar: _minSampleSize
@property CGSize modelSize; // ivar: _modelSize
@property (readonly) NSMutableArray *motionDetections; // ivar: _motionDetections
@property (readonly) NSMutableArray *motionTimeStamps; // ivar: _motionTimeStamps
@property (readonly) ? motionValidInterval; // ivar: _motionValidInterval
@property NSUInteger numImages; // ivar: _numImages
@property NSUInteger numTracks; // ivar: _numTracks
@property *float runningMean; // ivar: _runningMean
@property *float runningStd; // ivar: _runningStd
@property (readonly) Class superclass;
@property (readonly) NSMutableDictionary *tracks; // ivar: _tracks


+(id)logCategory;
-(BOOL)_adjustBackgroundAtAttribute:(char *)arg0 backgroundChanged:(BOOL)arg1 timeStamp:(struct ? )arg2 ;
-(BOOL)_invalidateBackgroundForPixelBuffer:(struct __CVBuffer *)arg0 timeStamp:(struct ? )arg1 ;
-(BOOL)_updateBackgroundFromPixelBuffer:(struct __CVBuffer *)arg0 timeStamp:(struct ? )arg1 ;
-(float)_intersectionOverUnionFromBlob:(id)arg0 boundingBox:(struct CGRect )arg1 assignment:(*unsigned short)arg2 ;
-(id)_blobsFromAssignment:(*unsigned short)arg0 timeStamp:(struct ? )arg1 ;
-(id)_exportInternalStateForPixelBuffer:(struct __CVBuffer *)arg0 exportMode:(NSUInteger)arg1 ;
-(id)_foregroundBlobsFromBlobs:(id)arg0 backgroundChanged:(*BOOL)arg1 ;
-(id)_predictForegroundFromPixelBuffer:(struct __CVBuffer *)arg0 timeStamp:(struct ? )arg1 ;
-(id)_stationaryTracks:(id)arg0 timeStamp:(struct ? )arg1 ;
-(id)analyzePixelBuffer:(struct __CVBuffer *)arg0 timeStamp:(struct ? )arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)visualizeBackgroundMean;
-(id)visualizeBackgroundStd;
-(id)visualizeForegroundAssignment;
-(id)visualizeForegroundDiffForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_copyFromOutputBuffer:(*float)arg0 toPixelBuffer:(struct __CVBuffer *)arg1 ;
-(void)_copyFromPixelBuffer:(struct __CVBuffer *)arg0 toInputBuffer:(*float)arg1 translateCol:(int)arg2 translateRow:(int)arg3 ;
-(void)_correctRunningMeanBrightnessAtAttribute:(char *)arg0 ;
-(void)_ensureInternalBuffersForPixelBuffer:(struct __CVBuffer *)arg0 ;
-(void)_expireMotionDetectionsAtTimeStamp:(struct ? )arg0 ;
-(void)_foregroundDifferencesFromPixelBuffer:(struct __CVBuffer *)arg0 differences:(*float)arg1 ;
-(void)_foregroundPixelsFromPixelBuffer:(struct __CVBuffer *)arg0 attribute:(char *)arg1 assignment:(*unsigned short)arg2 useChromaOnly:(BOOL)arg3 ;
-(void)_updateCurrentTracks:(id)arg0 inactiveTracks:(id)arg1 blobs:(id)arg2 timeStamp:(struct ? )arg3 ;
-(void)_updateRunningMean:(*float)arg0 runningSquaredMean:(*float)arg1 fromInputBuffer:(*float)arg2 decay:(float)arg3 ;
-(void)_updateRunningStd:(*float)arg0 withAuxBuffer:(*float)arg1 runningMean:(*float)arg2 runningSquaredMean:(*float)arg3 ;
-(void)assignBackgroundEvents:(id)arg0 timeStamp:(struct ? )arg1 ;
-(void)assignForegroundEvents:(id)arg0 timeStamp:(struct ? )arg1 ;
-(void)dealloc;
-(void)handleMotionDetection:(id)arg0 inFrame:(struct opaqueCMSampleBuffer *)arg1 ;
-(void)reset;


@end


#endif