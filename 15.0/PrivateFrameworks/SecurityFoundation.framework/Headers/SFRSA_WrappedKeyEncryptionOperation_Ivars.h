// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSA_WRAPPEDKEYENCRYPTIONOPERATION_IVARS_H
#define SFRSA_WRAPPEDKEYENCRYPTIONOPERATION_IVARS_H


#import <Foundation/Foundation.h>

#import "SFRSAEncryptionOperation.h"
#import "SFSymmetricEncryptionOperation.h"

@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject {
    SFRSAEncryptionOperation *keyWrappingOperation;
    SFSymmetricEncryptionOperation *sessionEncryptionOperation;
}






@end


#endif