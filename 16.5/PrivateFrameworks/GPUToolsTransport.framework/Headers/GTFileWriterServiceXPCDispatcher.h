// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTFILEWRITERSERVICEXPCDISPATCHER_H
#define GTFILEWRITERSERVICEXPCDISPATCHER_H

@protocol GTFileWriterServiceXPCDispatcher, GTFileWriterService;


#import "GTXPCDispatcher.h"

@interface GTFileWriterServiceXPCDispatcher : GTXPCDispatcher <GTFileWriterServiceXPCDispatcher>

 {
    id<GTFileWriterService> *_service;
}




-(id)initWithService:(id)arg0 properties:(id)arg1 ;
-(void)abortSession_:(id)arg0 replyConnection:(id)arg1 ;
-(void)beginTransferSessionWithFileEntries_basePath_device_config_sessionID_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)finishSession_:(id)arg0 replyConnection:(id)arg1 ;
-(void)initiateTransfer_basePath_device_config_completionHandler_:(id)arg0 replyConnection:(id)arg1 ;
-(void)writeFileChunks_withData_session_:(id)arg0 replyConnection:(id)arg1 ;


@end


#endif