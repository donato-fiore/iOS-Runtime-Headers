// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SDDEVICE_H
#define SDDEVICE_H

@class NSString, NSDictionary, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SDSeedingConfiguration.h"

@interface SDDevice : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *build; // ivar: _build
@property (retain, nonatomic) SDSeedingConfiguration *currentConfiguration; // ivar: _currentConfiguration
@property (nonatomic) NSString *deviceClass; // ivar: _deviceClass
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) SDSeedingConfiguration *expectedConfiguration; // ivar: _expectedConfiguration
@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (nonatomic) NSUInteger platform; // ivar: _platform
@property (retain, nonatomic) NSDate *updatedAt; // ivar: _updatedAt


+(BOOL)deviceIsHomePod;
+(BOOL)supportsSecureCoding;
+(NSUInteger)devicePlatform;
+(id)_currentDevice;
+(id)_devicesMatchingPlatforms:(NSUInteger)arg0 ;
+(id)deviceClassForProductType:(id)arg0 ;
+(id)deviceIdentifier;
+(id)deviceName;
+(id)deviceProductType;
+(id)osBuild;
+(void)getCurrentDevice:(id)arg0 ;
+(void)getDevicesMatchingPlatforms:(NSUInteger)arg0 completion:(id)arg1 ;
-(BOOL)_isEnrolled;
-(BOOL)_unenroll;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)_configureDeviceWithExpectedConfiguration;
-(void)_enrollInBetaProgram:(id)arg0 ;
-(void)_verifyEnrollmentWithCompletion:(id)arg0 ;
-(void)checkIn;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateCurrentConfiguration;


@end


#endif