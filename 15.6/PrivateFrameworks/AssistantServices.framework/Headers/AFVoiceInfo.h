// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AFVOICEINFO_H
#define AFVOICEINFO_H

@class NSNumber, NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface AFVoiceInfo : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSNumber *contentVersion; // ivar: _contentVersion
@property (readonly, nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (nonatomic) BOOL isCustom; // ivar: _isCustom
@property (readonly, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSString *masteredVersion; // ivar: _masteredVersion
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL wasInitializedFromDictionaryRepresentation; // ivar: _wasInitializedFromDictionaryRepresentation


+(BOOL)supportsSecureCoding;
+(NSInteger)defaultGenderForOutputVoiceLanguageCode:(id)arg0 ;
+(NSInteger)genderForVSSpeechGender:(NSInteger)arg0 ;
+(id)allVoicesForSiriSessionLanguage:(id)arg0 ;
+(id)outputVoiceIdentifierForLanguageCode:(id)arg0 voiceName:(id)arg1 ;
+(id)voiceInfoForLanguageCode:(id)arg0 ;
+(id)voiceInfoForSessionLanguageCode:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isLanguageAndGenderEqual:(id)arg0 ;
-(BOOL)isMatchForVoiceAsset:(id)arg0 ;
-(BOOL)isValidForSiriSessionLanguage:(id)arg0 ;
-(NSInteger)VSSpeechFootprint;
-(NSInteger)VSSpeechGender;
-(NSInteger)VSSpeechType;
-(NSUInteger)hash;
-(id)VSVoiceAsset;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 ;
-(id)initWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 footprint:(NSInteger)arg2 isCustom:(BOOL)arg3 ;
-(id)initWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 isCustom:(BOOL)arg2 ;
-(id)initWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 isCustom:(BOOL)arg2 name:(id)arg3 footprint:(NSInteger)arg4 contentVersion:(id)arg5 masteredVersion:(id)arg6 ;
-(id)initWithLanguageCode:(id)arg0 gender:(NSInteger)arg1 name:(id)arg2 footprint:(NSInteger)arg3 isCustom:(BOOL)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif