// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASSISTANTSETTINGSSIGNALEMITTER_H
#define ASSISTANTSETTINGSSIGNALEMITTER_H


#import <Foundation/Foundation.h>


@interface AssistantSettingsSignalEmitter : NSObject



-(void)_emitDiscoverabilitySignalEventForIdentifier:(id)arg0 ;
-(void)emitCallHangUpEnabledSignal;
-(void)emitDidSelectVoiceSignal;


@end


#endif