// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXMOUTPUTMANAGER_H
#define AXMOUTPUTMANAGER_H

@class NSArray, NSString;
@protocol AXMTaskDispatcherDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "AXMTaskDispatcher.h"
#import "AXMAudioSession.h"
#import "AXMSoundComponent.h"
#import "AXMSpeechComponent.h"
#import "AXMHapticComponent.h"
#import "AXMOutputManagerConfiguration.h"

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate>

 {
    AXMTaskDispatcher *_outputRequests;
    BOOL _usesPrivateAudioSession;
    AXMAudioSession *_audioSession;
    NSInteger _state;
    NSObject<OS_dispatch_queue> *_queue;
    AXMSoundComponent *_queue_soundComponent;
    AXMSpeechComponent *_queue_speechComponent;
    AXMHapticComponent *_queue_hapticComponent;
    NSArray *_queue_activeComponents;
}


@property (retain, nonatomic) AXMOutputManagerConfiguration *configuration; // ivar: _configuration
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)dispatchRequest:(id)arg0 ;
-(id)initWithComponents:(NSUInteger)arg0 options:(NSUInteger)arg1 ;
-(id)initWithConfiguration:(id)arg0 ;
-(id)playActiveSound:(id)arg0 ;
-(void)disable;
-(void)dispatcher:(id)arg0 handleTask:(id)arg1 ;
-(void)enableWithCompletion:(id)arg0 ;
-(void)interrupt:(id)arg0 ;
-(void)interruptImmediately;
-(void)interruptPolitely;
-(void)playSound:(id)arg0 ;
-(void)speak:(id)arg0 ;


@end


#endif