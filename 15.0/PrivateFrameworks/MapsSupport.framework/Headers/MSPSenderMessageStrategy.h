// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSPSENDERMESSAGESTRATEGY_H
#define MSPSENDERMESSAGESTRATEGY_H

@class NSMutableSet;
@protocol MSPSenderMessageStrategyDelegate;


#import "MSPSenderStrategy.h"

@interface MSPSenderMessageStrategy : MSPSenderStrategy

@property (weak, nonatomic) NSObject<MSPSenderMessageStrategyDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSMutableSet *messagesParticipants; // ivar: _messagesParticipants


-(id)participants;
-(void)_addMessagesParticipants:(id)arg0 ;
-(void)_removeMessagesParticipants:(id)arg0 ;
-(void)addParticipants:(id)arg0 ;
-(void)removeParticipants:(id)arg0 ;
-(void)sendMessageIfNeeded;
-(void)setState:(id)arg0 ;


@end


#endif