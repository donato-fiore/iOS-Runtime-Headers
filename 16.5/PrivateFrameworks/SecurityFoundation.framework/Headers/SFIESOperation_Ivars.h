// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFIESOPERATION_IVARS_H
#define SFIESOPERATION_IVARS_H

@protocol SFDigestOperation;

#import <Foundation/Foundation.h>

#import "_SFECDHOperation.h"
#import "SFSymmetricEncryptionOperation.h"

@interface SFIESOperation_Ivars : NSObject {
    NSInteger curve;
    _SFECDHOperation *diffieHellmanOperation;
    SFSymmetricEncryptionOperation *encryptionOperation;
    id<SFDigestOperation> *digestOperation;
}






@end


#endif