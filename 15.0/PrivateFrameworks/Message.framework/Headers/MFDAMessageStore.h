// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MFDAMESSAGESTORE_H
#define MFDAMESSAGESTORE_H

@class DAFolder;


#import "MFLibraryStore.h"

@interface MFDAMessageStore : MFLibraryStore {
    DAFolder *_DAFolder;
}


@property (nonatomic) BOOL backedByVirtualAllSearchMailbox; // ivar: _backedByVirtualAllSearchMailbox


-(BOOL)_fetchDataForMimePart:(id)arg0 range:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 consumer:(id)arg3 ;
-(BOOL)allowsAppend;
-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)canFetchSearchResults;
-(BOOL)hasMoreFetchableMessages;
-(BOOL)messageCanBeTriaged:(id)arg0 ;
-(BOOL)replayFlagChange:(id)arg0 forRemoteIDs:(id)arg1 error:(*id)arg2 completed:(*BOOL)arg3 ;
-(BOOL)shouldDownloadBodyDataForMessage:(id)arg0 ;
-(BOOL)shouldGrowFetchWindow;
-(BOOL)wantsLineEndingConversionForMIMEPart:(id)arg0 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)fetchWindow;
-(NSUInteger)growFetchWindow;
-(id)_downloadHeadersForMessages:(id)arg0 ;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchBodyDataForNormalMessage:(id)arg0 format:(int)arg1 part:(id)arg2 streamConsumer:(id)arg3 ;
-(id)_fetchBodyDataForSearchResult:(id)arg0 folderID:(id)arg1 format:(int)arg2 streamConsumer:(id)arg3 ;
-(id)bestAlternativeForPart:(id)arg0 ;
-(id)defaultAlternativeForPart:(id)arg0 ;
-(id)fetchBodyDataForRemoteID:(id)arg0 ;
-(id)folderIDForFetching;
-(id)initWithMailboxUid:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)loadMeetingDataForMessage:(id)arg0 ;
-(id)loadMeetingExternalIDForMessage:(id)arg0 ;
-(id)loadMeetingMetadataForMessage:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(id)storeData:(id)arg0 forMimePart:(id)arg1 isComplete:(BOOL)arg2 ;
-(id)storeSearchResultMatchingSearchText:(id)arg0 criterion:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 error:(*id)arg4 ;
-(void)_remoteIDsMatchingSearchText:(id)arg0 predicate:(id)arg1 limit:(unsigned int)arg2 offset:(id)arg3 filterByDate:(BOOL)arg4 handler:(id)arg5 ;
-(void)deleteMessagesOlderThanNumberOfDays:(int)arg0 compact:(BOOL)arg1 ;
-(void)purgeMessagesBeyondLimit:(NSUInteger)arg0 keepingMessage:(id)arg1 ;
-(void)setFlagsForAllMessagesFromDictionary:(id)arg0 ;


@end


#endif