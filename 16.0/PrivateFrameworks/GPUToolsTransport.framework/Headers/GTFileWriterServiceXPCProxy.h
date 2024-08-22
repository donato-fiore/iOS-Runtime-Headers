// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTFILEWRITERSERVICEXPCPROXY_H
#define GTFILEWRITERSERVICEXPCPROXY_H

@class NSSet;
@protocol GTFileWriterService, GTXPCConnection, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface GTFileWriterServiceXPCProxy : NSObject <GTFileWriterService>

 {
    id<GTXPCConnection> *_connection;
    NSSet *_ignoreMethods;
    NSObject<OS_dispatch_semaphore> *_sema;
}




-(BOOL)respondsToSelector:(SEL)arg0 ;
-(id)initWithConnection:(id)arg0 remoteProperties:(id)arg1 ;
-(void)abortSession:(NSUInteger)arg0 ;
-(void)beginTransferSessionWithFileEntries:(id)arg0 basePath:(id)arg1 device:(id)arg2 config:(struct ? )arg3 sessionID:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)finishSession:(NSUInteger)arg0 ;
-(void)initiateTransfer:(id)arg0 basePath:(id)arg1 device:(id)arg2 config:(struct ? )arg3 completionHandler:(id)arg4 ;
-(void)writeFileChunks:(id)arg0 withData:(id)arg1 session:(NSUInteger)arg2 completionHandler:(id)arg3 ;


@end


#endif