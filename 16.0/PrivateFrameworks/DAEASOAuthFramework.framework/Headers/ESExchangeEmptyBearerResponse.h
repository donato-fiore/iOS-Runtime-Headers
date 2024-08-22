// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESEXCHANGEEMPTYBEARERRESPONSE_H
#define ESEXCHANGEEMPTYBEARERRESPONSE_H

@class NSString, NSError;

#import <Foundation/Foundation.h>


@interface ESExchangeEmptyBearerResponse : NSObject

@property (readonly, nonatomic) NSString *authURI; // ivar: _authURI
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly, nonatomic) NSInteger statusCode; // ivar: _statusCode


-(id)initWithData:(id)arg0 urlResponse:(id)arg1 error:(id)arg2 ;


@end


#endif