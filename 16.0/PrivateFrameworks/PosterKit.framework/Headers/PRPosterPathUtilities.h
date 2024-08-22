// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERPATHUTILITIES_H
#define PRPOSTERPATHUTILITIES_H


#import <Foundation/Foundation.h>


@interface PRPosterPathUtilities : NSObject



+(BOOL)removeColorVariationsConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeComplicationLayoutForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeConfigurableOptionsForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeFocusConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removePosterDescriptorGalleryOptions:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeRenderingConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeSuggestionMetadataForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeTitleStyleConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(BOOL)storeColorVariationsConfigurationForPath:(id)arg0 colorVariationsConfiguration:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeComplicationLayoutForPath:(id)arg0 complicationLayout:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeConfigurableOptionsForPath:(id)arg0 configurableOptions:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeConfiguredPropertiesForPath:(id)arg0 configuredProperties:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeFocusConfigurationForPath:(id)arg0 focusConfiguration:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeHomeScreenConfigurationForPath:(id)arg0 homeScreenConfiguration:(id)arg1 error:(*id)arg2 ;
+(BOOL)storePosterDescriptorGalleryOptions:(id)arg0 posterDescriptorGalleryOptions:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeRenderingConfiguration:(id)arg0 forPath:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeSuggestionMetadataForPath:(id)arg0 suggestionMetadata:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeTitleStyleConfigurationForPath:(id)arg0 titleStyleConfiguration:(id)arg1 error:(*id)arg2 ;
+(BOOL)storeUserObject:(id)arg0 path:(id)arg1 atURL:(id)arg2 error:(*id)arg3 ;
+(id)loadColorVariationsConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadComplicationLayoutForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadConfigurableOptionsForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadConfiguredPropertiesForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadFocusConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadHomeScreenConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadPosterDescriptorGalleryOptionsForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadRenderingConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadSuggestionMetadataForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadTitleStyleConfigurationForPath:(id)arg0 error:(*id)arg1 ;
+(id)loadUserObjectForURL:(id)arg0 expectedClass:(Class)arg1 error:(*id)arg2 ;


@end


#endif