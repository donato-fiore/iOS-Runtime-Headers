// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CIDVRGBAUDIOSESSION_H
#define CIDVRGBAUDIOSESSION_H

@class NSData, AVAudioPlayer, CHHapticEngine, NSString;

#import <Foundation/Foundation.h>


@interface CIDVRGBAudioSession : NSObject {
    NSData *_scanSound;
    NSData *_endSound;
    NSData *_completeSound;
    NSData *_failSound;
    NSData *_lockSound;
    AVAudioPlayer *_player;
    CHHapticEngine *_hapticEngine;
    NSString *_originalCategory;
}




+(id)_loadSound:(id)arg0 ;
-(id)_createHapticEngine;
-(id)_createHapticEventWithType:(NSUInteger)arg0 delay:(CGFloat)arg1 ;
-(id)_dataForSound:(NSUInteger)arg0 ;
-(id)init;
-(void)_playHapticEvent:(id)arg0 ;
-(void)_playHapticEvents:(id)arg0 ;
-(void)_playHapticForSound:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)playSound:(NSUInteger)arg0 loop:(BOOL)arg1 ;
-(void)stop;


@end


#endif