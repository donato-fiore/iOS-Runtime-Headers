// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFRSASIGNINGOPERATION_IVARS_H
#define SFRSASIGNINGOPERATION_IVARS_H

@protocol SFDigestOperation;

#import <Foundation/Foundation.h>

#import "_SFRSAKeySpecifier.h"

@interface SFRSASigningOperation_Ivars : NSObject {
    _SFRSAKeySpecifier *keySpecifier;
    id<SFDigestOperation> *digestOperation;
}






@end


#endif