// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASAUTHORIZATIONPROVIDEREXTENSIONAUTHORIZATIONRESULT_H
#define ASAUTHORIZATIONPROVIDEREXTENSIONAUTHORIZATIONRESULT_H

@class SOAuthorizationResult, NSDictionary, NSData, NSHTTPURLResponse, NSArray;

#import <Foundation/Foundation.h>


@interface ASAuthorizationProviderExtensionAuthorizationResult : NSObject

@property (readonly, nonatomic) SOAuthorizationResult *authorizationResult; // ivar: _authorizationResult
@property (retain, nonatomic) NSDictionary *httpAuthorizationHeaders;
@property (retain, nonatomic) NSData *httpBody;
@property (copy, nonatomic) NSHTTPURLResponse *httpResponse;
@property (retain, nonatomic) NSArray *privateKeys;


-(id)init;
-(id)initWithHTTPAuthorizationHeaders:(id)arg0 ;
-(id)initWithHTTPResponse:(id)arg0 httpBody:(id)arg1 ;


@end


#endif