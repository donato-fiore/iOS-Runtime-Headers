// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CIDVRGBAUDIOSESSION_H
#define CIDVRGBAUDIOSESSION_H

@class AVAsset, AVQueuePlayer, AVPlayerLooper;

#import <Foundation/Foundation.h>


@interface CIDVRGBAudioSession : NSObject {
    AVAsset *_scanSound;
    AVAsset *_endSound;
    AVAsset *_completeSound;
    AVAsset *_failSound;
    AVQueuePlayer *_player;
    AVPlayerLooper *_looper;
}




+(id)_loadSound:(id)arg0 ;
-(id)_playerItemForSound:(NSUInteger)arg0 ;
-(id)init;
-(void)playSound:(NSUInteger)arg0 loop:(BOOL)arg1 ;
-(void)stop;


@end


#endif