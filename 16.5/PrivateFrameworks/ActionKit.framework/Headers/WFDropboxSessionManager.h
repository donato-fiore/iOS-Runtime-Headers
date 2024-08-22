// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFDROPBOXSESSIONMANAGER_H
#define WFDROPBOXSESSIONMANAGER_H

@class NSURL, NSString, NSMapTable, NSURLSession;
@protocol NSURLSessionTaskDelegate;

#import <Foundation/Foundation.h>

#import "WFOAuth2Credential.h"

@interface WFDropboxSessionManager : NSObject <NSURLSessionTaskDelegate>



@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, nonatomic) NSURL *contentBaseURL; // ivar: _contentBaseURL
@property (copy, nonatomic) WFOAuth2Credential *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *progressTable; // ivar: _progressTable
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(id)saveFile:(id)arg0 toPath:(id)arg1 overwrite:(BOOL)arg2 progress:(id)arg3 completionHandler:(id)arg4 ;
-(id)sendContentUploadRequestWithPath:(id)arg0 parameters:(id)arg1 data:(id)arg2 inputStream:(id)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)createFolderAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)deleteItem:(id)arg0 completionHandler:(id)arg1 ;
-(void)downloadFile:(id)arg0 ofType:(id)arg1 proposedFilename:(id)arg2 completionHandler:(id)arg3 ;
-(void)getContentsOfFolderAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)getContentsOfFolderWithParameters:(id)arg0 previous:(id)arg1 completionHandler:(id)arg2 ;
-(void)getExistingSharedLinkForFile:(id)arg0 completionHandler:(id)arg1 ;
-(void)getItemAtPath:(id)arg0 completionHandler:(id)arg1 ;
-(void)getSharedLinkForFile:(id)arg0 completionHandler:(id)arg1 ;
-(void)searchFiles:(id)arg0 inPath:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendContentDownloadRequestWithPath:(id)arg0 ofType:(id)arg1 proposedFilename:(id)arg2 parameters:(id)arg3 progress:(id)arg4 completionHandler:(id)arg5 ;
-(void)sendRPCRequestWithPath:(id)arg0 parameters:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif