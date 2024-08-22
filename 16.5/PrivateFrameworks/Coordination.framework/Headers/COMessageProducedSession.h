// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef COMESSAGEPRODUCEDSESSION_H
#define COMESSAGEPRODUCEDSESSION_H



#import "COMessageSession.h"
#import "COMessageSessionProducer.h"

@interface COMessageProducedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionProducer *producer; // ivar: _producer


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMember:(id)arg0 producer:(id)arg1 ;


@end


#endif