// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFTRUSTEVALUATOR_IVARS_H
#define SFTRUSTEVALUATOR_IVARS_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "SFTrustPolicy.h"
#import "SFRevocationPolicy.h"

@interface SFTrustEvaluator_Ivars : NSObject {
    SFTrustPolicy *trustPolicy;
    SFRevocationPolicy *revocationPolicy;
    NSArray *applicationAnchorCertificates;
    ? trustEvaluatorFlags;
}






@end


#endif