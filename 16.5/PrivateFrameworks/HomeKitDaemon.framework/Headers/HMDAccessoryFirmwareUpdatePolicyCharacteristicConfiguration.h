// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDACCESSORYFIRMWAREUPDATEPOLICYCHARACTERISTICCONFIGURATION_H
#define HMDACCESSORYFIRMWAREUPDATEPOLICYCHARACTERISTICCONFIGURATION_H

@class NSString, NSNumber, NSArray;

#import <Foundation/Foundation.h>


@interface HMDAccessoryFirmwareUpdatePolicyCharacteristicConfiguration : NSObject

@property (readonly) NSString *format; // ivar: _format
@property (readonly) NSNumber *settlingTime; // ivar: _settlingTime
@property (readonly) NSString *type; // ivar: _type
@property (readonly) NSArray *values; // ivar: _values


-(id)initWithType:(id)arg0 format:(id)arg1 values:(id)arg2 settlingTime:(id)arg3 ;


@end


#endif