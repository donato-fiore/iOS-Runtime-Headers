// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFEC_X962SIGNINGOPERATION_IVARS_H
#define SFEC_X962SIGNINGOPERATION_IVARS_H

@protocol SFDigestOperationInternal;

#import <Foundation/Foundation.h>

#import "_SFECKeySpecifier.h"

@interface SFEC_X962SigningOperation_Ivars : NSObject {
    _SFECKeySpecifier *keySpecifier;
    id<SFDigestOperationInternal> *digestOperation;
}






@end


#endif