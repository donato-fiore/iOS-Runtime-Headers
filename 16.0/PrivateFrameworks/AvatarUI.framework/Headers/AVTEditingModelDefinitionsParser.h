// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVTEDITINGMODELDEFINITIONSPARSER_H
#define AVTEDITINGMODELDEFINITIONSPARSER_H

@class NSDictionary, NSError, AVTUILogger, NSString, NSData;

#import <Foundation/Foundation.h>

#import "AVTEditingModelColors.h"

@interface AVTEditingModelDefinitionsParser : NSObject

@property (retain, nonatomic) AVTEditingModelColors *colorCache; // ivar: _colorCache
@property (retain, nonatomic) NSDictionary *colorPickersDefinitions; // ivar: _colorPickersDefinitions
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) AVTUILogger *logger; // ivar: _logger
@property (retain, nonatomic) NSDictionary *multicolorPickersDefinitions; // ivar: _multicolorPickersDefinitions
@property (retain, nonatomic) NSDictionary *neutralMemojiPresetsIdentifierPerCategory; // ivar: _neutralMemojiPresetsIdentifierPerCategory
@property (readonly, nonatomic) NSUInteger platform; // ivar: _platform
@property (readonly, nonatomic) NSString *platformDictionaryKey; // ivar: _platformDictionaryKey
@property (readonly, nonatomic) NSData *plistData; // ivar: _plistData
@property (retain, nonatomic) NSDictionary *presetPickersDefinitions; // ivar: _presetPickersDefinitions


+(NSUInteger)defaultSortingOptionForPlatform:(NSUInteger)arg0 ;
+(id)dataFromAvatarKit;
+(id)dataFromBundle;
+(id)errorWithDescription:(id)arg0 underlyingError:(id)arg1 ;
+(id)localizedString:(id)arg0 ;
+(id)platformDictionaryKeyForPlatform:(NSUInteger)arg0 ;
+(id)sortedModelRows:(id)arg0 forPlatform:(NSUInteger)arg1 ;
-(BOOL)validateForCategoryWithEnumValue:(id)arg0 pickers:(id)arg1 ;
-(BOOL)validateForColorPicker:(id)arg0 colorPaletteCategory:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateForMulticolorPicker:(id)arg0 subpickers:(id)arg1 error:(*id)arg2 ;
-(id)applyPlatformOverrideForDictionary:(id)arg0 ;
-(id)coreModelCategoryFromCategoryDictionary:(id)arg0 ;
-(id)coreModelCategoryFromCategoryDictionary:(id)arg0 parsedPickerKeys:(id)arg1 ;
-(id)coreModelColorsForColorDefinitions:(id)arg0 paletteSettingKind:(struct ? )arg1 ;
-(id)coreModelColorsForPaletteSettingKind:(struct ? )arg0 ;
-(id)coreModelColorsRowForColorPickerDictionary:(id)arg0 settingDestination:(NSInteger)arg1 inCategory:(NSInteger)arg2 defaultOptions:(id)arg3 ;
-(id)coreModelGroupFromGroupDictionary:(id)arg0 ;
-(id)coreModelMulticolorPickerForDictionary:(id)arg0 groupPickerCategory:(NSInteger)arg1 defaultOptions:(id)arg2 parsedPickerKeys:(id)arg3 error:(*id)arg4 ;
-(id)coreModelPresetsForCategory:(NSInteger)arg0 ;
-(id)coreModelRowFromRowDictionary:(id)arg0 availableTags:(id)arg1 usedTags:(id)arg2 defaultOptions:(id)arg3 ;
-(id)coreModelRowOptionsFromOptionsDictionary:(id)arg0 ;
-(id)decodePropertyListObjects:(id)arg0 ;
-(id)gatherAllTagsFromPresets:(id)arg0 ;
-(id)initForPlatform:(NSUInteger)arg0 withLogger:(id)arg1 ;
-(id)initWithPlistData:(id)arg0 forPlatform:(NSUInteger)arg1 logger:(id)arg2 ;
-(id)localizedSubtitlesForSubtitles:(id)arg0 subpickerCount:(NSInteger)arg1 ;
-(id)multicolorAuxiliaryPickerForDictionary:(id)arg0 error:(*id)arg1 ;
-(id)neutralMemojiPresetIdentifierForCategory:(NSInteger)arg0 ;
-(id)pairingFromDictionary:(id)arg0 ;
-(id)parseCoreModelFromGroupsDefinitions:(id)arg0 colorDefaultsDefinitions:(id)arg1 ;
-(id)symbolNamesFromGroupDictionary:(id)arg0 ;
-(void)initalizeColorCacheIfNeeded;
-(void)parseWithCompletionHandler:(id)arg0 ;


@end


#endif