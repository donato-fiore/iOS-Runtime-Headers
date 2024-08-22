// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _EARSPEECHRECOGNITIONRESULT_H
#define _EARSPEECHRECOGNITIONRESULT_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARSpeechRecognitionResult : NSObject <NSCopying>

 {
    ? _quasarTokens;
    ? _quasarPreItnTokens;
}


@property (readonly, nonatomic) CGFloat confidence; // ivar: _confidence
@property (readonly, copy, nonatomic) NSArray *preITNTokens;
@property (readonly, copy, nonatomic) NSArray *preITNVoiceCommandInterpretations; // ivar: _preITNVoiceCommandInterpretations
@property ? quasarPreItnTokens;
@property ? quasarTokens;
@property (readonly, copy, nonatomic) NSArray *tokens;
@property (readonly, copy, nonatomic) NSArray *voiceCommandInterpretations; // ivar: _voiceCommandInterpretations


-(?)_initWithTokens:(?)arg0 preITNTokens:(?)arg1 confidence:(?)arg2 voiceCommandInterpretationspreITNVoiceCommandInterpretations;
-(?)_initWithTokens:(?)arg0 preITNTokensconfidence;
-(?)_initWithTokenspreITNTokens;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif