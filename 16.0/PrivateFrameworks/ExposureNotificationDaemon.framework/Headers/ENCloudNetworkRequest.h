// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ENCLOUDNETWORKREQUEST_H
#define ENCLOUDNETWORKREQUEST_H

@class NSData, NSDictionary, NSUUID, NSURL;

#import <Foundation/Foundation.h>


@interface ENCloudNetworkRequest : NSObject

@property (copy, nonatomic) NSData *body; // ivar: _body
@property (copy, nonatomic) NSDictionary *headers; // ivar: _headers
@property (nonatomic) NSUInteger httpMethod; // ivar: _httpMethod
@property (copy, nonatomic) NSDictionary *parameters; // ivar: _parameters
@property (copy, nonatomic) NSUUID *requestID; // ivar: _requestID
@property (copy, nonatomic) NSURL *url; // ivar: _url


+(id)requestWithURL:(id)arg0 httpMethod:(NSUInteger)arg1 headers:(id)arg2 parameters:(id)arg3 andBody:(id)arg4 ;
-(id)description;


@end


#endif