// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SFIDENTITYATTRIBUTES_IVARS_H
#define SFIDENTITYATTRIBUTES_IVARS_H

@class NSString;

#import <Foundation/Foundation.h>

#import "_SFKeySpecifier.h"

@interface SFIdentityAttributes_Ivars : NSObject {
    NSString *localizedLabel;
    NSString *localizedDescription;
    _SFKeySpecifier *keySpecifier;
    NSString *identityName;
    NSString *privateKeyDomain;
    BOOL hasCertificate;
}






@end


#endif