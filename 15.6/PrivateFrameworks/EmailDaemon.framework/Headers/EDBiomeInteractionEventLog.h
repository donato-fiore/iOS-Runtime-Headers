// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDBIOMEINTERACTIONEVENTLOG_H
#define EDBIOMEINTERACTIONEVENTLOG_H

@class BMStoreStream, BMSource, NSString;
@protocol EFLoggable, EDInteractionEventLog, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface EDBiomeInteractionEventLog : NSObject <EFLoggable, EDInteractionEventLog>

 {
    NSObject<OS_dispatch_queue> *_queue;
    BMStoreStream *_stream;
    BMSource *_source;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)log;
+(id)payloadFromData:(id)arg0 message:(id)arg1 ;
-(id)init;
-(void)donateToBiomeWithEvent:(id)arg0 ;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 ;
-(void)persistEvent:(id)arg0 dataFromMessage:(id)arg1 account:(id)arg2 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 conversationID:(NSInteger)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 data:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailbox:(id)arg3 ;
-(void)persistEvent:(id)arg0 date:(id)arg1 message:(id)arg2 mailboxType:(NSInteger)arg3 ;


@end


#endif