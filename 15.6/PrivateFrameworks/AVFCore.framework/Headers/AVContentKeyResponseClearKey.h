// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCONTENTKEYRESPONSECLEARKEY_H
#define AVCONTENTKEYRESPONSECLEARKEY_H

@class NSData;


#import "AVContentKeyResponse.h"

@interface AVContentKeyResponseClearKey : AVContentKeyResponse {
    NSData *_keyData;
    NSData *_initializationVector;
}




-(id)initWithKeyData:(id)arg0 initializationVector:(id)arg1 ;
-(void)dealloc;


@end


#endif