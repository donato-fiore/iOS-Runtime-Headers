// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECGMAILLABELCHANGEREPLAYER_H
#define ECGMAILLABELCHANGEREPLAYER_H

@protocol ECIMAPLocalActionReplayer, ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;


#import "ECLocalActionReplayer.h"

@interface ECGmailLabelChangeReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>



@property (weak, nonatomic) NSObject<ECIMAPLocalActionReplayerDelegate> *delegate;
@property (retain, nonatomic) NSObject<ECIMAPServerInterface> *serverInterface; // ivar: serverInterface


-(id)replayAction;


@end


#endif