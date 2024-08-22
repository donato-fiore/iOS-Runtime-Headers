// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSDELEGATEAUTHENTICATERESULT_H
#define AMSDELEGATEAUTHENTICATERESULT_H

@class NSDictionary, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "AMSDelegateAuthenticateRequest.h"

@interface AMSDelegateAuthenticateResult : NSObject <NSSecureCoding>



@property (readonly, nonatomic) AMSDelegateAuthenticateRequest *request; // ivar: _request
@property (readonly, nonatomic) NSDictionary *serverResponse; // ivar: _serverResponse
@property (readonly, nonatomic) NSString *token;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithServerResponse:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif