// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ANPROCESSAUDIO_H
#define ANPROCESSAUDIO_H


#import <Foundation/Foundation.h>


@interface ANProcessAudio : NSObject



+(BOOL)_configureEngine:(id)arg0 player:(id)arg1 effect:(id)arg2 sourceFile:(id)arg3 error:(*id)arg4 ;
+(BOOL)_renderAudioTo:(id)arg0 length:(NSInteger)arg1 engine:(id)arg2 error:(*id)arg3 ;
+(BOOL)process:(id)arg0 to:(id)arg1 withOptions:(NSUInteger)arg2 error:(*id)arg3 ;
+(id)_ANAudioEffectToName:(NSUInteger)arg0 ;
+(id)_lookupTunings:(NSUInteger)arg0 ;
+(struct AudioComponentDescription )_lookupComponent:(NSUInteger)arg0 ;


@end


#endif