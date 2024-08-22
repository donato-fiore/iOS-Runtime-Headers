// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLDCLOUDDOCSSERVICE_H
#define SLDCLOUDDOCSSERVICE_H

@class NSString, NSArray, NSCache;
@protocol SLDService, SLDCloudDocsServiceProtocol, SLHighlightCenterDelegate, OS_dispatch_queue;


#import "SLDRemoteRenderingService.h"
#import "SLHighlightCenter.h"

@interface SLDCloudDocsService : SLDRemoteRenderingService <SLDService, SLDCloudDocsServiceProtocol, SLHighlightCenterDelegate>



@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *cloudDocsAccessQueue; // ivar: _cloudDocsAccessQueue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SLHighlightCenter *highlightCenter; // ivar: _highlightCenter
@property (retain, nonatomic) NSArray *highlights; // ivar: _highlights
@property (readonly) Class superclass;
@property (retain, nonatomic) NSCache *urlToCollaborationHighlightCache; // ivar: _urlToCollaborationHighlightCache


+(id)remoteObjectProtocol;
+(id)sharedService;
-(BOOL)_connection:(id)arg0 hasPermissionForFileURL:(id)arg1 ;
-(BOOL)_fileURLHasFileProvider:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)_acquireSandboxHandleData:(id)arg0 ForFileProviderDocumentURL:(id)arg1 clientConnection:(id)arg2 error:(*id)arg3 ;
-(id)init;
-(void)_releaseSandboxHandle:(NSUInteger)arg0 ;
-(void)fetchHighlights;
-(void)generateURLToCollaborationHighlightCache;
-(void)getCollaborationHighlightForShareURL:(id)arg0 fileURL:(id)arg1 sandboxTokenData:(id)arg2 reply:(id)arg3 ;
-(void)highlightCenter:(id)arg0 didRemoveHighlights:(id)arg1 ;
-(void)highlightCenterDidAddHighlights:(id)arg0 ;
-(void)prepareConnectionWithReply:(id)arg0 ;
-(void)shareURLForFileURL:(id)arg0 sandboxTokenData:(id)arg1 reply:(id)arg2 ;


@end


#endif