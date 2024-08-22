// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BADOWNLOADEREXTENSIONCONNECTION_H
#define BADOWNLOADEREXTENSIONCONNECTION_H

@class NSExtensionContext, NSString;
@protocol BADownloaderExtension, _EXMainConnectionHandler, OS_dispatch_queue;



@interface BADownloaderExtensionConnection : NSExtensionContext <BADownloaderExtension, _EXMainConnectionHandler>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSObject<OS_dispatch_queue> *extensionWorkQueue; // ivar: _extensionWorkQueue
@property (readonly) NSUInteger hash;
@property (retain) NSObject<BADownloaderExtension> *principalObject; // ivar: _principalObject
@property (readonly) Class superclass;


-(BOOL)shouldAcceptXPCConnection:(id)arg0 ;
-(id)initWithPrincipalObject:(id)arg0 ;
-(void)applicationDidInstallWithMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)applicationDidUpdateWithMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)backgroundDownloadDidFail:(id)arg0 completionHandler:(id)arg1 ;
-(void)backgroundDownloadDidFinish:(id)arg0 stagedClientURL:(id)arg1 sandboxToken:(id)arg2 completionHandler:(id)arg3 ;
-(void)checkForUpdatesWithMetadata:(id)arg0 completionHandler:(id)arg1 ;
-(void)extensionWillTerminate;
-(void)receivedAuthenticationChallenge:(id)arg0 download:(id)arg1 completionHandler:(id)arg2 ;
-(void)wakeupForTokenWithReply:(id)arg0 ;


@end


#endif