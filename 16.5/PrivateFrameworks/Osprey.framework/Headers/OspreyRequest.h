// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OSPREYREQUEST_H
#define OSPREYREQUEST_H

@class NSString, NSData, NSNumber, NSDictionary;

#import <Foundation/Foundation.h>


@interface OspreyRequest : NSObject

@property (nonatomic) BOOL allowsCellularAccess; // ivar: _allowsCellularAccess
@property (copy, nonatomic) NSString *clientTraceId; // ivar: _clientTraceId
@property (retain, nonatomic) NSData *data; // ivar: _data
@property (retain, nonatomic) NSNumber *deviceAuthenticationVersion; // ivar: _deviceAuthenticationVersion
@property (nonatomic) BOOL enableDeviceAuthentication; // ivar: _enableDeviceAuthentication
@property (nonatomic) BOOL forceHTTPv2; // ivar: _forceHTTPv2
@property (retain, nonatomic) NSDictionary *headers; // ivar: _headers
@property (readonly, nonatomic) NSString *methodName; // ivar: _methodName
@property (nonatomic) BOOL requireAbsintheAuthentication;
@property (retain, nonatomic) NSData *signedDeviceAuthenticationData; // ivar: _signedDeviceAuthenticationData
@property (nonatomic) BOOL useCompression; // ivar: _useCompression
@property (readonly, nonatomic) NSString *userAgent; // ivar: _userAgent


+(id)requestWithMethodName:(id)arg0 ;
-(id)grpcRequestWithBaseURL:(id)arg0 ;
-(id)initWithMethodName:(id)arg0 ;


@end


#endif