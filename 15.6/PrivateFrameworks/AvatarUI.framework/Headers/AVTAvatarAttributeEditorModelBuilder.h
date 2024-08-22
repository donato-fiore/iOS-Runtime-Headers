// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTAVATARATTRIBUTEEDITORMODELBUILDER_H
#define AVTAVATARATTRIBUTEEDITORMODELBUILDER_H


#import <Foundation/Foundation.h>


@interface AVTAvatarAttributeEditorModelBuilder : NSObject



+(NSUInteger)destinationForPresetCategory:(NSInteger)arg0 isPaired:(BOOL)arg1 ;
+(NSUInteger)sectionDisplayModeForCoreModelDisplayMode:(NSUInteger)arg0 ;
+(id)buildDataSourceCategoriesFromCoreModel:(id)arg0 selectingFromAvatarConfiguration:(id)arg1 imageProvider:(id)arg2 colorLayerProvider:(id)arg3 stickerRenderer:(id)arg4 modelManager:(id)arg5 withSelectedCategory:(id)arg6 atIndex:(NSUInteger)arg7 ;
+(id)filterPresets:(id)arg0 forRowRepresentingTags:(id)arg1 currentTagSelection:(id)arg2 fixedTags:(id)arg3 availableTags:(id)arg4 sortingOption:(NSUInteger)arg5 ;
+(id)filterPresets:(id)arg0 matchingTagValues:(id)arg1 sortedUsing:(NSUInteger)arg2 ;
+(id)firstColorSectionInSections:(id)arg0 ;
+(id)framingModeForRow:(id)arg0 selectedPreset:(id)arg1 ;
+(id)multicolorSectionProviderForCoreMulticolorPicker:(id)arg0 platform:(NSUInteger)arg1 configuration:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 editingColors:(id)arg5 colorDefaultsProvider:(id)arg6 modelManager:(id)arg7 previousSectionMap:(id)arg8 pairingPickers:(id)arg9 ;
+(id)previewModeForCoreModelGroup:(id)arg0 ;
+(id)sectionColorItemsForColors:(id)arg0 selectedPreset:(id)arg1 configuration:(id)arg2 modelManager:(id)arg3 additionalUpdateKind:(struct ? )arg4 imageProvider:(id)arg5 colorLayerProvider:(id)arg6 pairedCategory:(NSInteger)arg7 editingColors:(id)arg8 ;
+(id)sectionForModelColorsRow:(id)arg0 configuration:(id)arg1 modelManager:(id)arg2 imageProvider:(id)arg3 colorLayerProvider:(id)arg4 pairedCategory:(NSInteger)arg5 destination:(NSInteger)arg6 editingColors:(id)arg7 displaysTitle:(BOOL)arg8 ;
+(id)sectionForModelColorsRow:(id)arg0 selectedColorPreset:(id)arg1 configuration:(id)arg2 modelManager:(id)arg3 additionalAvatarUpdateKind:(struct ? )arg4 imageProvider:(id)arg5 colorLayerProvider:(id)arg6 pairedCategory:(NSInteger)arg7 destination:(NSInteger)arg8 editingColors:(id)arg9 displaysTitle:(BOOL)arg10 ;
+(id)sectionForModelRow:(id)arg0 fromModelPresets:(id)arg1 selectedModelPreset:(id)arg2 tagSelection:(id)arg3 fixedTags:(id)arg4 availableTags:(id)arg5 category:(NSInteger)arg6 imageProvider:(id)arg7 stickerRenderer:(id)arg8 configuration:(id)arg9 previousSection:(id)arg10 pairedCategory:(NSInteger)arg11 ;
+(id)sectionOptionFromModelOptions:(id)arg0 ;
+(id)sectionProvidersForCoreModelCategory:(id)arg0 platform:(NSUInteger)arg1 modelManager:(id)arg2 pairingPickers:(id)arg3 editingColors:(id)arg4 colorDefaultsProvider:(id)arg5 previousSectionMap:(id)arg6 imageProvider:(id)arg7 colorLayerProvider:(id)arg8 stickerRenderer:(id)arg9 configuration:(id)arg10 displayConditionEvaluator:(id)arg11 ;
+(id)selectedModelPresetForSelectedPreset:(id)arg0 inPresetsList:(id)arg1 ;
+(id)selectedPresetForCoreModelColorsPicker:(id)arg0 isEnabled:(BOOL)arg1 fallbackToColorsPicker:(id)arg2 colorDefaultsProvider:(id)arg3 modelManager:(id)arg4 ;
+(id)subtitleFromSubtitles:(id)arg0 forIndex:(NSInteger)arg1 enabledIndex:(NSInteger)arg2 ;
+(id)tagCombinationsForTagNames:(id)arg0 availableTags:(id)arg1 ;
+(id)tagSetByRemovingTagNames:(id)arg0 fromTagSet:(id)arg1 ;
+(id)tagSetForTagNames:(id)arg0 inTagSet:(id)arg1 ;
+(int)scoreForTags:(id)arg0 forCombination:(id)arg1 currentSelection:(id)arg2 ;
+(void)addTags:(id)arg0 toMutableTagSet:(id)arg1 ;
+(void)insertPreset:(id)arg0 intoList:(id)arg1 forSortingOption:(NSUInteger)arg2 ;
+(void)setTags:(id)arg0 onMutableTagSet:(id)arg1 ;


@end


#endif