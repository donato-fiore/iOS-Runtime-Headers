// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKHTTPHEADERS_H
#define MKHTTPHEADERS_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>

#import "MKHTTPContentDisposition.h"
#import "MKHTTPContentPayload.h"
#import "MKHTTPContentRange.h"
#import "MKHTTPProxyAuthorization.h"

@interface MKHTTPHeaders : NSObject

@property (copy, nonatomic) NSString *accept; // ivar: _accept
@property (copy, nonatomic) NSString *authorization; // ivar: _authorization
@property (copy, nonatomic) NSString *boundary; // ivar: _boundary
@property (copy, nonatomic) NSString *connection; // ivar: _connection
@property (retain, nonatomic) MKHTTPContentDisposition *contentDisposition; // ivar: _contentDisposition
@property (nonatomic) unsigned int contentLength; // ivar: _contentLength
@property (retain, nonatomic) MKHTTPContentPayload *contentPayload; // ivar: _contentPayload
@property (retain, nonatomic) MKHTTPContentRange *contentRange; // ivar: _contentRange
@property (copy, nonatomic) NSString *contentType; // ivar: _contentType
@property (copy, nonatomic) NSString *host; // ivar: _host
@property (nonatomic) BOOL isClosed; // ivar: _isClosed
@property (copy, nonatomic) NSString *method; // ivar: _method
@property (copy, nonatomic) NSString *path; // ivar: _path
@property (retain, nonatomic) MKHTTPProxyAuthorization *proxyAuthorization; // ivar: _proxyAuthorization
@property (copy, nonatomic) NSDictionary *query; // ivar: _query
@property (nonatomic) NSUInteger statusCode; // ivar: _statusCode
@property (copy, nonatomic) NSString *statusText; // ivar: _statusText
@property (nonatomic) NSUInteger transferEncoding; // ivar: _transferEncoding
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent
@property (copy, nonatomic) NSString *version; // ivar: _version


-(id)init;
-(id)initWithArray:(id)arg0 ;
-(id)initWithMultipartHeaderArray:(id)arg0 ;
-(id)pairsFromArray:(id)arg0 byKey:(id)arg1 atIndex:(NSInteger)arg2 ;
-(id)responseHeadersData;
-(void)close:(BOOL)arg0 ;


@end


#endif