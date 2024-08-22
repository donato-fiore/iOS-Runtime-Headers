// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASDAUDIODEVICEDSPDATABASE_H
#define ASDAUDIODEVICEDSPDATABASE_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>


@interface ASDAudioDeviceDSPDatabase : NSObject

@property (readonly, nonatomic) NSString *deviceUID; // ivar: _deviceUID
@property (readonly, nonatomic) NSSet *dspConfigurations; // ivar: _dspConfigurations
@property (readonly, nonatomic) NSSet *referencedDSPDeviceProperties; // ivar: _referencedDSPDeviceProperties
@property (readonly, nonatomic) NSSet *referencedUnderlyingDeviceProperties; // ivar: _referencedUnderlyingDeviceProperties


-(id)dspConfigurationForDevice:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 resourcePath:(id)arg1 deviceUID:(id)arg2 ;


@end


#endif