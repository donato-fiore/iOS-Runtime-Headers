// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AXPHOENIXMITIGATORCONFIGURATION_H
#define AXPHOENIXMITIGATORCONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface AXPhoenixMitigatorConfiguration : NSObject

@property (nonatomic) BOOL disableWhenDeviceLocked; // ivar: _disableWhenDeviceLocked
@property (retain, nonatomic) NSString *disableWhenDeviceLockedConfigurationKey; // ivar: _disableWhenDeviceLockedConfigurationKey
@property (nonatomic) BOOL disableWhenDisplayOff; // ivar: _disableWhenDisplayOff
@property (retain, nonatomic) NSString *disableWhenDisplayOffConfigurationKey; // ivar: _disableWhenDisplayOffConfigurationKey


-(id)init;
-(id)initWithDictionary:(id)arg0 missingKeys:(id)arg1 ;
-(id)toDictionary;
-(void)_initializeKeys;
-(void)_parseFromDictionary:(id)arg0 missingKeys:(id)arg1 ;
-(void)_setDefaultConfiguration;


@end


#endif