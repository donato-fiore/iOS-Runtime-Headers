// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDKSHOTCONTROLLER_H
#define AXSDKSHOTCONTROLLER_H

@class NSMutableDictionary, HearingMLHelperService, NSString;
@protocol AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, AXSDKShotRecordingManagerDelegate, HearingMLHelperServiceDelegate, AXSDUltronModelAssetManagerDelegate, AXSDKShotDetectorQueueManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXSDListenEngine.h"
#import "AXSDKShotRecordingManager.h"
#import "AXSDKShotDetectorQueueManager.h"
#import "AXSDKShotDetector.h"
#import "AXSDDetectorManager.h"

@interface AXSDKShotController : NSObject <AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, AXSDKShotRecordingManagerDelegate, HearingMLHelperServiceDelegate, AXSDUltronModelAssetManagerDelegate, AXSDKShotDetectorQueueManagerDelegate>

 {
    AXSDListenEngine *_listenEngine;
    AXSDKShotRecordingManager *_kShotRecordingManager;
    AXSDKShotDetectorQueueManager *_detectorQueueManager;
    NSObject<OS_dispatch_queue> *_listenerQueue;
    NSMutableDictionary *_listenerHanders;
    HearingMLHelperService *_xpcHelperService;
    AXSDKShotDetector *_cachedDetector;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXSDDetectorManager *detectorManager; // ivar: detectorManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (nonatomic) NSUInteger visualizationBucketCount; // ivar: _visualizationBucketCount


+(id)sharedInstance;
-(id)init;
-(void)_kickOffTrainingForCachedDetector;
-(void)addGeneralApplianceDetector;
-(void)addListenType:(id)arg0 ;
-(void)assetsNotReadyForUltronManager:(id)arg0 ;
-(void)assetsReadyAndDetectorsAdded;
-(void)assetsReadyForUltronManager:(id)arg0 ;
-(void)deregisterListener:(id)arg0 ;
-(void)hearingMLHelperService:(id)arg0 eventOccurred:(NSInteger)arg1 ;
-(void)kickoffTrainingForDetector:(id)arg0 ;
-(void)listenEngineDidStartWithInputFormat:(id)arg0 ;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)receivedBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)receivedCompletion:(id)arg0 ;
-(void)receivedError:(id)arg0 fromDetector:(id)arg1 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;
-(void)registerListener:(id)arg0 forRecordingUpdates:(id)arg1 ;
-(void)removeAllListenTypes;
-(void)savedTrainingRecordingForDetector:(id)arg0 ;
-(void)startListening;
-(void)startListeningToTrainDetector:(id)arg0 ;
-(void)stopListening;


@end


#endif