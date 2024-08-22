// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ECIMAPFLAGCHANGEUNDOWNLOADEDACTIONREPLAYER_H
#define ECIMAPFLAGCHANGEUNDOWNLOADEDACTIONREPLAYER_H

@protocol ECIMAPLocalActionReplayer, ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;


#import "ECLocalActionReplayer.h"

@interface ECIMAPFlagChangeUndownloadedActionReplayer : ECLocalActionReplayer <ECIMAPLocalActionReplayer>



@property (weak, nonatomic) NSObject<ECIMAPLocalActionReplayerDelegate> *delegate; // ivar: delegate
@property (retain, nonatomic) NSObject<ECIMAPServerInterface> *serverInterface; // ivar: serverInterface


-(id)replayAction;


@end


#endif