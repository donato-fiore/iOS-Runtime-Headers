// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EDINTERACTIONEVENTLOGMULTIPLEXER_H
#define EDINTERACTIONEVENTLOGMULTIPLEXER_H

@class NSArray;
@protocol EDInteractionEventLog;

#import <Foundation/Foundation.h>


@interface EDInteractionEventLogMultiplexer : NSObject <EDInteractionEventLog>



@property (retain, nonatomic) NSArray *logs; // ivar: _logs


-(id)description;
-(id)initWithLogs:(id)arg0 ;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 ;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 account:(id)arg2 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 conversationID:(NSInteger)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailbox:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailboxType:(NSInteger)arg3 ;


@end


#endif