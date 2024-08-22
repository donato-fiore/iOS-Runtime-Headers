// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHENGINE_H
#define VSSPEECHENGINE_H

@class NSLock, NSString;

#import <Foundation/Foundation.h>

#import "VSSpeechSynthesisCallbackResult.h"

@interface VSSpeechEngine : NSObject

@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) VSSpeechSynthesisCallbackResult *currentCallbackResult; // ivar: _currentCallbackResult
@property (nonatomic) NSUInteger pcmBufferSize; // ivar: _pcmBufferSize
@property (nonatomic) float pitch; // ivar: _pitch
@property (nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSLock *synthesisLock; // ivar: _synthesisLock
@property (nonatomic) *void synthesizer; // ivar: _synthesizer
@property (retain, nonatomic) NSString *voicePath; // ivar: _voicePath
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)hasPhaticResponses:(id)arg0 ;
+(BOOL)isUserCancelError:(id)arg0 ;
+(id)mimeForFileExtension:(id)arg0 ;
-(BOOL)initializeWithResourcePath:(id)arg0 ;
-(id)initWithVoicePath:(id)arg0 resourcePath:(id)arg1 ;
-(id)loadResource:(id)arg0 error:(*id)arg1 ;
-(id)loadResourceAtPath:(id)arg0 mimeType:(id)arg1 error:(*id)arg2 ;
-(id)synthesizeText:(id)arg0 loggable:(BOOL)arg1 callback:(id)arg2 ;
-(void)dealloc;
-(void)preheat;
-(void)stopAtMarker:(NSInteger)arg0 ;
-(void)unloadResource:(id)arg0 ;


@end


#endif