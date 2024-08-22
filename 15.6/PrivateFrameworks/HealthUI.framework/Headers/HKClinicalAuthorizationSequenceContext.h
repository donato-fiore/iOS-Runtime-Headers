// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALAUTHORIZATIONSEQUENCECONTEXT_H
#define HKCLINICALAUTHORIZATIONSEQUENCECONTEXT_H

@class NSString, HKSource;

#import <Foundation/Foundation.h>

#import "HKClinicalSourceAuthorizationController.h"

@interface HKClinicalAuthorizationSequenceContext : NSObject

@property (retain, nonatomic) HKClinicalSourceAuthorizationController *authorizationController; // ivar: _authorizationController
@property (copy, nonatomic) NSString *readUsageDescription; // ivar: _readUsageDescription
@property (copy, nonatomic) HKSource *source; // ivar: _source




@end


#endif