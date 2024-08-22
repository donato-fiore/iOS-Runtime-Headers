// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXMACTIVESOUND_H
#define AXMACTIVESOUND_H

@class AVAudioPlayerNode, AVAudioUnitTimePitch;

#import <Foundation/Foundation.h>


@interface AXMActiveSound : NSObject

@property (retain, nonatomic) AVAudioPlayerNode *player; // ivar: _player
@property (retain, nonatomic) AVAudioUnitTimePitch *timePitch; // ivar: _timePitch


-(BOOL)beginPlayback:(id)arg0 withError:(*id)arg1 ;
-(id)init;
-(void)connectToEngine:(id)arg0 ;
-(void)disconnectFromEngine:(id)arg0 ;


@end


#endif