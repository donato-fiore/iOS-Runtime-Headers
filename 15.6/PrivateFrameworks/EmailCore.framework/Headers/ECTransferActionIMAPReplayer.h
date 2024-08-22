// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ECTRANSFERACTIONIMAPREPLAYER_H
#define ECTRANSFERACTIONIMAPREPLAYER_H

@class NSString;
@protocol ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer, ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;


#import "ECTransferActionReplayer.h"

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<ECIMAPLocalActionReplayerDelegate> *delegate; // ivar: delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<ECIMAPServerInterface> *serverInterface; // ivar: serverInterface
@property (readonly) Class superclass;


-(BOOL)deleteSourceMessagesFromTransferItems:(id)arg0 ;
-(BOOL)downloadFailed;
-(BOOL)isRecoverableError:(id)arg0 ;
-(id)_transferItems:(id)arg0 destinationMailboxURL:(id)arg1 isMove:(BOOL)arg2 ;
-(id)appendItem:(id)arg0 mailboxURL:(id)arg1 ;
-(id)copyItems:(id)arg0 destinationMailboxURL:(id)arg1 ;
-(id)fetchBodyDataForRemoteID:(id)arg0 mailboxURL:(id)arg1 ;
-(id)moveItems:(id)arg0 destinationMailboxURL:(id)arg1 ;


@end


#endif