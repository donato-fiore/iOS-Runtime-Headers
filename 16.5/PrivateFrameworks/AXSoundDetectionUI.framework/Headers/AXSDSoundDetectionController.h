// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDSOUNDDETECTIONCONTROLLER_H
#define AXSDSOUNDDETECTIONCONTROLLER_H

@class NSMutableSet, NSSet, NSString;
@protocol AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, UNUserNotificationCenterDelegate, AXSDDetectorQueueManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXSDListenEngine.h"
#import "AXSDDetectorQueueManager.h"
#import "AXSDUltronInternalRecordingManager.h"
#import "AXSDDetectorManager.h"

@interface AXSDSoundDetectionController : NSObject <AXSDListenEngineDelegate, AXSDDetectorManagerDelegate, UNUserNotificationCenterDelegate, AXSDDetectorQueueManagerDelegate>

 {
    AXSDListenEngine *_listener;
    AXSDDetectorQueueManager *_detectorQueueManager;
    NSMutableSet *_detectorQueue;
    AXSDUltronInternalRecordingManager *_recordingManager;
}


@property (readonly) NSSet *currentDetectionTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) AXSDDetectorManager *detectorManager; // ivar: _detectorManager
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_startInternalRecordingWithFormat:(id)arg0 ;
-(void)addListenType:(id)arg0 ;
-(void)assetsReadyAndDetectorsAdded;
-(void)enrollForDataCollection;
-(void)listenEngineDidStartWithInputFormat:(id)arg0 ;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)receivedBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)receivedCompletion:(id)arg0 ;
-(void)receivedError:(id)arg0 fromDetector:(id)arg1 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;
-(void)removeAllListenTypes;
-(void)removeListenType:(id)arg0 ;
-(void)startListening;
-(void)stopListening;
-(void)unenrollFromDataCollection;


@end


#endif