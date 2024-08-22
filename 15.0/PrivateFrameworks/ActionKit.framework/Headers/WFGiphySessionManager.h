// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFGIPHYSESSIONMANAGER_H
#define WFGIPHYSESSIONMANAGER_H

@class NSString, NSURL, NSURLSession;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface WFGiphySessionManager : NSObject <NSURLSessionDataDelegate>



@property (copy, nonatomic) NSString *apiKey; // ivar: _apiKey
@property (readonly, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSURLSession *session; // ivar: _session
@property (readonly) Class superclass;


-(id)init;
-(id)initWithSessionConfiguration:(id)arg0 ;
-(void)random:(id)arg0 ;
-(void)search:(id)arg0 limit:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)sendRequestWithPath:(id)arg0 parameters:(id)arg1 completion:(id)arg2 ;
-(void)trendingWithLimit:(NSUInteger)arg0 completion:(id)arg1 ;


@end


#endif