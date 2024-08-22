// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NNMKSYNCCONTROLLER_H
#define NNMKSYNCCONTROLLER_H

@protocol NNMKDeviceRegistryHolder;

#import <Foundation/Foundation.h>


@interface NNMKSyncController : NSObject

@property (weak, nonatomic) NSObject<NNMKDeviceRegistryHolder> *delegate; // ivar: _delegate


-(BOOL)_validateMessage:(id)arg0 ;
-(BOOL)canSyncMailbox:(id)arg0 ;
-(BOOL)canSyncMessage:(id)arg0 forMailbox:(id)arg1 ;
-(BOOL)doesMessageBelongToSyncedMailboxes:(id)arg0 ;
-(BOOL)isMessage:(id)arg0 fromMailbox:(id)arg1 ;
-(BOOL)isValidMessageStatus:(NSUInteger)arg0 forMailbox:(id)arg1 ;
-(BOOL)shouldAddsDeletesMessagesByStatusUpdatesForMailbox:(id)arg0 ;
-(id)deviceRegistry;
-(id)filterMessages:(id)arg0 byAlreadySynced:(BOOL)arg1 byMailbox:(id)arg2 ;
-(id)filterMessages:(id)arg0 receivedBeforeDate:(id)arg1 ;
-(id)groupMessagesByMailboxId:(id)arg0 ;
-(id)mailboxForMessageWithId:(id)arg0 ;
-(id)mailboxWithId:(id)arg0 ;
-(id)mailboxesToSync;
-(id)messageIdFromWatchMessageId:(id)arg0 ;
-(id)removeInvalidMailboxesFromMailboxSelection:(id)arg0 ;
-(id)watchAttachmentContentIdFromContentId:(id)arg0 ;
-(id)watchMessageIdFromMessageId:(id)arg0 ;
-(void)groupMessagesByMailbox:(id)arg0 mailboxes:(id)arg1 block:(id)arg2 ;


@end


#endif