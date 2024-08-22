// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFDATRANSFERACTIONREPLAYER_H
#define MFDATRANSFERACTIONREPLAYER_H

@class ECTransferActionReplayer, NSString;
@protocol ECTransferActionReplayerSubclassMethods;


#import "MFDAMessageStore.h"

@interface MFDATransferActionReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MFDAMessageStore *store; // ivar: _store
@property (readonly) Class superclass;


-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg0 ;
-(BOOL)downloadFailed;
-(BOOL)isRecoverableError:(id)arg0 ;
-(id)appendItem:(id)arg0 mailboxURL:(id)arg1 ;
-(id)copyItems:(id)arg0 destinationMailboxURL:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg0 mailboxURL:(id)arg1 ;
-(id)moveItems:(id)arg0 destinationMailboxURL:(id)arg1 ;
-(id)replayActionUsingStore:(id)arg0 ;


@end


#endif