// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXTIMELINEDATASOURCE_H
#define PXTIMELINEDATASOURCE_H

@class NSMutableArray, NSArray, NSDictionary, PHPhotoLibrary, PHUserFeedbackCalculator;

#import <Foundation/Foundation.h>


@interface PXTimelineDataSource : NSObject

@property (retain, nonatomic) NSMutableArray *featuredPhotoCandidates; // ivar: _featuredPhotoCandidates
@property (readonly, nonatomic) NSArray *featuredPhotos;
@property (retain, nonatomic) NSMutableArray *filteredContent; // ivar: _filteredContent
@property (readonly, nonatomic) NSDictionary *keyAssetByFeaturedPhotoLocalIdentifier; // ivar: _keyAssetByFeaturedPhotoLocalIdentifier
@property (readonly, nonatomic) NSDictionary *keyAssetByMemoryLocalIdentifier; // ivar: _keyAssetByMemoryLocalIdentifier
@property (readonly, nonatomic) NSArray *memories;
@property (retain, nonatomic) NSMutableArray *memoryCandidates; // ivar: _memoryCandidates
@property (readonly, weak, nonatomic) PHPhotoLibrary *photoLibrary; // ivar: _photoLibrary
@property (readonly, nonatomic) NSDictionary *suggestedCropByFeaturedPhotoLocalIdentifier; // ivar: _suggestedCropByFeaturedPhotoLocalIdentifier
@property (retain, nonatomic) PHUserFeedbackCalculator *userFeedbackCalculator; // ivar: _userFeedbackCalculator
@property (nonatomic) CGSize widgetSize; // ivar: _widgetSize


+(BOOL)_momentIsLocationTypeAtWork:(id)arg0 ;
-(BOOL)_isAcceptableUserFeedbackForAssetCollection:(id)arg0 personUUIDs:(id)arg1 asset:(id)arg2 ;
-(id)_defaultSortDescriptors;
-(id)_fetchFallbackMemoriesAndSetFeatured;
-(id)_fetchFallbackSuggestionsAndSetFeatured;
-(id)_fetchMemoriesWithFeaturedState:(NSInteger)arg0 ;
-(id)_fetchMemoriesWithFeaturedState:(NSInteger)arg0 fetchLimit:(NSUInteger)arg1 ;
-(id)_fetchMomentByAssetUUIDForAssets:(id)arg0 ;
-(id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg0 ;
-(id)_fetchSuggestionsWithFeaturedState:(unsigned short)arg0 fetchLimit:(NSUInteger)arg1 ;
-(id)_gatedCropSpecBySuggestionLocalIdentiferFromSuggestions:(id)arg0 ;
-(id)_gatedKeyAssetByMemoryLocalIdentifierWithMemories:(id)arg0 ;
-(id)_gatedKeyAssetBySuggestionLocalIdentifierWithSuggestions:(id)arg0 ;
-(id)init;
-(id)initWithPhotoLibrary:(id)arg0 ;
-(id)initWithPhotoLibrary:(id)arg0 forWidgetSize:(struct CGSize )arg1 ;
-(id)keyAssetFetchOptions;
-(void)_initializeFeaturedCandidatesWithMemoryResult:(id)arg0 suggestionResult:(id)arg1 ;


@end


#endif