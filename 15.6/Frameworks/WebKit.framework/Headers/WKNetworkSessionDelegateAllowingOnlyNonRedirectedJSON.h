// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WKNETWORKSESSIONDELEGATEALLOWINGONLYNONREDIRECTEDJSON_H
#define WKNETWORKSESSIONDELEGATEALLOWINGONLYNONREDIRECTEDJSON_H

@class NSString;
@protocol NSURLSessionDataDelegate;

#import <Foundation/Foundation.h>


@interface WKNetworkSessionDelegateAllowingOnlyNonRedirectedJSON : NSObject <NSURLSessionDataDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)URLSession:(id)arg0 dataTask:(id)arg1 didReceiveResponse:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(id)arg3 ;
-(void)URLSession:(id)arg0 task:(id)arg1 willPerformHTTPRedirection:(id)arg2 newRequest:(id)arg3 completionHandler:(id)arg4 ;


@end


#endif