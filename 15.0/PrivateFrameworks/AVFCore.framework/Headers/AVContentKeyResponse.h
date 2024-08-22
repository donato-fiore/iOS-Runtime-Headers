// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCONTENTKEYRESPONSE_H
#define AVCONTENTKEYRESPONSE_H


#import <Foundation/Foundation.h>

#import "AVContentKeyResponseInternal.h"

@interface AVContentKeyResponse : NSObject {
    AVContentKeyResponseInternal *_keyResponse;
}




+(id)contentKeyResponseWithAuthorizationTokenData:(id)arg0 ;
+(id)contentKeyResponseWithClearKeyData:(id)arg0 initializationVector:(id)arg1 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg0 ;
+(id)contentKeyResponseWithFairPlayStreamingKeyResponseData:(id)arg0 renewalDate:(id)arg1 ;
-(id)initWithKeySystem:(id)arg0 ;
-(id)keySystem;
-(void)dealloc;


@end


#endif