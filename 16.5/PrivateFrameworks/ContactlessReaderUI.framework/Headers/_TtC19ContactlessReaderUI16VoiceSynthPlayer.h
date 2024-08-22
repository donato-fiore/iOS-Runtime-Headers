// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19CONTACTLESSREADERUI16VOICESYNTHPLAYER_H
#define _TTC19CONTACTLESSREADERUI16VOICESYNTHPLAYER_H


#import <Foundation/Foundation.h>


@interface _TtC19ContactlessReaderUI16VoiceSynthPlayer : NSObject {
    ? audioPlayerDelegate;
    ? voiceSynthesizer;
    ? safeguardTimer;
    ? hashText;
    ? hashStoppedText;
    ? speakingState;
    ? stopInDelay;
    ? stopProcessing;
    ? audioModeSet;
}




-(id)init;
-(void)dealloc;


@end


#endif