// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PHASUGGESTIONCONTROLLER_H
#define PHASUGGESTIONCONTROLLER_H

@class NSMutableArray, NSArray, PGManager;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface PHASuggestionController : NSObject {
    NSObject<OS_os_log> *_loggingConnection;
    NSMutableArray *_existingSuggestions;
    NSMutableArray *_suggestionsToRetire;
    NSMutableArray *_suggestionsToDelete;
    NSArray *_cachedFeaturedSuggestions;
    NSUInteger _newFeaturedSuggestionsCount;
}


@property (retain, nonatomic) NSArray *existingMemories; // ivar: _existingMemories
@property (readonly, nonatomic) NSArray *existingSuggestions;
@property (readonly, nonatomic) PGManager *graphManager; // ivar: _graphManager
@property (readonly, nonatomic) NSUInteger newFeaturedSuggestionsCount;


+(CGFloat)_maximumDurationBeforeDeletionForSuggestionType:(unsigned short)arg0 andSubtype:(unsigned short)arg1 ;
+(NSUInteger)_retirementDelayInDaysForSuggestionType:(unsigned short)arg0 andSubtype:(unsigned short)arg1 ;
+(id)availableSuggestionTypeInfosWithProfile:(unsigned char)arg0 ;
-(BOOL)_canFeatureSuggestion:(id)arg0 ;
-(BOOL)existingWallpaperSuggestion:(id)arg0 matchesSuggestion:(id)arg1 ;
-(BOOL)shouldDeleteSuggestion:(id)arg0 atDate:(id)arg1 ;
-(BOOL)shouldRetireSuggestion:(id)arg0 atDate:(id)arg1 ;
-(id)_createSuggestionSessionWithProfile:(unsigned char)arg0 ;
-(id)_existingSuggestionsForProfile:(unsigned char)arg0 ;
-(id)_forbiddenAssetUUIDs;
-(id)_suggestionsToReuseWithSuggestionSession:(id)arg0 numberOfSuggestionsToReuse:(NSUInteger)arg1 ;
-(id)collidableMemoriesWithReferenceDate:(id)arg0 andDelay:(CGFloat)arg1 ;
-(id)collidableSuggestionsWithOptions:(id)arg0 ;
-(id)commitSuggestions:(id)arg0 retiringSuggestions:(id)arg1 deletingSuggestions:(id)arg2 withOptions:(id)arg3 error:(*id)arg4 ;
-(id)deniedSuggestionsForProfile:(unsigned char)arg0 ;
-(id)existingWallpaperSuggestionByKeyAssetUUIDWithSubtypes:(id)arg0 ;
-(id)generateOnThisDayAssetSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)generateSharingSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)generateSingleAssetSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)generateSuggestionsWithProfile:(unsigned char)arg0 options:(id)arg1 progress:(id)arg2 ;
-(id)generateWallpaperSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)generateWidgetSuggestionsWithOptions:(id)arg0 progress:(id)arg1 ;
-(id)initWithGraphManager:(id)arg0 ;
-(id)pendingOnThisDayMemories;
-(id)suggestionInfosWithOptions:(id)arg0 ;
-(void)cacheWidgetSuggestionsWithCurrentlyFeaturedState;
-(void)ingestExistingSuggestionsWithOptions:(id)arg0 ;
-(void)ingestSuggestions:(id)arg0 atDate:(id)arg1 ;
-(void)processWallpaperSuggestions:(id)arg0 forRecyclingWithExistingWallpaperSuggestionByKeyAssetUUID:(id)arg1 resultBlock:(id)arg2 ;
-(void)recordCreatedSuggestions:(id)arg0 duringSession:(id)arg1 ;
-(void)recordDeletedSuggestions:(id)arg0 ;
-(void)recordRetiredSuggestions:(id)arg0 ;


@end


#endif