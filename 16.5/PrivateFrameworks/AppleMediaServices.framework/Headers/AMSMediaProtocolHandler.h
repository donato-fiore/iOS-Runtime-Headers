// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSMEDIAPROTOCOLHANDLER_H
#define AMSMEDIAPROTOCOLHANDLER_H

@protocol AMSMediaTokenServiceProtocol;


#import "AMSURLProtocolHandler.h"

@interface AMSMediaProtocolHandler : AMSURLProtocolHandler

@property (readonly, nonatomic) NSObject<AMSMediaTokenServiceProtocol> *tokenService; // ivar: _tokenService


-(id)initWithTokenService:(id)arg0 ;
-(void)handleResponse:(id)arg0 task:(id)arg1 completionHandler:(id)arg2 ;
-(void)reconfigureNewRequest:(id)arg0 originalTask:(id)arg1 redirect:(BOOL)arg2 error:(*id)arg3 ;


@end


#endif