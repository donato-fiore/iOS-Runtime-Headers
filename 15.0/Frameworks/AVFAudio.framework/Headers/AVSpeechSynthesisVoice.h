// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVSPEECHSYNTHESISVOICE_H
#define AVSPEECHSYNTHESISVOICE_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVSpeechSynthesisVoice : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSDictionary *audioFileSettings; // ivar: _audioFileSettings
@property (nonatomic) NSInteger gender;
@property (retain, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSString *language;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) NSInteger quality;


+(BOOL)supportsSecureCoding;
+(id)currentLanguageCode;
+(id)speechVoices;
+(id)voiceWithIdentifier:(id)arg0 ;
+(id)voiceWithLanguage:(id)arg0 ;
+(void)initialize;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif