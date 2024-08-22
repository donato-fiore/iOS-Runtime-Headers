// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BYLICENSEAGREEMENT_H
#define BYLICENSEAGREEMENT_H


#import <Foundation/Foundation.h>


@interface BYLicenseAgreement : NSObject



+(BOOL)needsToAcceptNewAgreement;
+(NSUInteger)versionOfAcceptedAgreement;
+(NSUInteger)versionOfOnDiskAgreement;
+(void)_clearAcceptedLicenseVersion;
+(void)recordUserAcceptedAgreementVersion:(NSUInteger)arg0 ;


@end


#endif