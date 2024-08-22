// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WFIMGURSESSIONMANAGER_H
#define WFIMGURSESSIONMANAGER_H

@class NSURL, NSString, NSMapTable, NSURLSession;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>

#import "WFOAuth2Credential.h"

@interface WFImgurSessionManager : NSObject <NSURLSessionDataDelegate>



@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy, nonatomic) NSString *clientID; // ivar: _clientID
@property (copy, nonatomic) WFOAuth2Credential *credential; // ivar: _credential
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMapTable *progressTable; // ivar: _progressTable
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)initWithClientID:(id)arg0 ;
-(id)initWithClientID:(id)arg0 configuration:(id)arg1 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)createAlbumWithIDs:(id)arg0 title:(id)arg1 description:(id)arg2 layout:(id)arg3 privacy:(id)arg4 completionHandler:(id)arg5 ;
-(void)getAlbumLinkFromID:(id)arg0 completionHandler:(id)arg1 ;
-(void)sendRequest:(id)arg0 progress:(id)arg1 completionHandler:(id)arg2 ;
-(void)uploadImage:(id)arg0 title:(id)arg1 description:(id)arg2 progress:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif