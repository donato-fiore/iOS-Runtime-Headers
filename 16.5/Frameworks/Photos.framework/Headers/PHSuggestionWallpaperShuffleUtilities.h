// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHSUGGESTIONWALLPAPERSHUFFLEUTILITIES_H
#define PHSUGGESTIONWALLPAPERSHUFFLEUTILITIES_H


#import <Foundation/Foundation.h>


@interface PHSuggestionWallpaperShuffleUtilities : NSObject



+(id)allPotentialSuggestionLocalIdentifierGroupsForPosterConfiguration:(id)arg0 fromSuggestionLocalIdentifiersByFeature:(id)arg1 withRejectedPersonLocalIdentifiers:(id)arg2 ;
+(id)allPotentialSuggestionLocalIdentifiersForPosterConfiguration:(id)arg0 fromSuggestionLocalIdentifiersByFeature:(id)arg1 withRejectedPersonLocalIdentifiers:(id)arg2 ;
+(id)chosenSuggestionLocalIdentifiersForPosterConfiguration:(id)arg0 fromSuggestionLocalIdentifiersByFeature:(id)arg1 atDate:(id)arg2 usingStrategy:(NSUInteger)arg3 withRejectedPersonLocalIdentifiers:(id)arg4 ;
+(id)chosenSuggestionLocalIdentifiersFromGroups:(id)arg0 atDate:(id)arg1 ;
+(id)chosenSuggestionLocalIdentifiersIn:(id)arg0 atDate:(id)arg1 ;
+(id)chosenSuggestionsForPosterConfiguration:(id)arg0 atDate:(id)arg1 inPhotoLibrary:(id)arg2 ;
+(id)matchingSuggestionInternalPredicateForPosterConfiguration:(id)arg0 ;
+(id)mediaFromSuggestions:(id)arg0 assetBySuggestionUUID:(*id)arg1 ;
+(id)suggestionLocalIdentifiersByFeatureForPosterConfiguration:(id)arg0 inPhotoLibrary:(id)arg1 ;
+(void)enumerateFeaturesOfPosterConfiguration:(id)arg0 withRejectedPersonLocalIdentifiers:(id)arg1 usingBlock:(id)arg2 ;
+(void)setFeaturedStateOfSuggestions:(id)arg0 ;


@end


#endif