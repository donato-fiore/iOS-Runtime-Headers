// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef __NSCFURLPROTOCOLCLIENT_NS_H
#define __NSCFURLPROTOCOLCLIENT_NS_H

@class NSString;
@protocol NSURLProtocolClient;

#import <Foundation/Foundation.h>

#import "NSURLAuthenticationChallenge.h"

@interface __NSCFURLProtocolClient_NS : NSObject <NSURLProtocolClient>

 {
    *URLProtocolClient _cf;
    *void _prot;
    NSURLAuthenticationChallenge *_challenge;
    *_CFURLAuthChallenge _cfChallenge;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)URLProtocol:(id)arg0 cachedResponseIsValid:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didCancelAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didFailWithError:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didLoadData:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didReceiveResponse:(id)arg1 cacheStoragePolicy:(NSUInteger)arg2 ;
-(void)URLProtocol:(id)arg0 wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)URLProtocolDidFinishLoading:(id)arg0 ;
-(void)dealloc;


@end


#endif