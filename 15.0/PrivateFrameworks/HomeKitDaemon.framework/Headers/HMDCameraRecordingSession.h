// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDCAMERARECORDINGSESSION_H
#define HMDCAMERARECORDINGSESSION_H

@class HMFObject, NSData, NSString, NSDictionary, NSUUID, HMIVideoAnalyzerFragmentResult, HMIVideoFragment, NSNumber, HMFActivity;
@protocol HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate, HMDCameraRecordingSessionVariantFragmentManagerDelegate, HMDCameraRecordingSessionDelegate, HMDCameraRecordingSessionFactory, HMDCameraRecordingSessionVideoAnalyzer, OS_dispatch_queue;


#import "HMDCameraProfile.h"
#import "HMDStreamData.h"
#import "HMDCameraClipUploader.h"
#import "HMDCameraRecordingSessionSignificantEventManager.h"
#import "HMDCameraSignificantEventServer.h"
#import "HMDCameraRecordingSessionVariantFragmentManager.h"
#import "HMDCameraRecordingSessionTimelineManager.h"

@interface HMDCameraRecordingSession : HMFObject <HMFLogging, HMDCameraRecordingSessionVideoAnalyzerDelegate, HMDCameraClipUploaderDelegate, HMDCameraRecordingSessionVariantFragmentManagerDelegate>



@property (getter=isActive) BOOL active; // ivar: _active
@property (retain) NSData *analysisTimelapseVideoInitData; // ivar: _analysisTimelapseVideoInitData
@property (retain) NSData *analysisVideoInitData; // ivar: _analysisVideoInitData
@property (readonly) HMDCameraProfile *camera; // ivar: _camera
@property (retain) HMDStreamData *cameraVideoInitFragment; // ivar: _cameraVideoInitFragment
@property ? clipStartTime; // ivar: _clipStartTime
@property (retain) HMDCameraClipUploader *clipUploader; // ivar: _clipUploader
@property (readonly) CGFloat configuredFragmentDuration; // ivar: _configuredFragmentDuration
@property NSUInteger currentFragmentNumber; // ivar: _currentFragmentNumber
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<HMDCameraRecordingSessionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSObject<HMDCameraRecordingSessionFactory> *factory; // ivar: _factory
@property (copy) NSString *fragmentDirectoryPath; // ivar: _fragmentDirectoryPath
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSDictionary *homePresenceByPairingIdentity; // ivar: _homePresenceByPairingIdentity
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (retain) HMIVideoAnalyzerFragmentResult *introAnalyzerResult; // ivar: _introAnalyzerResult
@property (retain) HMIVideoFragment *introFragment; // ivar: _introFragment
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property BOOL noMoreFragmentsAvailable; // ivar: _noMoreFragmentsAvailable
@property NSUInteger pendingFragmentsCount; // ivar: _pendingFragmentsCount
@property (readonly) NSUInteger recordingEventTriggers;
@property (copy) NSNumber *remainingRecordingExtensionDuration; // ivar: _remainingRecordingExtensionDuration
@property (readonly) HMFActivity *sessionActivity; // ivar: _sessionActivity
@property (readonly) HMDCameraRecordingSessionSignificantEventManager *significantEventManager; // ivar: _significantEventManager
@property (readonly) HMDCameraSignificantEventServer *significantEventServer; // ivar: _significantEventServer
@property (readonly) Class superclass;
@property ? timelapseClipStartTime; // ivar: _timelapseClipStartTime
@property (retain) HMDCameraClipUploader *timelapseClipUploader; // ivar: _timelapseClipUploader
@property (readonly) HMDCameraRecordingSessionVariantFragmentManager *timelapseFragmentManager; // ivar: _timelapseFragmentManager
@property (readonly) HMDCameraRecordingSessionTimelineManager *timelineManager; // ivar: _timelineManager
@property (readonly) NSObject<HMDCameraRecordingSessionVideoAnalyzer> *videoAnalyzer; // ivar: _videoAnalyzer
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isValidFirstSessionFragment:(id)arg0 ;
-(BOOL)_isValidNonFirstSessionFragment:(id)arg0 ;
-(BOOL)_shouldEndSessionAfterFragment:(id)arg0 ;
-(BOOL)_shouldRecordFragmentWithAnalyzerResult:(id)arg0 sequenceNumber:(NSUInteger)arg1 recordingEventTriggers:(NSUInteger)arg2 fragmentAnalyzedEvent:(id)arg3 ;
-(BOOL)activityZonesIncludedForSignificantEventDetection;
-(id)activityZones;
-(id)attributeDescriptions;
-(id)initWithWorkQueue:(id)arg0 camera:(id)arg1 configuredFragmentDuration:(CGFloat)arg2 timelineManager:(id)arg3 significantEventServer:(id)arg4 homePresenceByPairingIdentity:(id)arg5 ;
-(id)initWithWorkQueue:(id)arg0 camera:(id)arg1 configuredFragmentDuration:(CGFloat)arg2 timelineManager:(id)arg3 significantEventServer:(id)arg4 homePresenceByPairingIdentity:(id)arg5 factory:(id)arg6 ;
-(void)_endSessionWithError:(id)arg0 ;
-(void)_finishCurrentClipUploader;
-(void)_finishCurrentTimelapseClipUploader;
-(void)_handleDidFailAnalysisWithError:(id)arg0 ;
-(void)_handleFragmentResult:(id)arg0 ;
-(void)_notifyForAnalyzerResult:(id)arg0 fragment:(id)arg1 timeOffsetWithinClip:(CGFloat)arg2 recordingEventTriggers:(NSUInteger)arg3 ;
-(void)_notifyForSignificantEvent:(id)arg0 recordingEventTriggers:(NSUInteger)arg1 fragmentNumber:(NSUInteger)arg2 ;
-(void)_submitNotificationSuccessMetricWithRecordingEventTriggers:(NSUInteger)arg0 fragmentNumber:(NSUInteger)arg1 ;
-(void)_uploadFragment:(id)arg0 withDuration:(CGFloat)arg1 posterFrames:(id)arg2 clipFinalizedBecauseMaxDurationExceeded:(BOOL)arg3 ;
-(void)_uploadTimelapseFragment:(id)arg0 ;
-(void)_writeFragment:(id)arg0 ;
-(void)analyzer:(id)arg0 didAnalyzeFragmentWithResult:(id)arg1 ;
-(void)analyzer:(id)arg0 didAnalyzeFrameWithResult:(id)arg1 ;
-(void)analyzer:(id)arg0 didCreateTimelapseFragment:(id)arg1 ;
-(void)analyzer:(id)arg0 didFailWithError:(id)arg1 ;
-(void)configure;
-(void)dealloc;
-(void)handleFragment:(id)arg0 ;
-(void)handleNoMoreFragmentsAvailable;
-(void)uploaderDidFailUpload:(id)arg0 ;
-(void)variantFragmentManager:(id)arg0 didSelectVariantFragment:(id)arg1 overlapsFullFragment:(BOOL)arg2 ;


@end


#endif