// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCRESOURCEDOWNLOADER_H
#define MCRESOURCEDOWNLOADER_H

@class NSString, NSURLSession, NSURLSessionDataTask;
@protocol NSURLSessionDelegate, NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>

#import "MCPeerID.h"
#import "MCSession.h"

@interface MCResourceDownloader : NSObject <NSURLSessionDelegate, NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MCPeerID *peerID; // ivar: _peerID
@property (copy, nonatomic) NSString *resourceName; // ivar: _resourceName
@property (nonatomic) MCSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (nonatomic) id *urlResponseHandler; // ivar: _urlResponseHandler
@property (retain, nonatomic) NSURLSession *urlSession; // ivar: _urlSession
@property (retain, nonatomic) NSURLSessionDataTask *urlTask; // ivar: _urlTask


-(id)initWithSession:(id)arg0 resourceUrl:(id)arg1 name:(id)arg2 peerID:(id)arg3 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveData:(id)arg2 ;
-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didCompleteWithError:(id)arg2 ;
-(void)dealloc;
-(void)sendData:(id)arg0 fromByteOffset:(NSUInteger)arg1 ;
-(void)syncCloseStreamForSession:(id)arg0 withError:(id)arg1 ;


@end


#endif