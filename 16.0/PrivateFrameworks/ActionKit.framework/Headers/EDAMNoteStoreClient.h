// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EDAMNOTESTORECLIENT_H
#define EDAMNOTESTORECLIENT_H

@class NSString;
@protocol EDAMNoteStore, ENTProtocol;

#import <Foundation/Foundation.h>


@interface EDAMNoteStoreClient : NSObject <EDAMNoteStore>

 {
    id<ENTProtocol> *_inProtocol;
    id<ENTProtocol> *_outProtocol;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)acquireNoteLock:(id)arg0 noteGuid:(id)arg1 ;
-(id)authenticateToSharedNote:(id)arg0 noteKey:(id)arg1 authenticationToken:(id)arg2 ;
-(id)authenticateToSharedNotebook:(id)arg0 authenticationToken:(id)arg1 ;
-(id)copyNote:(id)arg0 noteGuid:(id)arg1 toNotebookGuid:(id)arg2 ;
-(id)createLinkedNotebook:(id)arg0 linkedNotebook:(id)arg1 ;
-(id)createNote:(id)arg0 note:(id)arg1 ;
-(id)createNotebook:(id)arg0 notebook:(id)arg1 ;
-(id)createOrUpdateNotebookShares:(id)arg0 shareTemplate:(id)arg1 ;
-(id)createOrUpdateSharedNotes:(id)arg0 shareTemplate:(id)arg1 ;
-(id)createSearch:(id)arg0 search:(id)arg1 ;
-(id)createSharedNotebook:(id)arg0 sharedNotebook:(id)arg1 ;
-(id)createTag:(id)arg0 tag:(id)arg1 ;
-(id)findContacts:(id)arg0 query:(id)arg1 ;
-(id)findInBusiness:(id)arg0 query:(id)arg1 ;
-(id)findNoteCounts:(id)arg0 filter:(id)arg1 withTrash:(BOOL)arg2 ;
-(id)findNotes:(id)arg0 filter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 ;
-(id)findNotesMetadata:(id)arg0 filter:(id)arg1 offset:(int)arg2 maxNotes:(int)arg3 resultSpec:(id)arg4 ;
-(id)findRelated:(id)arg0 query:(id)arg1 resultSpec:(id)arg2 ;
-(id)findSearchSuggestions:(id)arg0 query:(id)arg1 resultSpec:(id)arg2 ;
-(id)findTimeZones:(id)arg0 timeZoneSpec:(id)arg1 maxTimeZones:(int)arg2 ;
-(id)getAds:(id)arg0 adParameters:(id)arg1 ;
-(id)getDefaultNotebook:(id)arg0 ;
-(id)getFilteredSyncChunk:(id)arg0 afterUSN:(int)arg1 maxEntries:(int)arg2 filter:(id)arg3 ;
-(id)getLinkedAccountSyncState:(id)arg0 linkedAccount:(id)arg1 ;
-(id)getLinkedNotebookSyncChunk:(id)arg0 linkedNotebook:(id)arg1 afterUSN:(int)arg2 maxEntries:(int)arg3 fullSyncOnly:(BOOL)arg4 ;
-(id)getLinkedNotebookSyncState:(id)arg0 linkedNotebook:(id)arg1 ;
-(id)getNote:(id)arg0 guid:(id)arg1 withContent:(BOOL)arg2 withResourcesData:(BOOL)arg3 withResourcesRecognition:(BOOL)arg4 withResourcesAlternateData:(BOOL)arg5 ;
-(id)getNoteApplicationData:(id)arg0 guid:(id)arg1 ;
-(id)getNoteApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 ;
-(id)getNoteContent:(id)arg0 guid:(id)arg1 ;
-(id)getNoteLockStatus:(id)arg0 noteGuid:(id)arg1 ;
-(id)getNoteSearchText:(id)arg0 guid:(id)arg1 noteOnly:(BOOL)arg2 tokenizeForIndexing:(BOOL)arg3 ;
-(id)getNoteShares:(id)arg0 noteGuid:(id)arg1 ;
-(id)getNoteSnippets:(id)arg0 noteGuids:(id)arg1 maxSnippetLength:(int)arg2 ;
-(id)getNoteTagNames:(id)arg0 guid:(id)arg1 ;
-(id)getNoteVersion:(id)arg0 noteGuid:(id)arg1 updateSequenceNum:(int)arg2 withResourcesData:(BOOL)arg3 withResourcesRecognition:(BOOL)arg4 withResourcesAlternateData:(BOOL)arg5 ;
-(id)getNoteWithResultSpec:(id)arg0 guid:(id)arg1 resultSpec:(id)arg2 ;
-(id)getNotebook:(id)arg0 guid:(id)arg1 ;
-(id)getNotebookShares:(id)arg0 notebookGuid:(id)arg1 ;
-(id)getNotebookSharesEmailAddresses:(id)arg0 notebookGuid:(id)arg1 identities:(id)arg2 skipUnknownUserIdentities:(BOOL)arg3 ;
-(id)getPreferences:(id)arg0 preferenceNames:(id)arg1 ;
-(id)getPublicNotebook:(int)arg0 publicUri:(id)arg1 ;
-(id)getRandomAd:(id)arg0 adParameters:(id)arg1 ;
-(id)getResource:(id)arg0 guid:(id)arg1 withData:(BOOL)arg2 withRecognition:(BOOL)arg3 withAttributes:(BOOL)arg4 withAlternateData:(BOOL)arg5 ;
-(id)getResourceAlternateData:(id)arg0 guid:(id)arg1 ;
-(id)getResourceApplicationData:(id)arg0 guid:(id)arg1 ;
-(id)getResourceApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 ;
-(id)getResourceAttributes:(id)arg0 guid:(id)arg1 ;
-(id)getResourceByHash:(id)arg0 noteGuid:(id)arg1 contentHash:(id)arg2 withData:(BOOL)arg3 withRecognition:(BOOL)arg4 withAlternateData:(BOOL)arg5 ;
-(id)getResourceData:(id)arg0 guid:(id)arg1 ;
-(id)getResourceRecognition:(id)arg0 guid:(id)arg1 ;
-(id)getResourceSearchText:(id)arg0 guid:(id)arg1 ;
-(id)getSearch:(id)arg0 guid:(id)arg1 ;
-(id)getSharedNotebookByAuth:(id)arg0 ;
-(id)getSyncChunk:(id)arg0 afterUSN:(int)arg1 maxEntries:(int)arg2 fullSyncOnly:(BOOL)arg3 ;
-(id)getSyncState:(id)arg0 ;
-(id)getSyncStateWithMetrics:(id)arg0 clientMetrics:(id)arg1 ;
-(id)getTag:(id)arg0 guid:(id)arg1 ;
-(id)getViewersForNotes:(id)arg0 noteGuids:(id)arg1 ;
-(id)initWithInProtocol:(id)arg0 outProtocol:(id)arg1 ;
-(id)initWithProtocol:(id)arg0 ;
-(id)joinPublishedBusinessNotebook:(id)arg0 notebookGuid:(id)arg1 ;
-(id)listAccessibleBusinessNotebooks:(id)arg0 ;
-(id)listLinkedNotebooks:(id)arg0 ;
-(id)listNoteVersions:(id)arg0 noteGuid:(id)arg1 ;
-(id)listNotebooks:(id)arg0 ;
-(id)listPublishedBusinessNotebooks:(id)arg0 ;
-(id)listSearches:(id)arg0 ;
-(id)listSharedNotebooks:(id)arg0 ;
-(id)listTags:(id)arg0 ;
-(id)listTagsByNotebook:(id)arg0 notebookGuid:(id)arg1 ;
-(id)manageNoteShares:(id)arg0 parameters:(id)arg1 ;
-(id)manageNotebookShares:(id)arg0 parameters:(id)arg1 ;
-(id)releaseNoteLock:(id)arg0 noteGuid:(id)arg1 ;
-(id)sendLogRequest:(id)arg0 logRequest:(id)arg1 ;
-(id)setNotebookRecipientSettings:(id)arg0 notebookGuid:(id)arg1 recipientSettings:(id)arg2 ;
-(id)shareNote:(id)arg0 guid:(id)arg1 ;
-(id)shareNotebook:(id)arg0 sharedNotebook:(id)arg1 message:(id)arg2 ;
-(id)updateNote:(id)arg0 note:(id)arg1 ;
-(id)updateNoteIfUsnMatches:(id)arg0 note:(id)arg1 ;
-(int)deleteNote:(id)arg0 guid:(id)arg1 ;
-(int)expungeInactiveNotes:(id)arg0 ;
-(int)expungeLinkedNotebook:(id)arg0 guid:(id)arg1 ;
-(int)expungeNote:(id)arg0 guid:(id)arg1 ;
-(int)expungeNotebook:(id)arg0 guid:(id)arg1 ;
-(int)expungeNotes:(id)arg0 noteGuids:(id)arg1 ;
-(int)expungeSearch:(id)arg0 guid:(id)arg1 ;
-(int)expungeSharedNotebooks:(id)arg0 sharedNotebookIds:(id)arg1 ;
-(int)expungeTag:(id)arg0 guid:(id)arg1 ;
-(int)findNoteOffset:(id)arg0 filter:(id)arg1 guid:(id)arg2 ;
-(int)renameNotebook:(id)arg0 notebookGuid:(id)arg1 name:(id)arg2 ;
-(int)sendMessageToSharedNotebookMembers:(id)arg0 notebookGuid:(id)arg1 messageText:(id)arg2 recipients:(id)arg3 ;
-(int)setNoteApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(int)setResourceApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(int)setSharedNotebookRecipientSettings:(id)arg0 sharedNotebookId:(NSInteger)arg1 recipientSettings:(id)arg2 ;
-(int)shareNoteWithBusiness:(id)arg0 noteGuid:(id)arg1 ;
-(int)stopSharingNoteWithBusiness:(id)arg0 noteGuid:(id)arg1 ;
-(int)unsetNoteApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 ;
-(int)unsetResourceApplicationDataEntry:(id)arg0 guid:(id)arg1 key:(id)arg2 ;
-(int)updateLinkedNotebook:(id)arg0 linkedNotebook:(id)arg1 ;
-(int)updateNotebook:(id)arg0 notebook:(id)arg1 ;
-(int)updatePreferences:(id)arg0 preferencesToUpdate:(id)arg1 ;
-(int)updateResource:(id)arg0 resource:(id)arg1 ;
-(int)updateSearch:(id)arg0 search:(id)arg1 ;
-(int)updateSharedNotebook:(id)arg0 sharedNotebook:(id)arg1 ;
-(int)updateTag:(id)arg0 tag:(id)arg1 ;
-(void)cancel;
-(void)emailNote:(id)arg0 parameters:(id)arg1 ;
-(void)requestAccessToNotebook:(id)arg0 notebookGuid:(id)arg1 privilegeLevel:(int)arg2 ;
-(void)setDownloadProgressBlock:(id)arg0 ;
-(void)setUploadProgressBlock:(id)arg0 ;
-(void)stopSharingNote:(id)arg0 guid:(id)arg1 ;
-(void)stopSharingNoteWithRecipients:(id)arg0 guid:(id)arg1 ;
-(void)unpublishNotebook:(id)arg0 notebookGuid:(id)arg1 convertGroupSharesToIndividual:(BOOL)arg2 ;
-(void)untagAll:(id)arg0 guid:(id)arg1 ;
-(void)updateUserSetting:(id)arg0 setting:(int)arg1 value:(id)arg2 ;


@end


#endif