// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TLALERTCONTROLLER_H
#define TLALERTCONTROLLER_H

@class NSString, NSMapTable;
@protocol TLAlertPlaybackBackEndController, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "TLAlertQueuePlayerController.h"
#import "TLAlertSystemSoundController.h"

@interface TLAlertController : NSObject <TLAlertPlaybackBackEndController>

 {
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSString *_accessQueueLabel;
    TLAlertQueuePlayerController *_queuePlayerController;
    TLAlertSystemSoundController *_systemSoundController;
    NSMapTable *_alertContexts;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)_shouldStopAlertForUserInterruption:(id)arg0 ;
+(NSInteger)_playbackBackEndForAlert:(id)arg0 ;
+(NSInteger)_playbackBackEndForAlertType:(NSInteger)arg0 topic:(id)arg1 ;
+(id)sharedAlertController;
-(BOOL)_stopAllAlertsInCurrentProcess;
-(BOOL)_stopPlayingAlerts:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 ;
-(BOOL)stopAllAlerts;
-(BOOL)stopPlayingAlerts:(id)arg0 withOptions:(id)arg1 playbackCompletionType:(NSInteger)arg2 ;
-(id)_controllerForPlaybackBackEnd:(NSInteger)arg0 ;
-(id)_prepareForPlayingAlert:(id)arg0 ;
-(id)_queuePlayerController;
-(id)_systemSoundController;
-(id)init;
-(void)_assertRunningOnAccessQueue;
-(void)_didCompletePlaybackOfAlert:(id)arg0 ;
-(void)_didReachTimeoutForAlert:(id)arg0 ;
-(void)_performBlockOnAccessQueue:(id)arg0 ;
-(void)dealloc;
-(void)handleActivationAssertionStatusChangeForAlert:(id)arg0 updatedStatus:(BOOL)arg1 ;
-(void)playAlert:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)preheatForAlert:(id)arg0 completionHandler:(id)arg1 ;
-(void)updateAudioVolumeDynamicallyForAlert:(id)arg0 toValue:(float)arg1 ;


@end


#endif