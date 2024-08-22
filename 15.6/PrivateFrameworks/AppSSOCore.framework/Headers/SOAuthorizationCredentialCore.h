// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SOAUTHORIZATIONCREDENTIALCORE_H
#define SOAUTHORIZATIONCREDENTIALCORE_H

@class NSDictionary, NSData, NSHTTPURLResponse, NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SOAuthorizationCredentialCore : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders; // ivar: _httpAuthorizationHeaders
@property (retain, nonatomic) NSData *httpBody; // ivar: _httpBody
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse; // ivar: _httpResponse
@property (retain, nonatomic) NSArray *secKeyProxyEndpoints; // ivar: _secKeyProxyEndpoints


+(BOOL)supportsSecureCoding;
-(id)initWithAuthorizationCredential:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif