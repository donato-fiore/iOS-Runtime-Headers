// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPROCESSAUDIOTAP_H
#define MPCPROCESSAUDIOTAP_H

@protocol OS_dispatch_queue, MPCProcessAudioTapDelegate;

#import <Foundation/Foundation.h>


@interface MPCProcessAudioTap : NSObject {
    *OpaqueAudioQueue _processingQueue;
    *AudioQueueBuffer _monoAudioBuffer;
    int _pid;
    NSObject<OS_dispatch_queue> *_accessQueue;
}


@property (weak, nonatomic) NSObject<MPCProcessAudioTapDelegate> *delegate; // ivar: _delegate
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, nonatomic) unsigned int numberOfChannels; // ivar: _numberOfChannels
@property (nonatomic) unsigned int numberOfFrames; // ivar: _numberOfFrames
@property (readonly, nonatomic) unsigned int sampleRate; // ivar: _sampleRate


-(id)initWithPID:(int)arg0 refreshRate:(id)arg1 delegate:(id)arg2 ;
-(id)initWithPID:(int)arg0 refreshRate:(id)arg1 numberOfChannels:(unsigned int)arg2 delegate:(id)arg3 ;
-(id)initWithRefreshRate:(id)arg0 delegate:(id)arg1 ;
-(void)_createProcessTapWithNumberOfFrames:(unsigned int)arg0 sampleRate:(CGFloat)arg1 ;
-(void)_destroyProcessTap;
-(void)dealloc;
-(void)mediaServerDidDie:(id)arg0 ;
-(void)mediaServerDidRestart:(id)arg0 ;
-(void)setupNotifications;
-(void)start;
-(void)stop;
-(void)tearDownNotifications;


@end


#endif