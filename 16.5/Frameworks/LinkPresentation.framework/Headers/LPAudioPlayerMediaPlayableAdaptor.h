// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LPAUDIOPLAYERMEDIAPLAYABLEADAPTOR_H
#define LPAUDIOPLAYERMEDIAPLAYABLEADAPTOR_H

@class NSString;
@protocol LPMediaPlayable, LPAudioPlayer;

#import <Foundation/Foundation.h>


@interface LPAudioPlayerMediaPlayableAdaptor : NSObject <LPMediaPlayable>

 {
    id<LPAudioPlayer> *_player;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasMuteControl;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isPlaying) BOOL playing;
@property (readonly) Class superclass;


-(id)initWithPlayer:(id)arg0 ;
-(void)resetPlaybackState;


@end


#endif