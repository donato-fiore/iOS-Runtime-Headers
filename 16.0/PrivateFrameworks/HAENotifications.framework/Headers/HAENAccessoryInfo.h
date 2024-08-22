// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HAENACCESSORYINFO_H
#define HAENACCESSORYINFO_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface HAENAccessoryInfo : NSObject

@property (readonly) NSNumber *interfaceDeviceSerialNumber; // ivar: _interfaceDeviceSerialNumber
@property (readonly) NSString *interfaceModuleSerialNumber; // ivar: _interfaceModuleSerialNumber
@property (readonly) NSString *manufacturer; // ivar: _manufacturer
@property (readonly) NSString *modelNumber; // ivar: _modelNumber
@property (readonly) NSString *name; // ivar: _name
@property (readonly) NSString *serialNumber; // ivar: _serialNumber


+(id)getAccessoryInfo:(*id)arg0 ;
+(id)getAccessoryInfoFromIOAccesoryManager:(*id)arg0 ;
+(id)getAccessoryInfoFromIOKitDirectly:(*id)arg0 ;
-(id)description;


@end


#endif