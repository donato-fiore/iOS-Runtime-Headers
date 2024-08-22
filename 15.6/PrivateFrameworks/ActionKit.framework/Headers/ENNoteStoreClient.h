// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ENNOTESTORECLIENT_H
#define ENNOTESTORECLIENT_H

@class NSString;


#import "ENStoreClient.h"
#import "EDAMNoteStoreClient.h"

@interface ENNoteStoreClient : ENStoreClient

@property (copy, nonatomic) NSString *cachedAuthenticationToken; // ivar: _cachedAuthenticationToken
@property (copy, nonatomic) NSString *cachedNoteStoreUrl; // ivar: _cachedNoteStoreUrl
@property (retain, nonatomic) EDAMNoteStoreClient *client; // ivar: _client
@property (copy, nonatomic) id *downloadProgressHandler; // ivar: _downloadProgressHandler
@property (copy, nonatomic) id *uploadProgressHandler; // ivar: _uploadProgressHandler


+(id)noteStoreClientWithUrl:(id)arg0 authenticationToken:(id)arg1 ;
-(id)authenticateToSharedNotebookWithGlobalId:(id)arg0 ;
-(id)authenticationToken;
-(id)noteStoreUrl;
-(void)authenticateToSharedNoteWithGuid:(id)arg0 noteKey:(id)arg1 authenticationToken:(id)arg2 completion:(id)arg3 ;
// -(void)authenticateToSharedNoteWithGuid:(id)arg0 noteKey:(id)arg1 authenticationToken:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)authenticateToSharedNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)authenticateToSharedNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)cancelFirstOperation;
// -(void)copyNoteWithGuid:(id)arg0 toNoteBookGuid:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
-(void)copyNoteWithGuid:(id)arg0 toNotebookWithGuid:(id)arg1 completion:(id)arg2 ;
-(void)createLinkedNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)createLinkedNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)createNote:(id)arg0 completion:(id)arg1 ;
// -(void)createNote:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)createNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)createNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)createSearch:(id)arg0 completion:(id)arg1 ;
// -(void)createSearch:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)createSharedNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)createSharedNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)createTag:(id)arg0 completion:(id)arg1 ;
// -(void)createTag:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)deleteNoteWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)deleteNoteWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)emailNoteWithParameters:(id)arg0 completion:(id)arg1 ;
// -(void)emailNoteWithParameters:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeInactiveNoteWithCompletion:(id)arg0 ;
// -(void)expungeInactiveNoteWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)expungeLinkedNotebookWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)expungeLinkedNotebookWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeNoteWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)expungeNoteWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeNotebookWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)expungeNotebookWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeNotesWithGuids:(id)arg0 completion:(id)arg1 ;
// -(void)expungeNotesWithGuids:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeSearchWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)expungeSearchWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeSharedNotebooksWithIds:(id)arg0 completion:(id)arg1 ;
// -(void)expungeSharedNotebooksWithIds:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)expungeTagWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)expungeTagWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)fetchAlternateDataForResourceWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchAttributesForResourceWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchDefaultNotebookWithCompletion:(id)arg0 ;
-(void)fetchFilteredSyncChunkAfterUSN:(int)arg0 maxEntries:(int)arg1 filter:(id)arg2 completion:(id)arg3 ;
-(void)fetchNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 completion:(id)arg2 ;
-(void)fetchNoteApplicationDataWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchNoteContentWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchNoteVersionWithGuid:(id)arg0 updateSequenceNum:(int)arg1 resourceOptions:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchNoteWithGuid:(id)arg0 includingContent:(BOOL)arg1 resourceOptions:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchNotebookWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchPublicNotebookWithUserID:(int)arg0 publicURI:(id)arg1 completion:(id)arg2 ;
-(void)fetchRecognitionDataForResourceWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 completion:(id)arg2 ;
-(void)fetchResourceApplicationDataWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchResourceByHashWithGuid:(id)arg0 contentHash:(id)arg1 options:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)fetchResourceDataWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchResourceWithGuid:(id)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)fetchSearchTextForNoteWithGuid:(id)arg0 noteOnly:(BOOL)arg1 tokenizeForIndexing:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchSearchTextForResourceWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchSearchWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchSharedNotebookByAuthWithCompletion:(id)arg0 ;
-(void)fetchSyncChunkAfterUSN:(int)arg0 maxEntries:(int)arg1 fullSyncOnly:(BOOL)arg2 completion:(id)arg3 ;
-(void)fetchSyncChunkForLinkedNotebook:(id)arg0 afterUSN:(int)arg1 maxEntries:(int)arg2 fullSyncOnly:(BOOL)arg3 completion:(id)arg4 ;
-(void)fetchSyncStateForLinkedNotebook:(id)arg0 completion:(id)arg1 ;
-(void)fetchSyncStateWithCompletion:(id)arg0 ;
-(void)fetchTagNamesForNoteWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)fetchTagWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)findNoteCountsWithFilter:(id)arg0 includingTrash:(BOOL)arg1 completion:(id)arg2 ;
// -(void)findNoteCountsWithFilter:(id)arg0 withTrash:(BOOL)arg1 success:(id)arg2 failure:(unk)arg3  ;
-(void)findNoteOffsetWithFilter:(id)arg0 guid:(id)arg1 completion:(id)arg2 ;
// -(void)findNoteOffsetWithFilter:(id)arg0 guid:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
// -(void)findNotesMetadataInternalWithFilter:(id)arg0 offset:(int)arg1 resultSpec:(id)arg2 maxResults:(NSUInteger)arg3 results:(id)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(void)findNotesMetadataWithFilter:(id)arg0 maxResults:(NSUInteger)arg1 resultSpec:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)findNotesMetadataWithFilter:(id)arg0 offset:(int)arg1 maxNotes:(int)arg2 resultSpec:(id)arg3 completion:(id)arg4 ;
// -(void)findNotesMetadataWithFilter:(id)arg0 offset:(int)arg1 maxNotes:(int)arg2 resultSpec:(id)arg3 success:(id)arg4 failure:(unk)arg5  ;
-(void)findNotesWithFilter:(id)arg0 offset:(int)arg1 maxNotes:(int)arg2 completion:(id)arg3 ;
// -(void)findNotesWithFilter:(id)arg0 offset:(int)arg1 maxNotes:(int)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)findRelatedWithQuery:(id)arg0 resultSpec:(id)arg1 completion:(id)arg2 ;
// -(void)findRelatedWithQuery:(id)arg0 resultSpec:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
// -(void)getDefaultNotebookWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)getFilteredSyncChunkAfterUSN:(int)arg0 maxEntries:(int)arg1 filter:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(void)getLinkedNotebookSyncChunk:(id)arg0 afterUSN:(int)arg1 maxEntries:(int)arg2 fullSyncOnly:(BOOL)arg3 success:(id)arg4 failure:(unk)arg5  ;
// -(void)getLinkedNotebookSyncState:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
// -(void)getNoteApplicationDataWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getNoteContentWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getNoteSearchTextWithGuid:(id)arg0 noteOnly:(BOOL)arg1 tokenizeForIndexing:(BOOL)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(void)getNoteTagNamesWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getNoteVersionWithGuid:(id)arg0 updateSequenceNum:(int)arg1 withResourcesData:(BOOL)arg2 withResourcesRecognition:(BOOL)arg3 withResourcesAlternateData:(BOOL)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(void)getNoteWithGuid:(id)arg0 withContent:(BOOL)arg1 withResourcesData:(BOOL)arg2 withResourcesRecognition:(BOOL)arg3 withResourcesAlternateData:(BOOL)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(void)getNotebookWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getPublicNotebookWithUserID:(int)arg0 publicUri:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
// -(void)getResourceAlternateDataWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
// -(void)getResourceApplicationDataWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceAttributesWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceByHashWithGuid:(id)arg0 contentHash:(id)arg1 withData:(BOOL)arg2 withRecognition:(BOOL)arg3 withAlternateData:(BOOL)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(void)getResourceDataWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceRecognitionWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceSearchTextWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getResourceWithGuid:(id)arg0 withData:(BOOL)arg1 withRecognition:(BOOL)arg2 withAttributes:(BOOL)arg3 withAlternateDate:(BOOL)arg4 success:(id)arg5 failure:(unk)arg6  ;
// -(void)getSearchWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
// -(void)getSharedNotebookByAuthWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)getSyncChunkAfterUSN:(int)arg0 maxEntries:(int)arg1 fullSyncOnly:(BOOL)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(void)getSyncStateWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)getTagWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)listLinkedNotebooksWithCompletion:(id)arg0 ;
// -(void)listLinkedNotebooksWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)listNoteVersionsWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)listNoteVersionsWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)listNotebooksWithCompletion:(id)arg0 ;
// -(void)listNotebooksWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)listSearchesWithCompletion:(id)arg0 ;
// -(void)listSearchesWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)listSharedNotebooksWithCompletion:(id)arg0 ;
// -(void)listSharedNotebooksWithSuccess:(id)arg0 failure:(unk)arg1  ;
// -(void)listTagsByNotebookWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)listTagsInNotebookWithGuid:(id)arg0 completion:(id)arg1 ;
-(void)listTagsWithCompletion:(id)arg0 ;
// -(void)listTagsWithSuccess:(id)arg0 failure:(unk)arg1  ;
-(void)sendMessageToMembersOfSharedNotebookWithGuid:(id)arg0 messageText:(id)arg1 recipients:(id)arg2 completion:(id)arg3 ;
// -(void)sendMessageToSharedNotebookMembersWithGuid:(id)arg0 messageText:(id)arg1 recipients:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)setNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 value:(id)arg2 completion:(id)arg3 ;
// -(void)setNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 value:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
-(void)setRecipientSettings:(id)arg0 forSharedNotebookWithID:(NSInteger)arg1 completion:(id)arg2 ;
-(void)setResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 value:(id)arg2 completion:(id)arg3 ;
// -(void)setResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 value:(id)arg2 success:(id)arg3 failure:(unk)arg4  ;
// -(void)setSharedNotebookRecipientSettingsWithSharedNotebookId:(NSInteger)arg0 recipientSettings:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
-(void)shareNoteWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)shareNoteWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)stopSharingNoteWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)stopSharingNoteWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)unsetNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 completion:(id)arg2 ;
// -(void)unsetNoteApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
-(void)unsetResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 completion:(id)arg2 ;
// -(void)unsetResourceApplicationDataEntryWithGuid:(id)arg0 key:(id)arg1 success:(id)arg2 failure:(unk)arg3  ;
-(void)untagAllWithGuid:(id)arg0 completion:(id)arg1 ;
// -(void)untagAllWithGuid:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateLinkedNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)updateLinkedNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateNote:(id)arg0 completion:(id)arg1 ;
// -(void)updateNote:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)updateNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateProgressHandlers;
-(void)updateResource:(id)arg0 completion:(id)arg1 ;
// -(void)updateResource:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateSearch:(id)arg0 completion:(id)arg1 ;
// -(void)updateSearch:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateSharedNotebook:(id)arg0 completion:(id)arg1 ;
// -(void)updateSharedNotebook:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;
-(void)updateTag:(id)arg0 completion:(id)arg1 ;
// -(void)updateTag:(id)arg0 success:(id)arg1 failure:(unk)arg2  ;


@end


#endif