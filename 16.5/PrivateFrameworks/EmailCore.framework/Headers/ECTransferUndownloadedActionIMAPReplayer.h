// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ECTRANSFERUNDOWNLOADEDACTIONIMAPREPLAYER_H
#define ECTRANSFERUNDOWNLOADEDACTIONIMAPREPLAYER_H

@protocol ECIMAPLocalActionReplayer, ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;


#import "ECLocalActionReplayer.h"

@interface ECTransferUndownloadedActionIMAPReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>



@property (weak, nonatomic) NSObject<ECIMAPLocalActionReplayerDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) NSObject<ECIMAPServerInterface> *serverInterface; // ivar: serverInterface


-(BOOL)_deleteUIDs:(id)arg0 ;
-(BOOL)_moveAllMessages;
-(id)_copyAllMessages:(BOOL)arg0 ;
-(id)_uidIndexSet;
-(id)replayAction;


@end


#endif