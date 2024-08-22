// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TMAPICLIENT_H
#define TMAPICLIENT_H

@class NSString, NSURL, NSDictionary, NSOperationQueue;

#import <Foundation/Foundation.h>

#import "JXHTTPOperationQueue.h"

@interface TMAPIClient : NSObject

@property (copy, nonatomic) NSString *OAuthConsumerKey;
@property (copy, nonatomic) NSString *OAuthConsumerSecret;
@property (copy, nonatomic) NSString *OAuthToken; // ivar: _OAuthToken
@property (copy, nonatomic) NSString *OAuthTokenSecret; // ivar: _OAuthTokenSecret
@property (retain, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSDictionary *customHeaders; // ivar: _customHeaders
@property (retain, nonatomic) NSOperationQueue *defaultCallbackQueue; // ivar: _defaultCallbackQueue
@property (retain, nonatomic) JXHTTPOperationQueue *queue; // ivar: _queue
@property (nonatomic) CGFloat timeoutInterval; // ivar: _timeoutInterval


+(id)sharedInstance;
-(BOOL)handleOpenURL:(id)arg0 ;
-(id)URLWithPath:(id)arg0 ;
-(id)audioRequest:(id)arg0 filePath:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 parameters:(id)arg4 ;
-(id)blogInfoRequest:(id)arg0 ;
-(id)chatRequest:(id)arg0 parameters:(id)arg1 ;
-(id)dashboardRequest:(id)arg0 ;
-(id)deletePostRequest:(id)arg0 id:(id)arg1 ;
-(id)draftsRequest:(id)arg0 parameters:(id)arg1 ;
-(id)editPostRequest:(id)arg0 parameters:(id)arg1 ;
-(id)followRequest:(id)arg0 ;
-(id)followersRequest:(id)arg0 parameters:(id)arg1 ;
-(id)followingRequest:(id)arg0 ;
-(id)getRequestWithPath:(id)arg0 parameters:(id)arg1 ;
-(id)init;
-(id)likeRequest:(id)arg0 reblogKey:(id)arg1 ;
-(id)likesRequest:(id)arg0 ;
-(id)likesRequest:(id)arg0 parameters:(id)arg1 ;
-(id)linkRequest:(id)arg0 parameters:(id)arg1 ;
-(id)multipartBodyForParameters:(id)arg0 filePathArray:(id)arg1 contentTypeArray:(id)arg2 fileNameArray:(id)arg3 ;
-(id)multipartPostRequest:(id)arg0 type:(id)arg1 parameters:(id)arg2 filePathArray:(id)arg3 contentTypeArray:(id)arg4 fileNameArray:(id)arg5 ;
-(id)photoRequest:(id)arg0 filePathArray:(id)arg1 contentTypeArray:(id)arg2 fileNameArray:(id)arg3 parameters:(id)arg4 ;
-(id)postRequest:(id)arg0 type:(id)arg1 parameters:(id)arg2 ;
-(id)postRequestWithPath:(id)arg0 parameters:(id)arg1 ;
-(id)postsRequest:(id)arg0 type:(id)arg1 parameters:(id)arg2 ;
-(id)queueRequest:(id)arg0 parameters:(id)arg1 ;
-(id)quoteRequest:(id)arg0 parameters:(id)arg1 ;
-(id)reblogPostRequest:(id)arg0 parameters:(id)arg1 ;
-(id)submissionsRequest:(id)arg0 parameters:(id)arg1 ;
-(id)taggedRequest:(id)arg0 parameters:(id)arg1 ;
-(id)textRequest:(id)arg0 parameters:(id)arg1 ;
-(id)unfollowRequest:(id)arg0 ;
-(id)unlikeRequest:(id)arg0 reblogKey:(id)arg1 ;
-(id)userInfoRequest;
-(id)videoRequest:(id)arg0 filePath:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 parameters:(id)arg4 ;
-(void)audio:(id)arg0 filePath:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 parameters:(id)arg4 callback:(id)arg5 ;
// -(void)authenticate:(id)arg0 urlBlock:(id)arg1 callback:(unk)arg2  ;
-(void)avatar:(id)arg0 size:(NSUInteger)arg1 callback:(id)arg2 ;
-(void)avatar:(id)arg0 size:(NSUInteger)arg1 queue:(id)arg2 callback:(id)arg3 ;
-(void)blogInfo:(id)arg0 callback:(id)arg1 ;
-(void)chat:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)dashboard:(id)arg0 callback:(id)arg1 ;
-(void)deletePost:(id)arg0 id:(id)arg1 callback:(id)arg2 ;
-(void)drafts:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)editPost:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)follow:(id)arg0 callback:(id)arg1 ;
-(void)followers:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)following:(id)arg0 callback:(id)arg1 ;
-(void)like:(id)arg0 reblogKey:(id)arg1 callback:(id)arg2 ;
-(void)likes:(id)arg0 callback:(id)arg1 ;
-(void)likes:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)link:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)photo:(id)arg0 filePathArray:(id)arg1 contentTypeArray:(id)arg2 fileNameArray:(id)arg3 parameters:(id)arg4 callback:(id)arg5 ;
-(void)post:(id)arg0 type:(id)arg1 parameters:(id)arg2 callback:(id)arg3 ;
-(void)posts:(id)arg0 type:(id)arg1 parameters:(id)arg2 callback:(id)arg3 ;
-(void)queue:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)quote:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)reblogPost:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)sendRequest:(id)arg0 callback:(id)arg1 ;
-(void)sendRequest:(id)arg0 queue:(id)arg1 callback:(id)arg2 ;
-(void)signRequest:(id)arg0 withParameters:(id)arg1 ;
-(void)submissions:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)tagged:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)text:(id)arg0 parameters:(id)arg1 callback:(id)arg2 ;
-(void)unfollow:(id)arg0 callback:(id)arg1 ;
-(void)unlike:(id)arg0 reblogKey:(id)arg1 callback:(id)arg2 ;
-(void)userInfo:(id)arg0 ;
-(void)video:(id)arg0 filePath:(id)arg1 contentType:(id)arg2 fileName:(id)arg3 parameters:(id)arg4 callback:(id)arg5 ;
-(void)xAuth:(id)arg0 password:(id)arg1 callback:(id)arg2 ;


@end


#endif