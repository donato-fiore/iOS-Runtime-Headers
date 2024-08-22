// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CPDISTRIBUTEDMESSAGINGDELAYEDREPLYCONTEXT_H
#define CPDISTRIBUTEDMESSAGINGDELAYEDREPLYCONTEXT_H


#import <Foundation/Foundation.h>


@interface CPDistributedMessagingDelayedReplyContext : NSObject

@property (nonatomic) BOOL portPassing; // ivar: _portPassing
@property (nonatomic) unsigned int replyPort; // ivar: _replyPort


-(id)initWithReplyPort:(unsigned int)arg0 portPassing:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif