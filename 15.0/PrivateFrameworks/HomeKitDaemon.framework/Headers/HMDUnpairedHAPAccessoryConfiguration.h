// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDUNPAIREDHAPACCESSORYCONFIGURATION_H
#define HMDUNPAIREDHAPACCESSORYCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "HMDAccessoryNetworkCredential.h"

@interface HMDUnpairedHAPAccessoryConfiguration : NSObject

@property (readonly) NSString *homeName; // ivar: _homeName
@property (readonly) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly) HMDAccessoryNetworkCredential *networkCredential; // ivar: _networkCredential
@property (readonly) BOOL requiresUserConsent; // ivar: _requiresUserConsent
@property (readonly) NSString *setupCode; // ivar: _setupCode
@property (readonly) id *setupCodeProvider; // ivar: _setupCodeProvider


// -(id)initWithHomeName:(id)arg0 setupCode:(id)arg1 setupCodeProvider:(id)arg2 requiresUserConsent:(unk)arg3 networkCredential:(BOOL)arg4 country:(id)arg5  ;


@end


#endif