// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFSLACKSESSIONMANAGER_H
#define WFSLACKSESSIONMANAGER_H

@class NSURL, NSString, NSMapTable, NSURLSession;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface WFSlackSessionManager : NSObject <NSURLSessionDataDelegate>



@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMapTable *progressTable; // ivar: _progressTable
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *token; // ivar: _token


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didSendBodyData:(NSInteger)arg2 totalBytesSent:(NSInteger)arg3 totalBytesExpectedToSend:(NSInteger)arg4 ;
-(void)listChannels:(id)arg0 ;
-(void)listGroups:(id)arg0 ;
-(void)listIMs:(id)arg0 ;
-(void)listUsers:(id)arg0 ;
-(void)sendMessage:(id)arg0 toChannel:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendRequest:(id)arg0 progress:(id)arg1 completionHandler:(id)arg2 ;
-(void)testAuthentication:(id)arg0 ;
-(void)uploadFile:(id)arg0 progress:(id)arg1 toChannel:(id)arg2 completionHandler:(id)arg3 ;


@end


#endif