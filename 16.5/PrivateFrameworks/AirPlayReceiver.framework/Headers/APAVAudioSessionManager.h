// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef APAVAUDIOSESSIONMANAGER_H
#define APAVAUDIOSESSIONMANAGER_H

@class AVAudioSession;

#import <Foundation/Foundation.h>


@interface APAVAudioSessionManager : NSObject {
    *OpaqueFigSimpleMutex _mutex;
    NSUInteger _type;
    BOOL _isSetUp;
    BOOL _forceRAW;
}


@property (readonly, nonatomic) AVAudioSession *session; // ivar: _session


+(id)ambientSessionManager;
+(id)mediaSessionManager;
-(BOOL)setActive:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setAudioMode:(struct __CFString *)arg0 isLongForm:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)setDuckOthers:(unsigned char)arg0 error:(*id)arg1 ;
-(BOOL)setPrefersMultichannelAudio:(unsigned char)arg0 error:(*id)arg1 ;
-(id)initWithType:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)setUpSession;


@end


#endif