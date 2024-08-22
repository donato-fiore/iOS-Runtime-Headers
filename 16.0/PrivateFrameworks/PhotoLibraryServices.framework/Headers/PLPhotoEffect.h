// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOEFFECT_H
#define PLPHOTOEFFECT_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPhotoEffect : NSObject

@property (readonly, copy, nonatomic) NSString *CIFilterName; // ivar: _CIFilterName
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *filterIdentifier; // ivar: _filterIdentifier
@property (readonly, nonatomic) BOOL isLegacy; // ivar: _isLegacy
@property (readonly, nonatomic) BOOL isPortrait; // ivar: _isPortrait
@property (readonly, nonatomic) NSInteger latestVersion;
@property (readonly, nonatomic) NSInteger lightingVersion; // ivar: _lightingVersion
@property (readonly, copy, nonatomic) NSString *relatedVersionIdentifier; // ivar: _relatedVersionIdentifier


+(BOOL)isEffectNoneForIdentifier:(id)arg0 ;
+(BOOL)isEffectWithIdentifier:(id)arg0 equalToEffectWithIdentifier:(id)arg1 ;
+(NSUInteger)_indexOfEffectWithIdentifier:(id)arg0 ;
+(id)_effectWithIdentifier:(id)arg0 CIFilterName:(id)arg1 displayName:(id)arg2 ;
+(id)_legacyEffectWithIdentifier:(id)arg0 CIFilterName:(id)arg1 ;
+(id)_lightingEffectWithIdentifier:(id)arg0 relatedVersionIdentifier:(id)arg1 CIFilterName:(id)arg2 lightingVersion:(NSInteger)arg3 ;
+(id)allEffects;
+(id)allSupportedEffects;
+(id)effectWithCIFilterName:(id)arg0 ;
+(id)effectWithIdentifier:(id)arg0 ;
+(id)equivalentEffectForIdentifier:(id)arg0 version:(NSInteger)arg1 ;
+(id)standardSupportedEffects;
-(id)description;
-(id)newEffectFilter;


@end


#endif