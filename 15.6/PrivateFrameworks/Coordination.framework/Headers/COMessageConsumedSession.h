// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef COMESSAGECONSUMEDSESSION_H
#define COMESSAGECONSUMEDSESSION_H



#import "COMessageSession.h"
#import "COMessageSessionConsumer.h"

@interface COMessageConsumedSession : COMessageSession

@property (readonly, weak, nonatomic) COMessageSessionConsumer *consumer; // ivar: _consumer


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithMember:(id)arg0 consumer:(id)arg1 ;


@end


#endif