// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKDEVICE_H
#define HKDEVICE_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HKDevice : NSObject <NSSecureCoding, NSCopying>

 {
    NSString *_name;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_hardwareVersion;
    NSString *_firmwareVersion;
    NSString *_softwareVersion;
    NSString *_localIdentifier;
    NSString *_UDIDeviceIdentifier;
}


@property (readonly) NSString *UDIDeviceIdentifier;
@property (readonly, nonatomic) NSString *_connectedGymDeviceFullName;
@property (readonly, nonatomic) NSString *_connectedGymDeviceTypeName;
@property (readonly) NSString *firmwareVersion;
@property (readonly) NSString *hardwareVersion;
@property (readonly) NSString *localIdentifier;
@property (readonly) NSString *manufacturer;
@property (readonly) NSString *model;
@property (readonly) NSString *name;
@property (readonly) NSString *softwareVersion;


+(BOOL)supportsSecureCoding;
+(id)localDevice;
-(BOOL)_isConnectedGymDevice;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_fitnessMachineType;
-(NSUInteger)hash;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithName:(id)arg0 manufacturer:(id)arg1 model:(id)arg2 hardwareVersion:(id)arg3 firmwareVersion:(id)arg4 softwareVersion:(id)arg5 localIdentifier:(id)arg6 UDIDeviceIdentifier:(id)arg7 ;
-(void)_setFitnessMachineType:(NSUInteger)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif