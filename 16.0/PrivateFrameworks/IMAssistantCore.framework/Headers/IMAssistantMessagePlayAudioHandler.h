// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMASSISTANTMESSAGEPLAYAUDIOHANDLER_H
#define IMASSISTANTMESSAGEPLAYAUDIOHANDLER_H

@class NSString;
@protocol IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling;


#import "IMAssistantMessageQueryHandler.h"
#import "IMAssistantAudioPlayer.h"

@interface IMAssistantMessagePlayAudioHandler : IMAssistantMessageQueryHandler <IMAssistantAudioPlayerDelegate, INPlayAudioMessageIntentHandling>

 {
    IMAssistantAudioPlayer *_audioPlayer;
    id *_completionHandler;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)activeAudioPlayer;
-(id)createAudioPlayerWithIdentifier:(id)arg0 ;
-(void)confirmPlayAudioMessage:(id)arg0 completion:(id)arg1 ;
-(void)handlePlayAudioMessage:(id)arg0 completion:(id)arg1 ;
-(void)imAssistantAudioPlayer:(id)arg0 didUpdateState:(NSInteger)arg1 ;
-(void)queryAudioMessageURLForIntent:(id)arg0 completion:(id)arg1 ;


@end


#endif