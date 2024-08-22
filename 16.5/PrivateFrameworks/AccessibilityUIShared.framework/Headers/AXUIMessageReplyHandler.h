// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXUIMESSAGEREPLYHANDLER_H
#define AXUIMESSAGEREPLYHANDLER_H


#import <Foundation/Foundation.h>


@interface AXUIMessageReplyHandler : NSObject



+(id)createReplyObject:(id)arg0 fromMessage:(id)arg1 withError:(id)arg2 ;
+(void)sendReply:(id)arg0 withError:(id)arg1 andOriginalXPCMessage:(id)arg2 usingConnection:(id)arg3 customDataAddingBlock:(id)arg4 ;


@end


#endif