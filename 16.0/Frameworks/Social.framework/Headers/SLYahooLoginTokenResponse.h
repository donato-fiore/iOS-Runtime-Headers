// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SLYAHOOLOGINTOKENRESPONSE_H
#define SLYAHOOLOGINTOKENRESPONSE_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface SLYahooLoginTokenResponse : NSObject

@property (readonly) NSString *body; // ivar: _body
@property (readonly) NSError *error; // ivar: _error
@property (readonly) NSString *loginToken; // ivar: _loginToken
@property (readonly) NSInteger statusCode; // ivar: _statusCode


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif