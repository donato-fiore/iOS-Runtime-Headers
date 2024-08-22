// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RCQUERYMANAGER_H
#define RCQUERYMANAGER_H

@class NSManagedObjectModel, NSEntityDescription;

#import <Foundation/Foundation.h>


@interface RCQueryManager : NSObject {
    NSManagedObjectModel *_model;
}


@property (readonly, nonatomic) NSEntityDescription *cloudRecordingEntity; // ivar: _cloudRecordingEntity
@property (readonly, nonatomic) NSEntityDescription *folderEntity; // ivar: _folderEntity


+(id)cacheDeletedOnWatchPredicate;
+(id)clearTransientFlagsBatchUpdateRequest;
+(id)customLabelSearchPredicateWithString:(id)arg0 ;
+(id)defaultFetchedProperties;
+(id)defaultSortDescriptors;
+(id)favoritePredicate;
+(id)folderIsHiddenPredicate;
+(id)musicMemoPredicate;
+(id)playablePredicate;
+(id)recordingsInFolderPredicate:(id)arg0 ;
+(id)watchOSPredicate;
-(BOOL)storeHasRecordings:(id)arg0 context:(id)arg1 ;
-(NSUInteger)playableRecordingsCountWithContext:(id)arg0 ;
-(id)_folderFetch:(id)arg0 withOption:(int)arg1 ;
-(id)_labelPresetsForQuery:(id)arg0 ;
-(id)allCustomLabelsFetchRequest;
-(id)allDeletedRecordingsFetchRequest;
-(id)allFoldersForSortingFetchRequest:(int)arg0 ;
-(id)databasePropertyKeyToPropertyFetchRequest:(id)arg0 ;
-(id)deletedRecordingsFetchRequest;
-(id)evictionDateBeforeFetchRequest:(id)arg0 ;
-(id)foldersWithNameFetchRequest:(id)arg0 option:(int)arg1 searchOption:(int)arg2 ;
-(id)foldersWithUUIDFetchRequest:(id)arg0 option:(int)arg1 ;
-(id)foldersWithhRankFetchRequest:(NSInteger)arg0 option:(int)arg1 ;
-(id)initWithModel:(id)arg0 ;
-(id)legacyRecordingWithUniqueIDFetchRequest:(id)arg0 ;
-(id)playableRecordingsFetchRequestWithSubPredicate:(id)arg0 ;
-(id)recordingMatchingNameCaseInsensitiveFetchRequest:(id)arg0 ;
-(id)recordingsForPathFetchRequest:(id)arg0 ;
-(id)recordingsForSpotlightSearchFetchRequest:(id)arg0 ;
-(id)recordingsInFolderFetchRequest:(id)arg0 ;
-(id)recordingsWithUniqueIDFetchRequest:(id)arg0 ;
-(id)recordingsWithUniqueIDsFetchRequest:(id)arg0 ;
-(id)userDefinedFoldersFetchRequest:(int)arg0 ;
-(id)visibleRecordingsFetchRequest;
-(void)updateFetchRequestTemplates;


@end


#endif