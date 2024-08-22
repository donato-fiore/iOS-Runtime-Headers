// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESSAGESESSIONPRODUCER_H
#define COMESSAGESESSIONPRODUCER_H

@class NSMutableDictionary, NSString;
@protocol COMessageSessionProducerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "COMessageChannel.h"

@interface COMessageSessionProducer : NSObject

@property (readonly, weak, nonatomic) NSObject<COMessageSessionProducerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, weak, nonatomic) COMessageChannel *messageChannel; // ivar: _messageChannel
@property (retain, nonatomic) NSMutableDictionary *sessions; // ivar: _sessions
@property (readonly, copy, nonatomic) NSString *subTopic; // ivar: _subTopic


-(id)description;
-(id)initWithChannel:(id)arg0 subTopic:(id)arg1 delegate:(id)arg2 dispatchQueue:(id)arg3 ;
-(void)startSessionWithMembers:(id)arg0 ;


@end


#endif