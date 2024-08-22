// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFLIBRARYPOPSTORE_H
#define MFLIBRARYPOPSTORE_H

@class MFLibraryStore;


#import "MFPOP3Connection.h"

@interface MFLibraryPOPStore : MFLibraryStore {
    MFPOP3Connection *_connection;
    NSUInteger _serverMessageCount;
}




-(BOOL)bodyFetchRequiresNetworkActivity;
-(BOOL)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 withConsumer:(id)arg3 downloadIfNecessary:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(NSInteger)fetchNumMessages:(NSUInteger)arg0 preservingUID:(id)arg1 options:(NSUInteger)arg2 ;
-(NSUInteger)serverMessageCount;
-(NSUInteger)serverUnreadOnlyOnServerCount;
-(id)_fetchBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 downloadIfNecessary:(BOOL)arg2 partial:(*BOOL)arg3 ;
-(id)_fetchHeaderDataForMessage:(id)arg0 downloadIfNecessary:(BOOL)arg1 ;
-(id)bodyDataForMessage:(id)arg0 isComplete:(*BOOL)arg1 isPartial:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 ;
-(id)dataForMimePart:(id)arg0 inRange:(struct _NSRange )arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 didDownload:(*BOOL)arg4 ;
-(id)fullBodyDataForMessage:(id)arg0 andHeaderDataIfReadilyAvailable:(*id)arg1 isComplete:(*BOOL)arg2 downloadIfNecessary:(BOOL)arg3 usePartDatas:(BOOL)arg4 didDownload:(*BOOL)arg5 ;
-(id)initWithMailbox:(id)arg0 readOnly:(BOOL)arg1 ;
-(id)messageForRemoteID:(id)arg0 ;
-(id)messageForRemoteID:(id)arg0 inMailbox:(id)arg1 ;
-(void)_handleFlagsChangedForMessages:(id)arg0 flags:(id)arg1 oldFlagsByMessage:(id)arg2 ;
-(void)messagesWereDeleted:(id)arg0 ;
-(void)openSynchronouslyUpdatingMetadata:(BOOL)arg0 ;
-(void)purgeMessages:(id)arg0 ;
-(void)setServerMessageCount:(NSUInteger)arg0 ;
-(void)setServerUnreadOnlyOnServerCount:(NSUInteger)arg0 ;


@end


#endif