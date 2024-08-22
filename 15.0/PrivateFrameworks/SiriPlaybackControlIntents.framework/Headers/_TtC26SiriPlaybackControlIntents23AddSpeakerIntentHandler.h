// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC26SIRIPLAYBACKCONTROLINTENTS23ADDSPEAKERINTENTHANDLER_H
#define _TTC26SIRIPLAYBACKCONTROLINTENTS23ADDSPEAKERINTENTHANDLER_H

@protocol AddSpeakerIntentHandling;

#import <Foundation/Foundation.h>


@interface _TtC26SiriPlaybackControlIntents23AddSpeakerIntentHandler : NSObject <AddSpeakerIntentHandling>

 {
    ? deviceSelector;
    ? analyticsService;
    ? playbackController;
    ? deviceState;
    ? aceServiceHelper;
}




-(id)init;
-(void)confirmAddSpeaker:(id)arg0 completion:(id)arg1 ;
-(void)handleAddSpeaker:(id)arg0 completion:(id)arg1 ;
-(void)resolveDestinationsForAddSpeaker:(id)arg0 withCompletion:(id)arg1 ;
-(void)resolveSourceForAddSpeaker:(id)arg0 withCompletion:(id)arg1 ;


@end


#endif