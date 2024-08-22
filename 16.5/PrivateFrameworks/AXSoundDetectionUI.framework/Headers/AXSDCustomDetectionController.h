// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXSDCUSTOMDETECTIONCONTROLLER_H
#define AXSDCUSTOMDETECTIONCONTROLLER_H

@class NSString;
@protocol AXSDListenEngineDelegate, AXSDKShotModelManagerDelegate;

#import <Foundation/Foundation.h>

#import "AXSDListenEngine.h"
#import "AXSDKShotModelManager.h"

@interface AXSDCustomDetectionController : NSObject <AXSDListenEngineDelegate, AXSDKShotModelManagerDelegate>

 {
    AXSDListenEngine *_listener;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) AXSDKShotModelManager *modelManager; // ivar: _modelManager
@property (readonly) Class superclass;


+(id)sharedInstance;
-(id)currentCustomDetectors;
-(id)init;
-(void)addCustomDetector:(id)arg0 ;
-(void)listenEngineDidStartWithInputFormat:(id)arg0 ;
-(void)listenEngineFailedToStartWithError:(id)arg0 ;
-(void)receivedBuffer:(id)arg0 atTime:(id)arg1 ;
-(void)receivedCompletion:(id)arg0 ;
-(void)receivedError:(id)arg0 fromDetector:(id)arg1 ;
-(void)receivedObservation:(id)arg0 forDetector:(id)arg1 ;
-(void)removeAllListenTypes;
-(void)removeCustomDetector:(id)arg0 ;
-(void)startListening;
-(void)stopListening;


@end


#endif