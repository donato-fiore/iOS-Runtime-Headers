// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKLICENSEAGREEMENT_H
#define FBKLICENSEAGREEMENT_H


#import <Foundation/Foundation.h>


@interface FBKLicenseAgreement : NSObject



+(BOOL)hasAgreedToCurrentLicenseAgreement;
+(id)currentLicenseAgreement;
+(void)agreeToCurrentLicenseAgreement;


@end


#endif