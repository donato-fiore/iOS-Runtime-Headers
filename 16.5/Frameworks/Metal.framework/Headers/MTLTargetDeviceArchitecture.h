// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MTLTARGETDEVICEARCHITECTURE_H
#define MTLTARGETDEVICEARCHITECTURE_H


#import <Foundation/Foundation.h>


@interface MTLTargetDeviceArchitecture : NSObject

@property (nonatomic) unsigned int cpuType; // ivar: _cpuType
@property (nonatomic) NSUInteger driverVersion; // ivar: _driverVersion
@property (nonatomic) unsigned int subType; // ivar: _subType
@property (nonatomic) MTLTargetDeviceArchVersion version; // ivar: _version
@property (readonly) unsigned int versionCombined;


-(id)init;


@end


#endif