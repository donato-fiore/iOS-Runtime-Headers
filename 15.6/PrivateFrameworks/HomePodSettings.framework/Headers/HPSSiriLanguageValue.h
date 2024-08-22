// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HPSSIRILANGUAGEVALUE_H
#define HPSSIRILANGUAGEVALUE_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HPSSiriLanguageValue : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (readonly, nonatomic, getter=isDefault) BOOL languageDefault; // ivar: _languageDefault
@property (readonly, copy, nonatomic) NSString *outputLanguage; // ivar: _outputLanguage
@property (readonly, copy, nonatomic) NSString *recognitionLanguage; // ivar: _recognitionLanguage
@property (readonly, copy, nonatomic) NSString *voiceName; // ivar: _voiceName


+(BOOL)supportsSecureCoding;
+(id)languageDefaultWithRecognitionLanguage:(id)arg0 outputLanguage:(id)arg1 gender:(NSInteger)arg2 voiceName:(id)arg3 ;
+(id)languagesFromVoices:(id)arg0 forLanguage:(id)arg1 ;
-(BOOL)alignsWithVoice:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithRecognitionLanguage:(id)arg0 outputLanguage:(id)arg1 gender:(NSInteger)arg2 voiceName:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif