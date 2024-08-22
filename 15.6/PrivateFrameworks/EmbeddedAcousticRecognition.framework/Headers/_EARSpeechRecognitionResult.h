// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


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
@property ? quasarPreItnTokens;
@property ? quasarTokens;
@property (readonly, copy, nonatomic) NSArray *tokens;


-(?)_initWithTokens:(?)arg0 preITNTokensconfidence;
-(?)_initWithTokenspreITNTokens;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif