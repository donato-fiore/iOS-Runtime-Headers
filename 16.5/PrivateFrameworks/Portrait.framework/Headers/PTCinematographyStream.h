// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTCINEMATOGRAPHYSTREAM_H
#define PTCINEMATOGRAPHYSTREAM_H

@class NSString;
@protocol PTCinematographyStreamDelegate;

#import <Foundation/Foundation.h>

#import "PTCinematographyUserTap.h"
#import "PTCinematographyNetwork.h"
#import "PTCinematographyStreamOptions.h"
#import "PTCinematographyFocusPuller.h"
#import "PTCinematographyFrame.h"
#import "PTCinematographyTrackAllocator.h"

@interface PTCinematographyStream : NSObject

@property (retain, nonatomic) PTCinematographyUserTap *activeUserTap; // ivar: _activeUserTap
@property (readonly) NSUInteger activeVersion; // ivar: _activeVersion
@property (nonatomic) NSUInteger autoFocusInFocusRegionSelect; // ivar: _autoFocusInFocusRegionSelect
@property (nonatomic) BOOL autoFocusUseBlurMap; // ivar: _autoFocusUseBlurMap
@property (nonatomic) BOOL autoFocusUseMask; // ivar: _autoFocusUseMask
@property (nonatomic) BOOL canCopyISPDetectionsIfMissing; // ivar: _canCopyISPDetectionsIfMissing
@property (weak, nonatomic) NSObject<PTCinematographyStreamDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSUInteger detectionModel; // ivar: _detectionModel
@property (nonatomic) ? detectorDidRunNextExpectedTime; // ivar: _detectorDidRunNextExpectedTime
@property BOOL didReadFocusStrategyDefault; // ivar: _didReadFocusStrategyDefault
@property (nonatomic) NSUInteger focusBlurMapMode; // ivar: _focusBlurMapMode
@property (nonatomic) NSUInteger frameIndex; // ivar: _frameIndex
@property float internalDefaultFixedFocusDisparity; // ivar: _internalDefaultFixedFocusDisparity
@property NSUInteger internalDefaultFocusStrategy; // ivar: _internalDefaultFocusStrategy
@property (retain) NSString *internalDefaultNetworkVersion; // ivar: _internalDefaultNetworkVersion
@property (readonly) NSString *modelVersionString;
@property (retain, nonatomic) PTCinematographyNetwork *network; // ivar: _network
@property (retain, nonatomic) PTCinematographyStreamOptions *options; // ivar: _options
@property (retain, nonatomic) PTCinematographyFocusPuller *previewFocusPuller; // ivar: _previewFocusPuller
@property (retain, nonatomic) PTCinematographyFrame *previousFrame; // ivar: _previousFrame
@property (nonatomic) NSUInteger previousRecordingState; // ivar: _previousRecordingState
@property (retain, nonatomic) PTCinematographyTrackAllocator *trackAllocator; // ivar: _trackAllocator
@property (nonatomic) float userAperture; // ivar: _userAperture


+(BOOL)isSupportedVersion:(NSUInteger)arg0 ;
+(NSUInteger)latestVersion;
-(BOOL)_detectorDidRunFromFTTrackingResult:(id)arg0 time:(struct ? )arg1 ;
-(BOOL)_hasFusionTrackerMetadata:(id)arg0 ;
-(BOOL)_isFailedTapToTrackFTTapResponse:(id)arg0 ;
-(BOOL)_isFixedFocusFTTapRequest:(id)arg0 ;
-(BOOL)_isFixedFocusFTTapRequestMetadata:(id)arg0 ;
-(BOOL)_isInvalidFTTrack:(id)arg0 ;
-(BOOL)_isSuccessfulTapToTrackFTTapResponse:(id)arg0 ;
-(BOOL)_isTapToTrackFTTapRequest:(id)arg0 ;
-(BOOL)_isUserTap:(id)arg0 inFrameDetections:(id)arg1 ;
-(BOOL)_isValidNormalizedPoint:(struct CGPoint )arg0 ;
-(BOOL)_logUnusualDetection:(id)arg0 info:(id)arg1 ;
-(BOOL)_logUnusualDisparity:(float)arg0 kind:(id)arg1 info:(id)arg2 ;
-(BOOL)_useSyntheticDDR;
-(BOOL)_userTapEndsForBaseFocusDetection:(id)arg0 ;
-(BOOL)_userTapEndsForChangedFocusWithDisparityBuffer:(struct __CVBuffer *)arg0 ;
-(BOOL)_userTapLockEndsAtTime:(struct ? )arg0 ;
-(BOOL)getGlobalMetadata:(id)arg0 ;
-(NSUInteger)_detectionTypeForFTObjectKind:(NSUInteger)arg0 ;
-(NSUInteger)_userDefaultFocusStrategy;
-(float)_defaultAperture;
-(float)_floatValueForAssignmentString:(id)arg0 ;
-(float)_focusDistanceForAutoFocusDetection:(id)arg0 lockedDisparityBufferAddress:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 formatType:(unsigned int)arg5 focusBlurMap:(id)arg6 ;
-(float)_focusDistanceForDetection:(id)arg0 lockedDisparityBufferAddress:(*void)arg1 width:(NSUInteger)arg2 height:(NSUInteger)arg3 bytesPerRow:(NSUInteger)arg4 formatType:(unsigned int)arg5 ;
-(float)_minimumUserTapSeconds;
-(float)_userDefaultFixedFocusDisparity;
-(float)smoothFocusDistance:(float)arg0 trackIdentifier:(NSInteger)arg1 sampleCount:(NSUInteger)arg2 ;
-(id)_ANODPoseFromFTTrackMetadata:(id)arg0 ;
-(id)_autoFocusBlurMapFromMetadata:(id)arg0 ;
-(id)_autoFocusDetectionWithTime:(struct ? )arg0 rect:(struct CGRect )arg1 ;
-(id)_chooseClosestObjectDetection:(id)arg0 ;
-(id)_chooseFocusDetection:(id)arg0 ;
-(id)_chooseLargestAreaDetection:(id)arg0 ;
-(id)_copyInternalState;
-(id)_copyUserFocusDetectionFromDetections:(id)arg0 ;
-(id)_detectionForFixedFocusAtNormalizedPoint:(struct CGPoint )arg0 disparityBuffer:(struct __CVBuffer *)arg1 ;
-(id)_detectionForFixedFocusDistance:(float)arg0 rect:(struct CGRect )arg1 ;
-(id)_detectionsFromFTTrackingResult:(id)arg0 autoFocusRect:(struct CGRect )arg1 focusBlurMap:(id)arg2 namedSignalsPerTrack:(id)arg3 time:(struct ? )arg4 disparityBuffer:(struct __CVBuffer *)arg5 ;
-(id)_disparityWeightingValue;
-(id)_frameDetectionsFromFusionTrackerMetadata:(id)arg0 time:(struct ? )arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(id)_frameDetectionsFromMetadata:(id)arg0 time:(struct ? )arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(id)_frameFromDetections:(id)arg0 userAperture:(float)arg1 snapshotPolicy:(NSUInteger)arg2 disparityPixelBuffer:(struct __CVBuffer *)arg3 ;
-(id)_inFocusRegionForFocusBlurMap:(id)arg0 ;
-(id)_mutableDetectionsFromFTTrackingResult:(id)arg0 namedSignalsPerTrack:(id)arg1 time:(struct ? )arg2 ;
-(id)_namedSignals:(id)arg0 addingANODPoseFromFTTrackMetadata:(id)arg1 ;
-(id)_nextSnapshotForPolicy:(NSUInteger)arg0 ;
-(id)_stringValueForAssignmentString:(id)arg0 ;
-(id)_trackingResultFromFusionTrackerMetadata:(id)arg0 ;
-(id)_userDefaultNetworkVersion;
-(id)_userTapFromFTTapResponse:(id)arg0 frameDetections:(id)arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(id)_userTapFromMetadata:(id)arg0 frameDetections:(id)arg1 disparityBuffer:(struct __CVBuffer *)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg0 ;
-(id)processColorBuffer:(struct __CVBuffer *)arg0 disparityBuffer:(struct __CVBuffer *)arg1 metadataDictionary:(id)arg2 presentationTime:(struct ? )arg3 ;
-(struct CGRect )_autoFocusRectFromMetadata:(id)arg0 ;
-(struct CGRect )_defaultFixedFocusRectForPoint:(struct CGPoint )arg0 disparityBuffer:(struct __CVBuffer *)arg1 ;
-(struct CGRect )_fixedFocusRectForPoint:(struct CGPoint )arg0 disparityBuffer:(struct __CVBuffer *)arg1 ;
-(struct CGRect )_validSensorRectFromMetadata:(id)arg0 ;
-(struct CGSize )_sensorSizeFromMetadata:(id)arg0 ;
-(void)_copyPreviousISPDetections:(id)arg0 toDetections:(id)arg1 time:(struct ? )arg2 ;
-(void)_getFocusStrategyIfNeeded;
-(void)_logFocusChangeForFrame:(id)arg0 ;
-(void)_logUserTap:(id)arg0 ;
-(void)_reset;
-(void)_restoreInternalState:(id)arg0 ;
-(void)_setDisparityOfDetections:(id)arg0 disparityBuffer:(struct __CVBuffer *)arg1 focusBlurMap:(id)arg2 ;
-(void)_updateDetectionModelFromMetadata:(id)arg0 ;
-(void)_updateDetections:(id)arg0 ifMissingISPDetectionsFromTrackingResult:(id)arg1 time:(struct ? )arg2 ;
-(void)_updateFocusBlurMapModeFromMetadata:(id)arg0 ;
-(void)adviseDidStartRecording;
-(void)adviseDidStopRecording;
-(void)endOfStream;


@end


#endif