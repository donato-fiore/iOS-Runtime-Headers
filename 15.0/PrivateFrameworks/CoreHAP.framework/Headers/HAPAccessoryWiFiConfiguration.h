// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAPACCESSORYWIFICONFIGURATION_H
#define HAPACCESSORYWIFICONFIGURATION_H

@class NSString, NSData;


#import "HAPAccessoryConfiguration.h"

@interface HAPAccessoryWiFiConfiguration : HAPAccessoryConfiguration

@property (readonly, nonatomic) NSString *isoCountryCode; // ivar: _isoCountryCode
@property (readonly, nonatomic) NSData *psk; // ivar: _psk
@property (readonly, nonatomic) NSString *ssid; // ivar: _ssid


+(id)accessoryConfigurationWithSsid:(id)arg0 psk:(id)arg1 country:(id)arg2 ;
-(id)description;
-(id)initWithSSID:(id)arg0 psk:(id)arg1 country:(id)arg2 ;


@end


#endif