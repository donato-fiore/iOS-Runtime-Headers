// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSSTTSENGINE_H
#define SFSSTTSENGINE_H

@class NSString;

#import <Foundation/Foundation.h>

#import "SFSSTTSEngineCallbackResult.h"

@interface SFSSTTSEngine : NSObject {
    unique_ptr<TTSSynthesizer, std::default_delete<TTSSynthesizer>> _synthesizer;
}


@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) SFSSTTSEngineCallbackResult *callbackResult; // ivar: _callbackResult
@property (retain, nonatomic) NSString *voicePath; // ivar: _voicePath


-(id)initWithVoicePath:(id)arg0 resourcePath:(id)arg1 ;
-(id)loadResourceAtPath:(id)arg0 mimeType:(id)arg1 ;
// -(id)synthesizeText:(id)arg0 loggable:(BOOL)arg1 synthesisBegin:(id)arg2 synthesisChunk:(unk)arg3 synthesisEnd:(id)arg4  ;
-(struct AudioStreamBasicDescription )constructPcmAsbdWithSampleRate:(float)arg0 ;
-(void)dealloc;
-(void)preheat;
-(void)stopSynthesis;


@end


#endif