// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HAP2ACCESSORYSERVERDISCOVERYHAPACCESSORYINFO_H
#define HAP2ACCESSORYSERVERDISCOVERYHAPACCESSORYINFO_H

@class NSString, HMFVersion, NSData;


#import "HAP2AccessoryServerDiscoveryAccessoryInfo.h"

@interface HAP2AccessoryServerDiscoveryHAPAccessoryInfo : HAP2AccessoryServerDiscoveryAccessoryInfo

@property (readonly, nonatomic) NSUInteger category; // ivar: _category
@property (readonly, nonatomic) NSUInteger configurationNumber; // ivar: _configurationNumber
@property (readonly, nonatomic) NSUInteger featureFlags; // ivar: _featureFlags
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) HMFVersion *protocolVersion; // ivar: _protocolVersion
@property (readonly, nonatomic) NSData *setupHash; // ivar: _setupHash
@property (readonly, nonatomic) NSUInteger stateNumber; // ivar: _stateNumber
@property (readonly, nonatomic) unsigned char status; // ivar: _status


-(id)initWithDeviceID:(id)arg0 rawDiscoveryInfo:(id)arg1 ;
-(id)initWithDeviceID:(id)arg0 rawDiscoveryInfo:(id)arg1 name:(id)arg2 model:(id)arg3 status:(unsigned char)arg4 category:(NSUInteger)arg5 configurationNumber:(NSUInteger)arg6 stateNumber:(NSUInteger)arg7 protocolVersion:(id)arg8 featureFlags:(NSUInteger)arg9 setupHash:(id)arg10 ;


@end


#endif