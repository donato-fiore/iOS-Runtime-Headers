// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CULIVEAUDIOSERVERSESSION_H
#define CULIVEAUDIOSERVERSESSION_H

@class AVAudioConverter, AVAudioEngine, AVAudioFormat, AVAudioPlayerNode;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CULiveAudioServerSession : NSObject {
    AVAudioConverter *_audioConverter;
    AVAudioEngine *_audioEngine;
    AVAudioFormat *_audioInputFormat;
    AVAudioFormat *_audioOutputFormat;
    AVAudioPlayerNode *_audioPlayerNode;
    BOOL _playbackStarted;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue


-(BOOL)activateAndReturnError:(*id)arg0 ;
-(void)handleDataEvent:(id)arg0 ;
-(void)invalidate;


@end


#endif