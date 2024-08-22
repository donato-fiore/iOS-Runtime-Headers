// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONTENTKEYRESPONSEAUTHORIZATIONTOKEN_H
#define AVCONTENTKEYRESPONSEAUTHORIZATIONTOKEN_H

@class NSData;


#import "AVContentKeyResponse.h"

@interface AVContentKeyResponseAuthorizationToken : AVContentKeyResponse {
    NSData *_authorizationTokenData;
}




-(id)initWithAuthorizationTokenData:(id)arg0 ;
-(void)dealloc;


@end


#endif