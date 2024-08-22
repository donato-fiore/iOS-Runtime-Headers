// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXSDVOICETRIGGERCONTROLLER_H
#define AXSDVOICETRIGGERCONTROLLER_H

@class NSString;
@protocol AXSDListenEngineDelegate, AXSDVoiceTriggerModelManagerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXSDListenEngine.h"
#import "AXSDVoiceTriggerModelManager.h"

@interface AXSDVoiceTriggerController : NSObject <AXSDListenEngineDelegate, AXSDVoiceTriggerModelManagerDelegate>

 {
    AXSDListenEngine *_listener;
    AXSDVoiceTriggerModelManager *_modelManager;
    NSObject<OS_dispatch_queue> *_processingQueue;
    BOOL _isListening;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)init;
-(void)_postVoiceTriggerEventToSystem:(NSInteger)arg0 ;
-(void)listenEngineDidStartWithInputFormat:(id)arg0 ;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)listeningStoppedWithError:(id)arg0 ;
-(void)receivedBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)receivedError:(id)arg0 fromDetector:(id)arg1 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;
-(void)startListening;
-(void)startListeningOnQueue:(id)arg0 ;
-(void)stopListening;


@end


#endif