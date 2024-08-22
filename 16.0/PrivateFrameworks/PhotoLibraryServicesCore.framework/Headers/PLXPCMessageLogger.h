// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLXPCMESSAGELOGGER_H
#define PLXPCMESSAGELOGGER_H

@class NSString;
@protocol NSXPCConnectionDelegate;

#import <Foundation/Foundation.h>


@interface PLXPCMessageLogger : NSObject <NSXPCConnectionDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)enabled;
-(void)connection:(id)arg0 handleInvocation:(id)arg1 isReply:(BOOL)arg2 ;


@end


#endif