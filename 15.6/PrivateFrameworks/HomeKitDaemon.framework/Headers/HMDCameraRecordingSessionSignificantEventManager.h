// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDCAMERARECORDINGSESSIONSIGNIFICANTEVENTMANAGER_H
#define HMDCAMERARECORDINGSESSIONSIGNIFICANTEVENTMANAGER_H

@class HMFObject, NSString, NSMutableArray;
@protocol HMFLogging, OS_dispatch_queue;


#import "HMDCameraSignificantEventFaceClassificationResolver.h"

@interface HMDCameraRecordingSessionSignificantEventManager : HMFObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HMDCameraSignificantEventFaceClassificationResolver *faceClassificationResolver; // ivar: _faceClassificationResolver
@property (copy) id *faceClassificationUUIDFactory; // ivar: _faceClassificationUUIDFactory
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *logIdentifier; // ivar: _logIdentifier
@property (copy) id *significantEventUUIDFactory; // ivar: _significantEventUUIDFactory
@property (readonly) NSMutableArray *significantEvents; // ivar: _significantEvents
@property (readonly) Class superclass;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue; // ivar: _workQueue


+(id)logCategory;
-(BOOL)_isAnyEventInAnalyzerEvents:(id)arg0 includedInRecordingEventTriggers:(NSUInteger)arg1 ;
-(BOOL)_isAnyEventInAnalyzerFrameResults:(id)arg0 includedInRecordingEventTriggers:(NSUInteger)arg1 ;
-(BOOL)isAnyEventInAnalyzerFragmentResult:(id)arg0 includedInRecordingEventTriggers:(NSUInteger)arg1 ;
-(id)_faceRecognitionSignificantEventsForAnalyzerEvent:(id)arg0 dateOfOccurrence:(id)arg1 heroFrameData:(id)arg2 timeOffsetWithinClip:(CGFloat)arg3 confidenceLevel:(NSUInteger)arg4 ;
-(id)_filteredAndUpdatedSignificantEventsFromSignificantEvents:(id)arg0 ;
-(id)_filteredFaceClassificationsFromFaceClassifications:(id)arg0 ;
-(id)_significantEventsForAnalyzerEvent:(id)arg0 dateOfOccurrence:(id)arg1 heroFrameData:(id)arg2 timeOffsetWithinClip:(CGFloat)arg3 recordingEventTriggers:(NSUInteger)arg4 ;
-(id)_significantEventsForEmptyAnalyzerResult:(id)arg0 dateOfOccurrence:(id)arg1 timeOffsetWithinClip:(CGFloat)arg2 ;
-(id)_significantEventsForFrameResult:(id)arg0 analyzerResult:(id)arg1 dateOfOccurrence:(id)arg2 timeOffsetWithinClip:(CGFloat)arg3 recordingEventTriggers:(NSUInteger)arg4 ;
-(id)initWithWorkQueue:(id)arg0 faceClassificationResolver:(id)arg1 logIdentifier:(id)arg2 ;
-(id)significantEventsForAnalyzerFragmentResult:(id)arg0 dateOfOccurrence:(id)arg1 timeOffsetWithinClip:(CGFloat)arg2 recordingEventTriggers:(NSUInteger)arg3 ;
-(void)resetState;


@end


#endif