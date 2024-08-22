// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFSPEECHRECOGNITION_H
#define AFSPEECHRECOGNITION_H

@class NSArray;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AFSpeechRecognition : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *phrases; // ivar: _phrases
@property (readonly, nonatomic) CGFloat processedAudioDuration; // ivar: _processedAudioDuration
@property (readonly, copy, nonatomic) NSArray *utterances; // ivar: _utterances


+(BOOL)supportsSecureCoding;
+(id)fakeOneBestFromPhrases:(id)arg0 ;
+(id)tokenListFromUtterance:(id)arg0 phrases:(id)arg1 ;
+(id)transcriptFromTokens:(id)arg0 ;
-(id)aceRecognition;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPhrases:(id)arg0 ;
-(id)initWithPhrases:(id)arg0 utterances:(id)arg1 ;
-(id)initWithPhrases:(id)arg0 utterances:(id)arg1 processedAudioDuration:(CGFloat)arg2 ;
-(id)nBestTokenLists;
-(id)nBestTranscripts;
-(id)oneBestTokenList;
-(id)oneBestTranscript;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif