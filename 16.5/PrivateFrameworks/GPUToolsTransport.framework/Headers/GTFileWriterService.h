// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GTFILEWRITERSERVICE_H
#define GTFILEWRITERSERVICE_H

@class NSURL, NSMutableDictionary, NSUUID;
@protocol GTFileWriterService, OS_os_log, GTRemoteConnectionProvider, OS_dispatch_queue, GTURLAccessProvider;

#import <Foundation/Foundation.h>


@interface GTFileWriterService : NSObject <GTFileWriterService>

 {
    NSObject<OS_os_log> *_log;
    NSURL *_baseURL;
    NSMutableDictionary *_sessions;
    id<GTRemoteConnectionProvider> *_remoteConnectionProvider;
    NSUInteger _sessionCounts;
    NSUUID *_deviceUUID;
    NSObject<OS_dispatch_queue> *_fileTransferQueue;
    id<GTURLAccessProvider> *_urlAccessProvider;
}




-(id)initWithRemoteConnectionProvider:(id)arg0 deviceUUID:(id)arg1 urlAccessProvider:(id)arg2 ;
-(void)abortSession:(NSUInteger)arg0 ;
-(void)beginTransferSessionWithFileEntries:(id)arg0 basePath:(id)arg1 device:(id)arg2 config:(struct ? )arg3 sessionID:(NSUInteger)arg4 completionHandler:(id)arg5 ;
-(void)finishSession:(NSUInteger)arg0 ;
-(void)initiateTransfer:(id)arg0 basePath:(id)arg1 device:(id)arg2 config:(struct ? )arg3 completionHandler:(id)arg4 ;
-(void)writeFileChunks:(id)arg0 withData:(id)arg1 session:(NSUInteger)arg2 ;


@end


#endif