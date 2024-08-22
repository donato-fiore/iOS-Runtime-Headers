// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPOLICYSERVICECONFIGURATION_H
#define HMDACCESSORYFIRMWAREUPDATEPOLICYSERVICECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HMDAccessoryFirmwareUpdatePolicyCriteria.h"

@interface HMDAccessoryFirmwareUpdatePolicyServiceConfiguration : NSObject

@property (readonly) NSString *category; // ivar: _category
@property (readonly) HMDAccessoryFirmwareUpdatePolicyCriteria *criteria; // ivar: _criteria
@property (readonly) NSString *type; // ivar: _type


-(id)initWithType:(id)arg0 category:(id)arg1 criteria:(id)arg2 ;


@end


#endif