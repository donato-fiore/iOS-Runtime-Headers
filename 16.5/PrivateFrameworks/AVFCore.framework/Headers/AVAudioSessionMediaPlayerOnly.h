// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOSESSIONMEDIAPLAYERONLY_H
#define AVAUDIOSESSIONMEDIAPLAYERONLY_H

@class NSString;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

#import <Foundation/Foundation.h>

#import "AVAudioSessionMediaPlayerOnlyInternal.h"

@interface AVAudioSessionMediaPlayerOnly : NSObject {
    AVAudioSessionMediaPlayerOnlyInternal *_audioSession;
}


@property (readonly) BOOL canEnterPIPMode;
@property (readonly) NSString *category;
@property (readonly) NSInteger currentHardwareInputNumberOfChannels;
@property (readonly) NSInteger currentHardwareOutputNumberOfChannels;
@property (readonly) CGFloat currentHardwareSampleRate;
@property NSObject<AVAudioSessionDelegateMediaPlayerOnly> *delegate;
@property (readonly) BOOL inputIsAvailable;
@property (readonly) NSString *mode;
@property (readonly) CGFloat preferredHardwareSampleRate;
@property (readonly) CGFloat preferredIOBufferDuration;


+(void)initialize;
-(BOOL)isApplicationAudioSession;
-(BOOL)setActivationContext:(id)arg0 error:(*id)arg1 ;
-(BOOL)setActive:(BOOL)arg0 error:(*id)arg1 ;
-(BOOL)setActive:(BOOL)arg0 withFlags:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)setUsingLongFormAudio:(BOOL)arg0 error:(*id)arg1 ;
-(id)_weakReference;
-(id)init;
-(void)_addFPListeners;
-(void)_attachToPlayer:(id)arg0 ;
-(void)_removeFPListeners;
-(void)dealloc;
-(void)setApplicationAudioSession:(BOOL)arg0 ;


@end


#endif