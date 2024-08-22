// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _LTSPEECHRECOGNITIONRESULT_H
#define _LTSPEECHRECOGNITIONRESULT_H

@class NSLocale, NSString, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "_LTSpeechRecognitionSausage.h"

@interface _LTSpeechRecognitionResult : NSObject <NSSecureCoding>



@property (retain, nonatomic) _LTSpeechRecognitionSausage *bestRecognitionAlternatives; // ivar: _bestRecognitionAlternatives
@property (nonatomic, getter=isFinal) BOOL final; // ivar: _final
@property (copy, nonatomic) NSLocale *locale; // ivar: _locale
@property (retain, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic, getter=isStable) BOOL stable; // ivar: _stable
@property (retain, nonatomic) NSArray *transcriptions; // ivar: _transcriptions


+(BOOL)supportsSecureCoding;
+(id)emptyResultWithLocale:(id)arg0 isFinal:(BOOL)arg1 ;
+(id)resultWithPackage:(id)arg0 locale:(id)arg1 modelVersion:(id)arg2 isFinal:(BOOL)arg3 ;
+(id)resultWithResult:(id)arg0 locale:(id)arg1 modelVersion:(id)arg2 isFinal:(BOOL)arg3 ;
-(id)_transcriptionWithResult:(id)arg0 locale:(id)arg1 ;
-(id)bestTranscription;
-(id)initEmptyResultWithLocale:(id)arg0 isFinal:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithOspreyPartialRecognitionResponse:(id)arg0 isSanitized:(BOOL)arg1 ;
-(id)initWithOspreyResponse:(id)arg0 confidenceThreshold:(NSInteger)arg1 isSanitized:(BOOL)arg2 ;
-(id)initWithPackage:(id)arg0 locale:(id)arg1 modelVersion:(id)arg2 isFinal:(BOOL)arg3 ;
-(id)initWithResult:(id)arg0 locale:(id)arg1 modelVersion:(id)arg2 isFinal:(BOOL)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif