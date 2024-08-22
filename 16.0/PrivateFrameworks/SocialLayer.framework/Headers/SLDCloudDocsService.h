// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLDCLOUDDOCSSERVICE_H
#define SLDCLOUDDOCSSERVICE_H

@class NSString;
@protocol SLDService, SLDCloudDocsServiceProtocol;


#import "SLDRemoteRenderingService.h"

@interface SLDCloudDocsService : SLDRemoteRenderingService <SLDService, SLDCloudDocsServiceProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)_connection:(id)arg0 hasPermissionForFileURL:(id)arg1 ;
-(NSUInteger)_acquireSandboxHandleData:(id)arg0 ForFileProviderDocumentURL:(id)arg1 clientConnection:(id)arg2 error:(*id)arg3 ;
-(void)_releaseSandboxHandle:(NSUInteger)arg0 ;
-(void)prepareConnectionWithReply:(id)arg0 ;
-(void)shareURLForFileURL:(id)arg0 sandboxTokenData:(id)arg1 reply:(id)arg2 ;


@end


#endif