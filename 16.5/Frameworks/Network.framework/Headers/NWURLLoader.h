// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NWURLLOADER_H
#define NWURLLOADER_H

@class NSURLRequest, NSURLCache, NSURLProtocol, NSURLResponse, NSError, NSString;
@protocol NWURLLoader, NSURLProtocolClient, NWURLLoaderClient, OS_dispatch_queue, OS_dispatch_data, OS_nw_connection;

#import <Foundation/Foundation.h>

#import "NWURLSessionTaskConfiguration.h"
#import "NWURLSessionReadRequest.h"

@interface NWURLLoader : NSObject <NWURLLoader, NSURLProtocolClient>

 {
    BOOL _complete;
    NSURLRequest *_request;
    NWURLSessionTaskConfiguration *_configuration;
    id<NWURLLoaderClient> *_client;
    NSObject<OS_dispatch_queue> *_queue;
    Class _protocolClass;
    NSURLCache *_cache;
    NSURLProtocol *_protocol;
    NSUInteger _cacheStoragePolicy;
    NSObject<OS_dispatch_data> *_dataToCache;
    NSUInteger _maxItemSizeToCache;
    id *_awaitingResponse;
    NSURLResponse *_response;
    NWURLSessionReadRequest *_readRequest;
    NSError *_error;
}


@property (readonly, nonatomic) BOOL allowsWrite;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_nw_connection> *underlyingConnection;


-(void)URLProtocol:(id)arg0 cachedResponseIsValid:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didCancelAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didFailWithError:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didLoadData:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didReceiveAuthenticationChallenge:(id)arg1 ;
-(void)URLProtocol:(id)arg0 didReceiveResponse:(id)arg1 cacheStoragePolicy:(NSUInteger)arg2 ;
-(void)URLProtocol:(id)arg0 wasRedirectedToRequest:(id)arg1 redirectResponse:(id)arg2 ;
-(void)URLProtocolDidFinishLoading:(id)arg0 ;
-(void)readDataOfMinimumIncompleteLength:(NSUInteger)arg0 maximumLength:(NSUInteger)arg1 completionHandler:(id)arg2 ;
-(void)readResponse:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)updateClient:(id)arg0 ;
-(void)writeData:(id)arg0 complete:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif