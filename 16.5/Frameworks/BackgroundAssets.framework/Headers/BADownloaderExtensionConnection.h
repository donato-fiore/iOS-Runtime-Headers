// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BADOWNLOADEREXTENSIONCONNECTION_H
#define BADOWNLOADEREXTENSIONCONNECTION_H

@class NSExtensionContext, NSXPCConnection, NSString;
@protocol BADownloaderExtensionSyncProtocol, _EXMainConnectionHandler, _EXConnectionHandler, OS_dispatch_queue, BADownloaderExtension;



@interface BADownloaderExtensionConnection : NSExtensionContext <BADownloaderExtensionSyncProtocol, _EXMainConnectionHandler, _EXConnectionHandler>

 {
    NSObject<OS_dispatch_queue> *_extensionWorkQueue;
    NSXPCConnection *_daemonConnection;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) NSObject<BADownloaderExtension> *principalObject; // ivar: _principalObject
@property (readonly) Class superclass;


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;
-(void)backgroundDownload:(id)arg0 failedWithError:(id)arg1 completionHandler:(id)arg2 ;
-(void)backgroundDownload:(id)arg0 finishedWithSandboxToken:(id)arg1 completionHandler:(id)arg2 ;
-(void)downloadsForRequest:(NSInteger)arg0 manifestURL:(id)arg1 manifestToken:(id)arg2 extensionInfo:(id)arg3 completionHandler:(id)arg4 ;
-(void)extensionWillTerminate;
-(void)receivedAuthenticationChallenge:(id)arg0 download:(id)arg1 completionHandler:(id)arg2 ;
-(void)wakeupForTokenWithReply:(id)arg0 ;


@end


#endif