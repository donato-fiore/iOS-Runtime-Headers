// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARSPEECHRECOGNITIONTOKEN_H
#define _EARSPEECHRECOGNITIONTOKEN_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _EARSpeechRecognitionToken : NSObject <NSCopying>

 {
    Token _quasarToken;
}


@property (readonly, nonatomic) CGFloat confidence;
@property (readonly, nonatomic) CGFloat end;
@property (readonly, nonatomic) BOOL endsWithAutoPunctuation;
@property (readonly, nonatomic) BOOL hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasSpaceBefore;
@property (readonly, nonatomic) NSString *ipaPhoneSequence;
@property (readonly, nonatomic) NSString *phoneSequence;
@property ? quasarToken;
@property (readonly, nonatomic) CGFloat silenceStart;
@property (readonly, nonatomic) CGFloat start;
@property (readonly, copy, nonatomic) NSString *tokenName;


-(BOOL)isEqual:(id)arg0 ;
-(id)_initWithQuasarToken:(*void)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithTokenName:(id)arg0 start:(CGFloat)arg1 end:(CGFloat)arg2 silenceStart:(CGFloat)arg3 confidence:(CGFloat)arg4 hasSpaceAfter:(BOOL)arg5 hasSpaceBefore:(BOOL)arg6 phoneSequence:(id)arg7 ipaPhoneSequence:(id)arg8 ;
-(id)initWithTokenName:(id)arg0 start:(CGFloat)arg1 end:(CGFloat)arg2 silenceStart:(CGFloat)arg3 confidence:(CGFloat)arg4 hasSpaceAfter:(BOOL)arg5 hasSpaceBefore:(BOOL)arg6 phoneSequence:(id)arg7 ipaPhoneSequence:(id)arg8 endsWithAutoPunctuation:(BOOL)arg9 ;


@end


#endif