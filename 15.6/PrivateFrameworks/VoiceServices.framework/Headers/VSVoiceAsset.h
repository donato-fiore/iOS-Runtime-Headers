// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSVOICEASSET_H
#define VSVOICEASSET_H

@class NSArray, NSString;
@protocol NSSecureCoding;


#import "VSAssetBase.h"

@interface VSVoiceAsset : VSAssetBase <NSSecureCoding>



@property (nonatomic) NSInteger footprint; // ivar: _footprint
@property (nonatomic) NSInteger gender; // ivar: _gender
@property (nonatomic) BOOL isBuiltInVoice; // ivar: _isBuiltInVoice
@property (nonatomic) BOOL isInstalled; // ivar: _isInstalled
@property (nonatomic) BOOL isVoiceReadyToUse; // ivar: _isVoiceReadyToUse
@property (copy, nonatomic) NSArray *languages; // ivar: _languages
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
+(NSInteger)footprintFromString:(id)arg0 ;
+(NSInteger)genderFromString:(id)arg0 ;
+(NSInteger)typeFromString:(id)arg0 ;
+(id)compatibilityVersionFromMobileAssetAttributes:(id)arg0 ;
+(id)footprintStringFromFootprint:(NSInteger)arg0 ;
+(id)genderStringFromGender:(NSInteger)arg0 ;
+(id)languagesFromMobileAssetAttributes:(id)arg0 ;
+(id)typeStringFromType:(NSInteger)arg0 ;
-(id)description;
-(id)descriptiveKey;
-(id)dictionaryRepresentation;
-(id)initFromMobileAssetAttributes:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)voiceKey;
-(void)amendNameVersionAndSizeWithMobileAssetAttributes:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif