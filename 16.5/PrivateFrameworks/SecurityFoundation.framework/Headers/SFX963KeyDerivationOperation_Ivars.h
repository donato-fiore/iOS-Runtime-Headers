// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFX963KEYDERIVATIONOPERATION_IVARS_H
#define SFX963KEYDERIVATIONOPERATION_IVARS_H

@protocol SFKeyDerivingOperation, SFDigestOperation;

#import <Foundation/Foundation.h>


@interface SFX963KeyDerivationOperation_Ivars : NSObject {
    id<SFKeyDerivingOperation> *sharedSecretOperation;
    id<SFDigestOperation> *digestOperation;
}






@end


#endif