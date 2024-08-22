// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SVXSPEECHSYNTHESISAUDIOMUTATION_H
#define _SVXSPEECHSYNTHESISAUDIOMUTATION_H

@class NSData, NSString;
@protocol SVXSpeechSynthesisAudioMutating;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesisAudio.h"
#import "SVXAudioStreamBasicDescription.h"

@interface _SVXSpeechSynthesisAudioMutation : NSObject <SVXSpeechSynthesisAudioMutating>

 {
    SVXSpeechSynthesisAudio *_baseModel;
    NSData *_data;
    SVXAudioStreamBasicDescription *_decoderASBD;
    SVXAudioStreamBasicDescription *_playerASBD;
    _mutationFlags _mutationFlags;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)generate;
-(id)init;
-(id)initWithBaseModel:(id)arg0 ;
-(void)setData:(id)arg0 ;
-(void)setDecoderASBD:(id)arg0 ;
-(void)setPlayerASBD:(id)arg0 ;


@end


#endif