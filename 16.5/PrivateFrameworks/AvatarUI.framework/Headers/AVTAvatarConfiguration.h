// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTAVATARCONFIGURATION_H
#define AVTAVATARCONFIGURATION_H

@class NSMutableDictionary, NSString;
@protocol AVTCacheableResource, NSCopying;

#import <Foundation/Foundation.h>


@interface AVTAvatarConfiguration : NSObject <AVTCacheableResource, NSCopying>



@property (readonly, nonatomic) NSMutableDictionary *colorPresetsStorage; // ivar: _colorPresetsStorage
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableDictionary *presetsStorage; // ivar: _presetsStorage
@property (readonly) Class superclass;


+(id)configurationColorPresetWithColorPreset:(id)arg0 settingKind:(struct ? )arg1 coreModel:(id)arg2 ;
+(id)configurationForRecord:(id)arg0 coreModel:(id)arg1 ;
+(id)configurationFromAvatar:(id)arg0 ;
+(id)configurationFromAvatar:(id)arg0 coreModel:(id)arg1 ;
+(id)configurationPresetWithPreset:(id)arg0 settingKind:(struct ? )arg1 ;
+(id)keyForSettingKind:(struct ? )arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresEncryption;
-(NSUInteger)costForScope:(id)arg0 ;
-(id)colorConfigurationPresets;
-(id)colorPresetForSettingKind:(struct ? )arg0 ;
-(id)colorPresets;
-(id)configurationPresetForSettingKind:(struct ? )arg0 ;
-(id)configurationPresets;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithPresets:(id)arg0 colorPresets:(id)arg1 ;
-(id)persistentIdentifierForScope:(id)arg0 ;
-(id)presetConfigurationPresets;
-(id)presetForCategory:(NSInteger)arg0 ;
-(id)presetForSettingKind:(struct ? )arg0 storage:(id)arg1 ;
-(id)presets;
-(id)presetsForStorage:(id)arg0 ;
-(id)volatileIdentifierForScope:(id)arg0 ;
-(void)addColorPreset:(id)arg0 ;
-(void)addConfigurationColorPreset:(id)arg0 ;
-(void)addConfigurationPreset:(id)arg0 ;
-(void)addPreset:(id)arg0 ;
-(void)applyToAvatar:(id)arg0 animated:(BOOL)arg1 ;
-(void)removeColorPresetsForSettingKind:(struct ? )arg0 ;
-(void)removePresetsForCategory:(NSInteger)arg0 ;
-(void)removePresetsForSettingKind:(struct ? )arg0 storage:(id)arg1 ;


@end


#endif