// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SOAUTHORIZATIONPARAMETERS_H
#define SOAUTHORIZATIONPARAMETERS_H

@class SOAuthorizationParametersCore, NSData, NSDictionary, NSString, NSURL;

#import <Foundation/Foundation.h>


@interface SOAuthorizationParameters : NSObject {
    SOAuthorizationParametersCore *_authorizationParametersCore;
}


@property (retain, nonatomic) NSData *auditTokenData;
@property (readonly, nonatomic) SOAuthorizationParametersCore *authorizationParametersCore;
@property (nonatomic, getter=isCFNetworkInterception, setter=setCFNetworkInterception:) BOOL cfNetworkInterception;
@property (retain, nonatomic) NSData *httpBody;
@property (retain, nonatomic) NSDictionary *httpHeaders;
@property (copy, nonatomic) NSString *impersonationBundleIdentifier; // ivar: _impersonationBundleIdentifier
@property (copy, nonatomic) NSString *operation;
@property (nonatomic) NSInteger responseCode;
@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL useInternalExtensions;


-(id)init;


@end


#endif