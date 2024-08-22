// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MIDICIDISCOVEREDNODE_H
#define MIDICIDISCOVEREDNODE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "MIDICIDeviceInfo.h"

@interface MIDICIDiscoveredNode : NSObject <NSSecureCoding>

 {
    unsigned int _maxSysExSize;
}


@property (readonly, nonatomic) unsigned int destination; // ivar: _destination
@property (readonly, nonatomic) MIDICIDeviceInfo *deviceInfo; // ivar: _deviceInfo
@property (readonly, nonatomic) NSNumber *maximumSysExSize;
@property (readonly, nonatomic) BOOL supportsProfiles; // ivar: _supportsProfiles
@property (readonly, nonatomic) BOOL supportsProperties; // ivar: _supportsProperties


+(BOOL)supportsSecureCoding;
+(id)description;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDestination:(unsigned int)arg0 deviceID:(struct MIDICIDeviceIdentification )arg1 profilesSupported:(BOOL)arg2 propertiesSupported:(BOOL)arg3 maxSysExSize:(unsigned int)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif