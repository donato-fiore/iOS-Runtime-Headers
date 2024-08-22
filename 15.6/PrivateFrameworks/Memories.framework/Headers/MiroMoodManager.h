// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIROMOODMANAGER_H
#define MIROMOODMANAGER_H

@class NSArray, NSDictionary;


#import "VEiOSSharedObject.h"

@interface MiroMoodManager : VEiOSSharedObject

@property (retain, nonatomic) NSArray *editStylesList; // ivar: _editStylesList
@property (nonatomic) BOOL isObserverAttached; // ivar: _isObserverAttached
@property (retain, nonatomic) NSDictionary *rawEditStylesList; // ivar: _rawEditStylesList
@property (retain, nonatomic) NSDictionary *rawSongList; // ivar: _rawSongList
@property (retain, nonatomic) NSDictionary *rawTitlesList; // ivar: _rawTitlesList
@property (retain, nonatomic) NSDictionary *rawTransitionDetailsList; // ivar: _rawTransitionDetailsList
@property (retain, nonatomic) NSArray *songList; // ivar: _songList
@property (retain, nonatomic) NSArray *titleStylesForTitlePicker; // ivar: _titleStylesForTitlePicker
@property (retain, nonatomic) NSArray *titlesList; // ivar: _titlesList


+(BOOL)_effectIsACut:(id)arg0 ;
+(BOOL)_effectIsAFade:(id)arg0 ;
+(BOOL)_effectIsASlide:(id)arg0 organicOnly:(BOOL)arg1 ;
+(BOOL)blueprintTitleSupportsSubtitle:(id)arg0 ;
+(BOOL)buildInTitle:(id)arg0 forClipLength:(id)arg1 ;
+(BOOL)buildOutTitle:(id)arg0 forClipLength:(id)arg1 ;
+(BOOL)titleHasPortraitContentOption:(id)arg0 ;
+(BOOL)titleValid:(id)arg0 forClipLength:(id)arg1 ;
+(BOOL)transitionEndsAtEditPoint:(id)arg0 ;
+(CGFloat)minimumAllowedDurationForTitle:(id)arg0 ;
+(NSUInteger)_projectFilterCountForMood:(id)arg0 ;
+(NSUInteger)allMoodsCount;
+(id)_availableProjectFilterIDsSorted;
+(id)_displayNameForSingleTransition:(id)arg0 ;
+(id)_fetchMediaItemForMediaID:(NSUInteger)arg0 ;
+(id)_fetchStoreItemForMediaID:(NSUInteger)arg0 ;
+(id)_moodIDsForProjectFilterID:(id)arg0 ;
+(id)_pacingDescriptionForSongDict:(id)arg0 ;
+(id)_projectFilterForMood:(id)arg0 ;
+(id)_projectFilterNameForID:(id)arg0 ;
+(id)_projectFiltersForMood:(id)arg0 ;
+(id)_randomMoodID;
+(id)_randomPortraitSafeTitleForBlueprint:(id)arg0 ;
+(id)_storeItemFromBlueprint:(id)arg0 ;
+(id)allMoodIDs;
+(id)allMoodIDsSorted;
+(id)backstopEditValuesForPacing:(id)arg0 ;
+(id)blueprintForBlueprint:(id)arg0 replaceEditStyleByID:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 replaceEditStyleBySingleTransition:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 replaceProjectFilterByID:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 replaceSongByID:(id)arg1 shouldLockSong:(BOOL)arg2 ;
+(id)blueprintForBlueprint:(id)arg0 replaceSongByiTunesMediaID:(NSUInteger)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 replaceSongWithKeywords:(id)arg1 musicGenreDistribution:(id)arg2 shouldLockSong:(BOOL)arg3 ;
+(id)blueprintForBlueprint:(id)arg0 replaceTitleByID:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 replaceTitleByID:(id)arg1 orChangeAnimation:(BOOL)arg2 ;
+(id)blueprintForBlueprint:(id)arg0 replaceTitleByID:(id)arg1 shouldLockTitle:(BOOL)arg2 ;
+(id)blueprintForBlueprint:(id)arg0 replaceTitleSettingsEffectIDOnly:(id)arg1 ;
+(id)blueprintForBlueprint:(id)arg0 titleValidforClipLength:(id)arg1 ;
+(id)blueprintWithMood:(id)arg0 keywords:(id)arg1 musicGenreDistribution:(id)arg2 allowNonLocalSongs:(BOOL)arg3 ;
+(id)blueprintWithNewSongForBlueprint:(id)arg0 ;
+(id)blueprintWithNewTitleStyleForBlueprint:(id)arg0 ;
+(id)blueprintWithPortraitSafeTitleForBlueprint:(id)arg0 ;
+(id)displayNameForArtist:(id)arg0 ;
+(id)displayNameForEditStyle:(id)arg0 ;
+(id)displayNameForFilter:(id)arg0 ;
+(id)displayNameForMoodID:(id)arg0 ;
+(id)displayNameForPacingOfSongID:(id)arg0 ;
+(id)displayNameForSingleTransition:(id)arg0 ;
+(id)displayNameForSong:(id)arg0 ;
+(id)displayNameForTitle:(id)arg0 ;
+(id)displayNamesByEditStyleID;
+(id)displayNamesByProjectFilterID;
+(id)displayNamesByTitleID;
+(id)displayNamesByTransitionForBlueprint:(id)arg0 ;
+(id)editStyleIDsByMoodIDSorted;
+(id)fontNameFromBlueprint:(id)arg0 ;
+(id)fontNameFromTitleDictionary:(id)arg0 ;
+(id)incrementAnimationStyleForBlueprint:(id)arg0 by:(NSUInteger)arg1 ;
+(id)multiUpTransitionsForMood:(id)arg0 ;
+(id)projectFilterIDsByMoodIDSorted;
+(id)randomBlueprint;
+(id)replaceBlueprint:(id)arg0 usingMoodID:(id)arg1 ;
+(id)requestStyleBForBlueprint:(id)arg0 ;
+(id)sharedMoodManager;
+(id)titleIDsByMoodIDSorted;
+(id)titleList;
+(id)titleListForTitlePicker;
+(id)titlePartnerTransitionsFromTransitionSet:(id)arg0 forTitleID:(id)arg1 forClipLength:(id)arg2 ;
+(id)transitionsByMoodIDSortedForBlueprint:(id)arg0 ;
+(void)incrementAnimationSpecifier:(*id)arg0 forTitleStyleID:(id)arg1 by:(NSUInteger)arg2 ;
+(void)logMoodPermutationTallies;
+(void)populateBlueprint:(id)arg0 ;
+(void)purgeSharedInstance;
+(void)separateAnimationSpecifier:(*id)arg0 fromTitleStyleID:(*id)arg1 ;
-(NSUInteger)_totalTransitionWeightsForEditStyleDict:(id)arg0 ;
-(NSUInteger)candenceForTransition:(id)arg0 ;
-(NSUInteger)maxDurationForTransition:(id)arg0 withPacing:(id)arg1 ;
-(NSUInteger)minDurationForTransition:(id)arg0 withPacing:(id)arg1 ;
-(id)_KenBurnsORFXUseSet_UseKB:(BOOL)arg0 fxSway:(BOOL)arg1 fxFS:(BOOL)arg2 fxDrift:(BOOL)arg3 transDir:(BOOL)arg4 kbType:(id)arg5 ;
-(id)_allMoodIDsForMoodPart:(id)arg0 prioritizingMood:(id)arg1 ;
-(id)_allSongIDsSorted;
-(id)_availableEditStyleIDsSorted;
-(id)_availableSongIDsSorted;
-(id)_availableTitleIDsSorted;
-(id)_availableTransitionsSortedWithPacing:(id)arg0 ;
-(id)_availableTransitionsWithPacing:(id)arg0 ;
-(id)_prunedList:(id)arg0 usingEffectInDict:(id)arg1 ;
-(id)_prunedList:(id)arg0 usingPaceKeywordsInDict:(id)arg1 ;
-(id)_prunedMoodPartList:(id)arg0 forMood:(id)arg1 defaultsOnly:(BOOL)arg2 ;
-(id)_prunedTitleList:(id)arg0 forMood:(id)arg1 andClipLength:(id)arg2 ;
-(id)_prunedTitleList:(id)arg0 forMood:(id)arg1 defaultsOnly:(BOOL)arg2 ;
-(id)_prunedTitlesRemovingDuplicateEffects:(id)arg0 ;
-(id)_randomBlueprintForMoodID:(id)arg0 keywords:(id)arg1 musicGenreDistribution:(id)arg2 andSongID:(id)arg3 excludingPartsInMood:(id)arg4 defaultsOnly:(BOOL)arg5 ;
-(id)_uniqueStringForMoodID:(id)arg0 ;
-(id)_updateTransitionDurationsInEditSytleDict:(id)arg0 withPacing:(id)arg1 ;
-(id)_updateTransitionDurationsInTransitionDict:(id)arg0 withPacing:(id)arg1 withUsage:(NSUInteger)arg2 ;
-(id)_useSet_VtoV:(BOOL)arg0 PtoP:(BOOL)arg1 PtoV:(BOOL)arg2 VtoP:(BOOL)arg3 MultiUp:(BOOL)arg4 Pano:(BOOL)arg5 intoOneUp:(BOOL)arg6 outOfOneUp:(BOOL)arg7 ;
-(id)defaultTitleFrom:(id)arg0 ;
-(id)fontToDefaultStyleMap;
-(id)fontToStandardMoodMap;
-(id)init;
-(id)useKenBurnsSetForTransition:(id)arg0 ;
-(id)useWhereSetForTransition:(id)arg0 ;
-(void)_addObserverForAvalaibleSongChange;
-(void)_buildSongList;
-(void)_constructEditStyleList;
-(void)_constructTitleList;
-(void)_constructTransitionDetailList;
-(void)_dumpPartList:(id)arg0 forMood:(id)arg1 ;
-(void)_dumpProjectFiltersForMood:(id)arg0 ;
-(void)_ingestMoodPartLists;
-(void)_loadMoodPartListsFromFiles;
-(void)_removeObserverForAvalaibleSongChange;
-(void)dealloc;
-(void)updateEditStyleListsToIncludeAdditionalStyles:(id)arg0 moodMatchList:(id)arg1 moodCommentList:(id)arg2 transitionSetList:(id)arg3 effectSetList:(id)arg4 multiUpTransitionsStyleList:(id)arg5 burstStyleList:(id)arg6 ;
-(void)updateTitleListsToIncludeOldContent:(id)arg0 titleSettings:(id)arg1 moodMatchList:(id)arg2 moodCommentList:(id)arg3 ;


@end


#endif