// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARFORMATTER_H
#define _EARFORMATTER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _EARFormatter : NSObject {
    unique_ptr<SpeechITN, std::default_delete<SpeechITN>> _itn;
}


@property (copy, nonatomic) NSString *language; // ivar: _language


+(?)convertStringsToQuasarTokens;
+(BOOL)supportedByQuasarConfig:(id)arg0 ;
+(void)initialize;
-(?)formatWords:(?)arg0 unrepairedWordsOut:(?)arg1 task:(?)arg2 language:(?)arg3 leftContext:(?)arg4 separateAutoEndPunctuation:(?)arg5 partialResults:(?)arg6 timestampOffset:(?)arg7 zeroTimestamp:(?)arg8 continuousListeningConfig:(?)arg9 itnLeftContext:(?)arg10 itnResult:(?)arg11 itnOverridesitnEnablingFlags;
-(?)formatWords:(?)arg0 unrepairedWordsOuttask;
-(?)formatWordsunrepairedWordsOut;
-(id)formattedRecognitionWithNBestList:(id)arg0 ;
-(id)formattedStringWithStrings:(id)arg0 ;
-(id)formattedStringWithStrings:(id)arg0 preToPostItnArray:(id)arg1 ;
-(id)formattedStringWithStrings:(id)arg0 preToPostItnArray:(id)arg1 task:(id)arg2 ;
-(id)formattedStringWithStrings:(id)arg0 task:(id)arg1 ;
-(id)initWithGeneralVoc:(id)arg0 withLexiconEnh:(id)arg1 withItnEnh:(id)arg2 ;
-(id)initWithLanguage:(id)arg0 withSdapiConfig:(id)arg1 quasarConfig:(id)arg2 ;
-(id)initWithQuasarConfig:(id)arg0 ;
-(id)initWithQuasarConfig:(id)arg0 language:(id)arg1 ;
-(id)initWithQuasarConfig:(id)arg0 overrideConfigFiles:(id)arg1 ;
-(struct basic_string<char, std::char_traits<char>, std::allocator<char>> )getOrthography:(*void)arg0 ;


@end


#endif