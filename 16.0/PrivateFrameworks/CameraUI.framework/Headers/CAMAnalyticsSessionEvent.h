// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CAMANALYTICSSESSIONEVENT_H
#define CAMANALYTICSSESSIONEVENT_H

@class NSSet, NSMutableDictionary, NSString;


#import "CAMAnalyticsEvent.h"
#import "CAMCallStatusMonitor.h"

@interface CAMAnalyticsSessionEvent : CAMAnalyticsEvent

@property (copy, nonatomic) NSSet *_availableCaptureModes; // ivar: __availableCaptureModes
@property (readonly, nonatomic) CAMCallStatusMonitor *_callStatusMonitor; // ivar: __callStatusMonitor
@property (nonatomic) NSInteger _cameraRollInteraction; // ivar: __cameraRollInteraction
@property (nonatomic) CGFloat _cameraRollStartTime; // ivar: __cameraRollStartTime
@property (nonatomic) CGFloat _cameraRollTotalTime; // ivar: __cameraRollTotalTime
@property (readonly, nonatomic) NSMutableDictionary *_captureCountsByMediaType; // ivar: __captureCountsByMediaType
@property (readonly, nonatomic) NSMutableDictionary *_captureCountsByMode; // ivar: __captureCountsByMode
@property (retain, nonatomic) NSString *_firstCaptureDevicePosition; // ivar: __firstCaptureDevicePosition
@property (retain, nonatomic) NSString *_firstCaptureMode; // ivar: __firstCaptureMode
@property (nonatomic) CGFloat _firstCaptureStartTime; // ivar: __firstCaptureStartTime
@property (nonatomic) BOOL _hadActiveCall; // ivar: __hadActiveCall
@property (retain, nonatomic) NSString *_hostProcess; // ivar: __hostProcess
@property (nonatomic, getter=_isInCameraRoll, setter=_setInCameraRoll:) BOOL _inCameraRoll; // ivar: __inCameraRoll
@property (readonly, nonatomic) BOOL _mrcDetectionEnabled; // ivar: __mrcDetectionEnabled
@property (nonatomic) CGFloat _previewStartTime; // ivar: __previewStartTime
@property (nonatomic) CGFloat _startTime; // ivar: __startTime
@property (readonly, nonatomic) BOOL _textDetectionEnabled; // ivar: __textDetectionEnabled
@property (nonatomic) NSUInteger _totalCaptures; // ivar: __totalCaptures
@property (nonatomic) NSUInteger _totalControlDrawerOpenings; // ivar: __totalControlDrawerOpenings
@property (nonatomic) NSUInteger _totalFocusInteractions; // ivar: __totalFocusInteractions
@property (nonatomic) NSUInteger _totalFocusLockInteractions; // ivar: __totalFocusLockInteractions
@property (nonatomic) NSUInteger _totalMRCInteractions; // ivar: __totalMRCInteractions
@property (nonatomic) NSUInteger _totalTextInteractions; // ivar: __totalTextInteractions
@property (nonatomic) NSUInteger _totalZoomInteractions; // ivar: __totalZoomInteractions
@property (readonly, nonatomic) BOOL didCapture;


+(id)_bucketCaptureCount:(id)arg0 ;
+(void)_incrementDictionaryCount:(id)arg0 forKey:(id)arg1 ;
-(id)_bucketCaptureCountForMediaType:(NSInteger)arg0 ;
-(id)_bucketCaptureCountForMode:(NSInteger)arg0 ;
-(id)eventName;
-(id)initWithCapabilities:(id)arg0 availableCaptureModes:(id)arg1 callStatusMonitor:(id)arg2 ;
-(void)_endSession;
-(void)_handleCallStatusMonitorDidChangeCallActive:(id)arg0 ;
-(void)_incrementCaptureForGraphConfiguration:(id)arg0 analyticsMediaType:(NSInteger)arg1 ;
-(void)countEventsFromAnalyticsVisionSession:(id)arg0 ;
-(void)didCaptureTimelapseWithConfiguration:(id)arg0 ;
-(void)didCaptureWithRequest:(id)arg0 currentConfiguration:(id)arg1 ;
-(void)didDismissCameraRoll;
-(void)didFocusInteraction;
-(void)didFocusLockInteraction;
-(void)didPresentCameraRoll;
-(void)didStartPreview;
-(void)didZoomInteraction:(NSInteger)arg0 ;
-(void)publish;


@end


#endif