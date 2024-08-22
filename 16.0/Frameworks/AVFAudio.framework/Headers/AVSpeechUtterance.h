// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSPEECHUTTERANCE_H
#define AVSPEECHUTTERANCE_H

@class NSAttributedString, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AVSpeechSynthesisVoice.h"

@interface AVSpeechUtterance : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSAttributedString *attributedSpeechString; // ivar: _attributedSpeechString
@property (nonatomic) float pitchMultiplier; // ivar: _pitchMultiplier
@property (nonatomic) CGFloat postUtteranceDelay; // ivar: _postUtteranceDelay
@property (nonatomic) CGFloat preUtteranceDelay; // ivar: _preUtteranceDelay
@property (nonatomic) BOOL prefersAssistiveTechnologySettings; // ivar: _prefersAssistiveTechnologySettings
@property (nonatomic) float rate; // ivar: _rate
@property (retain, nonatomic) NSString *speechString; // ivar: _speechString
@property (retain, nonatomic) AVSpeechSynthesisVoice *voice; // ivar: _voice
@property (nonatomic) float volume; // ivar: _volume


+(BOOL)supportsSecureCoding;
+(id)speechUtteranceWithAttributedString:(id)arg0 ;
+(id)speechUtteranceWithSSMLRepresentation:(id)arg0 ;
+(id)speechUtteranceWithString:(id)arg0 ;
+(void)initialize;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSSMLRepresentation:(id)arg0 ;
-(id)initWithString:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif