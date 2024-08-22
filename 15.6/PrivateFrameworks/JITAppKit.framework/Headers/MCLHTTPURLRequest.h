// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MCLHTTPURLREQUEST_H
#define MCLHTTPURLREQUEST_H

@class NSData, NSError, NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>

#import "MCLURLDataLoaderTask.h"

@interface MCLHTTPURLRequest : NSObject {
    MCLURLDataLoaderTask *_task;
}


@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSError *error; // ivar: _error
@property (copy, nonatomic) NSDictionary *httpHeaders; // ivar: _httpHeaders
@property (copy, nonatomic) NSString *httpMethod; // ivar: _httpMethod
@property (nonatomic) NSUInteger statusCode; // ivar: _statusCode
@property (nonatomic) CGFloat timeout; // ivar: _timeout
@property (copy, nonatomic) NSURL *url; // ivar: _url


-(id)init;
-(void)cancel;
-(void)handleCompletion:(id)arg0 ;
-(void)loadRequest:(id)arg0 ;
-(void)send;
-(void)sendData:(id)arg0 ;
-(void)sendText:(id)arg0 ;


@end


#endif