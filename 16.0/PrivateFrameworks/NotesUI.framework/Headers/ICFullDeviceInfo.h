// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICFULLDEVICEINFO_H
#define ICFULLDEVICEINFO_H

@class NSString;


#import "ICMigrationDeviceInfo.h"

@interface ICFullDeviceInfo : ICMigrationDeviceInfo

@property (readonly, nonatomic) ICDeviceHardwareInfo hardwareInfo; // ivar: _hardwareInfo
@property (readonly, nonatomic) NSString *model; // ivar: _model
@property (readonly, nonatomic) NSString *modelDisplayName; // ivar: _modelDisplayName
@property (readonly, nonatomic) NSString *softwareVersion; // ivar: _softwareVersion


-(BOOL)isHardwareInfoUpgradable:(struct ICDeviceHardwareInfo )arg0 ;
-(BOOL)isHardwareInfoUpgradableToIOS13:(struct ICDeviceHardwareInfo )arg0 ;
-(BOOL)isHardwareInfoUpgradableToMacOS11:(struct ICDeviceHardwareInfo )arg0 ;
-(BOOL)isIOSDevice;
-(BOOL)isOSXDevice;
-(BOOL)shouldBeHidden;
-(BOOL)upgradable;
-(BOOL)upgradableToIOS13;
-(BOOL)upgradableToIOS14orMacOS11;
-(BOOL)upgraded;
-(BOOL)upgradedToIOS13;
-(BOOL)upgradedToIOS14EorMacOS11E;
-(BOOL)upgradedToMajor:(int)arg0 minor:(int)arg1 ;
-(NSUInteger)hardwareInfoNameFromString:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithName:(id)arg0 model:(id)arg1 modelDisplayName:(id)arg2 softwareVersion:(id)arg3 ;
-(id)loggableDescription;
-(struct ICDeviceHardwareInfo )hardwareInfoFromModelId:(id)arg0 ;


@end


#endif