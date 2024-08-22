// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACEGALLERYLAYOUTGENERATOR_H
#define ATXFACEGALLERYLAYOUTGENERATOR_H

@class NSArray, NSDictionary, NSLocale, ATXFaceGalleryConfiguration;
@protocol ATXFaceGalleryLayoutGeneratorComplicationProviding, ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding, ATXFaceSuggestionParameters;

#import <Foundation/Foundation.h>


@interface ATXFaceGalleryLayoutGenerator : NSObject {
    id<ATXFaceGalleryLayoutGeneratorComplicationProviding> *_complicationProvider;
    id<ATXFaceGalleryLayoutGeneratorComplicationDescriptorProviding> *_complicationDescriptorProvider;
    id<ATXFaceSuggestionParameters> *_parameters;
    BOOL _dayZero;
    NSArray *_allHeroDescriptors;
    NSArray *_allNonHeroDescriptors;
    NSDictionary *_nonHeroDescriptorsByExtensionBundleId;
    NSLocale *_locale;
}


@property (readonly, copy, nonatomic) NSArray *candidateFeaturedDescriptors; // ivar: _candidateFeaturedDescriptors
@property (readonly, copy, nonatomic) ATXFaceGalleryConfiguration *generatedConfiguration;
@property (readonly, copy, nonatomic) NSArray *rankedFeaturedDescriptors;


+(id)_descriptorsByDeduplicatingExtensionsInDescriptors:(id)arg0 ;
-(BOOL)_complicationExistsOnSystem:(id)arg0 ;
-(BOOL)_descriptorIsEligibleForComplications:(id)arg0 ;
-(BOOL)_isFocusUser;
-(id)_generateProviderSectionForExtensionBundleIdentifiers:(id)arg0 ;
-(id)_generatedFeaturedPhotosSectionGivenFeaturedSection:(id)arg0 ;
-(id)_generatedFeaturedSection;
-(id)_generatedFocusSection;
-(id)_generatedHeroSection;
-(id)_generatedPhotoShuffleSection;
-(id)_inlineComplicationForDescriptor:(id)arg0 ;
-(id)_itemFromDescriptor:(id)arg0 shouldShowDisplayName:(BOOL)arg1 shouldShowComplications:(BOOL)arg2 systemSuggestedComplicationSet:(id)arg3 ;
-(id)_itemsFromDescriptors:(id)arg0 shouldShowDisplayName:(BOOL)arg1 shouldShowComplications:(BOOL)arg2 limit:(id)arg3 ;
-(id)_modularComplicationsForDescriptor:(id)arg0 systemSuggestionComplications:(id)arg1 ;
-(id)_provisionalLocalizedSubtitleTextWithSemanticType:(NSInteger)arg0 extensionBundleIdentifiers:(id)arg1 ;
-(id)_shuffledSuggestableComplicationSets;
-(id)initWithDescriptors:(id)arg0 complicationProvider:(id)arg1 complicationDescriptorProvider:(id)arg2 parameters:(id)arg3 dayZero:(BOOL)arg4 locale:(id)arg5 ;
-(void)_processDescriptors:(id)arg0 ;


@end


#endif