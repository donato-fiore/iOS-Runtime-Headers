// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SOAUTHORIZATIONPARAMETERSCORE_H
#define SOAUTHORIZATIONPARAMETERSCORE_H

@class NSData, NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface SOAuthorizationParametersCore : NSObject

@property (retain, nonatomic) NSData *auditTokenData; // ivar: _auditTokenData
@property (nonatomic, getter=isCFNetworkInterception) BOOL cfNetworkInterception; // ivar: _cfNetworkInterception
@property (retain, nonatomic) NSData *httpBody; // ivar: _httpBody
@property (retain, nonatomic) NSDictionary *httpHeaders; // ivar: _httpHeaders
@property (copy, nonatomic) NSString *impersonationBundleIdentifier; // ivar: _impersonationBundleIdentifier
@property (copy, nonatomic) NSString *operation; // ivar: _operation
@property (nonatomic) NSInteger responseCode; // ivar: _responseCode
@property (retain, nonatomic) NSURL *url; // ivar: _url
@property (nonatomic) BOOL useInternalExtensions; // ivar: _useInternalExtensions


-(id)init;


@end


#endif