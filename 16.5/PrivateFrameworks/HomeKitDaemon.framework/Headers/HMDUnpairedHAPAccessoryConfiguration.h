// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDUNPAIREDHAPACCESSORYCONFIGURATION_H
#define HMDUNPAIREDHAPACCESSORYCONFIGURATION_H

@class NSNumber, NSUUID, NSString;

#import <Foundation/Foundation.h>

#import "HMDAccessoryNetworkCredential.h"

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject

@property (copy) NSNumber *chipFabricIndex; // ivar: _chipFabricIndex
@property (copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (copy) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (retain) HMDAccessoryNetworkCredential *networkCredential; // ivar: _networkCredential
@property BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (copy) NSString *setupCode; // ivar: _setupCode
@property (copy) id *setupCodeProvider; // ivar: _setupCodeProvider




@end


#endif