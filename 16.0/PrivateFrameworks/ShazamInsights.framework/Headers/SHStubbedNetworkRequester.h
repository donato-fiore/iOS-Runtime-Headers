// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHSTUBBEDNETWORKREQUESTER_H
#define SHSTUBBEDNETWORKREQUESTER_H

@class NSString, NSURL, NSHTTPURLResponse, NSData;
@protocol SHNetworkRequester;

#import <Foundation/Foundation.h>


@interface SHStubbedNetworkRequester : NSObject <SHNetworkRequester>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSURL *downloadFileURL; // ivar: _downloadFileURL
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (readonly, nonatomic) NSData *requestData; // ivar: _requestData
@property (readonly) Class superclass;


-(id)initWithHTTPResponse:(id)arg0 requestData:(id)arg1 downloadFileURL:(id)arg2 ;
-(void)downloadResourceFromRequest:(id)arg0 completionHandler:(id)arg1 ;
-(void)performRequest:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif