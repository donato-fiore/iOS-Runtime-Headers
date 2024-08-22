// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3TRACK_H
#define ML3TRACK_H



#import "ML3Entity.h"

@interface ML3Track : ML3Entity



+(BOOL)_writeSyncDeletesToPlistWithLibrary:(id)arg0 forPersistentIDs:(id)arg1 ;
+(BOOL)assistantLibraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)clearLocationFromLibrary:(id)arg0 persistentIDs:(id)arg1 ;
+(BOOL)clearLocationFromLibrary:(id)arg0 persistentIDs:(id)arg1 disableKeepLocal:(BOOL)arg2 ;
+(BOOL)clearLocationFromLibrary:(id)arg0 persistentIDs:(id)arg1 disableKeepLocal:(BOOL)arg2 usingConnection:(id)arg3 ;
+(BOOL)clearLocationFromLibrary:(id)arg0 persistentIDs:(id)arg1 usingConnection:(id)arg2 ;
+(BOOL)clearPlaybackKeysFromLibrary:(id)arg0 persistentIDs:(id)arg1 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)deleteFromLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 usingConnection:(id)arg4 ;
+(BOOL)libraryContentsChangeForProperty:(id)arg0 ;
+(BOOL)libraryDynamicChangeForProperty:(id)arg0 ;
+(BOOL)registerBookmarkMetadataIdentifierFunctionOnConnection:(id)arg0 ;
+(BOOL)removeFromMyLibrary:(id)arg0 deletionType:(int)arg1 persistentIDs:(*NSInteger)arg2 count:(NSUInteger)arg3 ;
+(BOOL)trackValueAreInTheCloud:(id)arg0 ;
+(BOOL)trackWithPersistentID:(NSInteger)arg0 existsInLibrary:(id)arg1 ;
+(BOOL)trackWithPersistentID:(NSInteger)arg0 existsInLibraryWithConnection:(id)arg1 ;
+(BOOL)trackWithPersistentID:(NSInteger)arg0 visibleInLibrary:(id)arg1 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg0 persistentIDs:(id)arg1 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg0 persistentIDs:(id)arg1 deletedFileSize:(*NSInteger)arg2 ;
+(BOOL)unlinkRedownloadableAssetsFromLibrary:(id)arg0 persistentIDs:(id)arg1 deletionType:(int)arg2 deletedFileSize:(*NSInteger)arg3 ;
+(NSInteger)revisionTrackingCode;
+(id)TVShowEpisodesDefaultOrderingTerms;
+(id)_normalizedImportChapters:(id)arg0 trackPersistentID:(NSInteger)arg1 ;
+(id)albumAllArtistsDefaultOrderingTerms;
+(id)albumAndArtistDefaultOrderingTerms;
+(id)albumsByAlbumArtistDefaultOrderingTerms;
+(id)albumsDefaultOrderingTerms;
+(id)allProperties;
+(id)artistAllAlbumsDefaultOrderingTerms;
+(id)artistsDefaultOrderingTerms;
+(id)collectionClassesToUpdateBeforeDelete;
+(id)composersDefaultOrderingTerms;
+(id)containerQueryWithContainer:(id)arg0 ;
+(id)containerQueryWithContainer:(id)arg0 predicate:(id)arg1 ;
+(id)containerQueryWithContainer:(id)arg0 predicate:(id)arg1 orderingTerms:(id)arg2 ;
+(id)databaseTable;
+(id)defaultOrderingTerms;
+(id)extraTablesToDelete;
+(id)extraTablesToInsert;
+(id)flattenedChapterDataFromDAAPInfoDictionary:(id)arg0 trackPersistentID:(NSInteger)arg1 ;
+(id)flattenedChapterDataFromSyncInfoDictionaries:(id)arg0 trackPersistentID:(NSInteger)arg1 ;
+(id)flattenedChapterDataWithImportChapters:(id)arg0 library:(id)arg1 trackPersistentID:(NSInteger)arg2 ;
+(id)foreignColumnForProperty:(id)arg0 ;
+(id)foreignDatabaseTableForProperty:(id)arg0 ;
+(id)genresDefaultOrderingTerms;
+(id)importChaptersByParsingAsset:(id)arg0 ;
+(id)joinClausesForProperty:(id)arg0 ;
+(id)orderingTermsForITTGTrackOrder:(unsigned int)arg0 descending:(BOOL)arg1 ;
+(id)persistentIDColumnForTable:(id)arg0 ;
+(id)podcastsDefaultOrderingTerms;
+(id)podcastsEpisodesDefaultOrderingTerms;
+(id)predicateByOptimizingComparisonPredicate:(id)arg0 ;
+(id)predisambiguatedProperties;
+(id)sectionPropertyForProperty:(id)arg0 ;
+(id)subselectPropertyForProperty:(id)arg0 ;
+(id)subselectStatementForProperty:(id)arg0 ;
+(id)unsettableProperties;
+(void)enumeratePathsToDeleteFromLibrary:(id)arg0 persistentIDs:(id)arg1 usingBlock:(id)arg2 ;
+(void)enumeratePathsToDeleteFromLibrary:(id)arg0 persistentIDs:(id)arg1 usingConnection:(id)arg2 usingBlock:(id)arg3 ;
+(void)initialize;
+(void)populateSortOrdersOfPropertyValues:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 ;
+(void)updateAllBookmarkableStoreBookmarkMetadataIdentifiersOnConnection:(id)arg0 ;
-(BOOL)_populateLocationPropertiesWithPath:(id)arg0 protectionType:(NSInteger)arg1 fromLibrary:(id)arg2 usingConnection:(id)arg3 ;
-(BOOL)needsVideoSnapshot;
-(BOOL)populateArtworkCacheWithArtworkData:(id)arg0 ;
-(BOOL)updateIntegrity;
-(id)absoluteFilePath;
-(id)artworkTokenAtPlaybackTime:(CGFloat)arg0 ;
-(id)chapterTOC;
-(id)initWithDictionary:(id)arg0 inLibrary:(id)arg1 cachedNameOrders:(id)arg2 usingConnection:(id)arg3 ;
-(id)multiverseIdentifier;
-(id)multiverseIdentifierLibraryOnly:(BOOL)arg0 ;
-(id)protocolItem;
-(id)protocolItemForDynamicUpdate;
-(id)rawIntegrity;
-(void)createVideoSnapshotAtTime:(CGFloat)arg0 ;
-(void)populateChapterDataWithImportChapters:(id)arg0 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 isProtected:(BOOL)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 protectionType:(NSInteger)arg1 ;
-(void)populateLocationPropertiesWithPath:(id)arg0 protectionType:(NSInteger)arg1 completionBlock:(id)arg2 ;
-(void)updateCollectionCloudStatus;
-(void)updateStoreBookmarkMetadataIdentifier;


@end


#endif