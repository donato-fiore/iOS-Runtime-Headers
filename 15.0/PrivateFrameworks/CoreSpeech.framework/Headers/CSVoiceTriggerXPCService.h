// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSVOICETRIGGERXPCSERVICE_H
#define CSVOICETRIGGERXPCSERVICE_H

@class NSString;
@protocol CSVoiceTriggerXPCClientDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CSVoiceTriggerXPCClient.h"

@interface CSVoiceTriggerXPCService : NSObject <CSVoiceTriggerXPCClientDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain, nonatomic) CSVoiceTriggerXPCClient *xpcClient; // ivar: _xpcClient


+(id)sharedService;
-(id)_createXPCClientConnectionIfNeeded:(id)arg0 ;
-(id)fetchVoiceTriggerDailyStats;
-(id)init;
-(void)_teardownXPCClientIfNeeded;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 ;
-(void)enableVoiceTrigger:(BOOL)arg0 withAssertion:(id)arg1 xpcClient:(id)arg2 ;
-(void)notifyVoiceTriggeredSiriSessionCancelled;
-(void)notifyVoiceTriggeredSiriSessionCancelledWithXpcClient:(id)arg0 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)setPhraseSpotterBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 xpcClient:(id)arg2 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 ;
-(void)setRaiseToSpeakBypassing:(BOOL)arg0 timeout:(CGFloat)arg1 xpcClient:(id)arg2 ;
-(void)voiceTriggerXPCClient:(id)arg0 didDisconnect:(BOOL)arg1 ;


@end


#endif