// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS24MOVESPEAKERINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS24MOVESPEAKERINTENTHANDLER_H

@protocol MoveSpeakerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents24MoveSpeakerIntentHandler : NSObject <MoveSpeakerIntentHandling>

 {
    ? deviceSelector;
    ? analyticsService;
    ? playbackController;
    ? deviceState;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmMoveSpeaker:(id)arg0 completion:(id)arg1 ;
-(void)handleMoveSpeaker:(id)arg0 completion:(id)arg1 ;
-(void)resolveDestinationsForMoveSpeaker:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSourceForMoveSpeaker:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif