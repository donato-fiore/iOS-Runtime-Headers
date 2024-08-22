// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXFACESUGGESTIONASSETPARAMETERS_H
#define ATXFACESUGGESTIONASSETPARAMETERS_H

@class NSString, NSLocale, NSArray, NSSet, NSDictionary;
@protocol ATXFaceSuggestionParameters;

#import <Foundation/Foundation.h>

#import "ATXPosterDescriptorCache.h"

@interface ATXFaceSuggestionAssetParameters : NSObject <ATXFaceSuggestionParameters>

 {
    ATXPosterDescriptorCache *_descriptorCache;
    NSString *_path;
    NSLocale *_locale;
}


@property (readonly, copy, nonatomic) NSArray *dayZeroFeaturedDescriptors;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSSet *extensionBundleIdsEligibleForComplicationsInFaceGallery;
@property (readonly, copy, nonatomic) NSDictionary *globalPopularityScores;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSArray *heroSectionOrder;
@property (readonly, copy, nonatomic) NSDictionary *hiddenRegions;
@property (readonly, copy, nonatomic) NSArray *sectionOrder;
@property (readonly) Class superclass;
@property (readonly, copy) NSDictionary *topLevelDictionary; // ivar: _topLevelDictionary
@property (readonly, copy, nonatomic) NSDictionary *unpromotableRegions;
@property (readonly, copy, nonatomic) NSDictionary *uprankedDateIntervals;


+(id)_loadAssetParametersDictionaryFromPath:(id)arg0 ;
-(id)_currentCountryCode;
-(id)_posterDescriptorFromKey:(id)arg0 ;
-(id)arrayForKey:(id)arg0 ;
-(id)dictionaryForKey:(id)arg0 ;
-(id)init;


@end


#endif