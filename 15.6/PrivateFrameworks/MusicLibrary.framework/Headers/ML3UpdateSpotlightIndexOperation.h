// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ML3UPDATESPOTLIGHTINDEXOPERATION_H
#define ML3UPDATESPOTLIGHTINDEXOPERATION_H

@class NSString, CSSearchableIndex;


#import "ML3DatabaseOperation.h"

@interface ML3UpdateSpotlightIndexOperation : ML3DatabaseOperation

@property (nonatomic) NSUInteger batchCount; // ivar: _batchCount
@property (nonatomic) NSUInteger bundle; // ivar: _bundle
@property (retain, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (retain, nonatomic) CSSearchableIndex *index; // ivar: _index


-(BOOL)_batchIndexWithTrackPersistentIDsToUpdate:(id)arg0 playlistsPersistentIDsToUpdateSet:(id)arg1 entityStringsToDelete:(id)arg2 currentRevision:(id)arg3 targetRevision:(id)arg4 error:(*id)arg5 ;
-(BOOL)_deleteAllIndexedItemsWithError:(*id)arg0 ;
-(BOOL)_deleteIndexedItemsWithEntityStringIDs:(id)arg0 error:(*id)arg1 ;
-(BOOL)_enumerateSearchableItemsWithPersistentIDs:(id)arg0 entityType:(NSInteger)arg1 error:(*id)arg2 usingBlock:(id)arg3 ;
-(BOOL)_execute:(*id)arg0 ;
-(BOOL)_indexItemsFromLibrarySinceRevision:(NSInteger)arg0 targetRevision:(NSInteger)arg1 error:(*id)arg2 ;
-(BOOL)_indexTracksWithPersistentIDs:(id)arg0 playlistsWithPersistentIDs:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateIndexedItemsWithIdentifiers:(id)arg0 error:(*id)arg1 ;
-(BOOL)_verifyLibraryConnectionAndAttributesProperties:(*id)arg0 ;
-(NSUInteger)type;
-(id)_createSearchableItemsForPlaylistsWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)_createSearchableItemsForTracksWithQuery:(id)arg0 error:(*id)arg1 ;
-(id)_createSearchableItemsWithPersistentIDs:(id)arg0 entityType:(NSInteger)arg1 error:(*id)arg2 ;
-(id)_queryForPlaylistsContainingMusicShowsMissedByQuery:(id)arg0 inContainerPIDs:(id)arg1 ;


@end


#endif