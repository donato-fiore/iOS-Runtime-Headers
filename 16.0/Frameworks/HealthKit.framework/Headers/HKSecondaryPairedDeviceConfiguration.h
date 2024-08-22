// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKSECONDARYPAIREDDEVICECONFIGURATION_H
#define HKSECONDARYPAIREDDEVICECONFIGURATION_H

@class NSDateComponents, NSNumber, NSString, NSUUID;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKSecondaryPairedDeviceConfiguration : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSDateComponents *dateOfBirth; // ivar: _dateOfBirth
@property (copy, nonatomic) NSNumber *dsid; // ivar: _dsid
@property (copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (copy, nonatomic) NSNumber *guardianDSID; // ivar: _guardianDSID
@property (copy, nonatomic) NSString *guardianFirstName; // ivar: _guardianFirstName
@property (copy, nonatomic) NSString *guardianHashedDSID; // ivar: _guardianHashedDSID
@property (copy, nonatomic) NSString *guardianLastName; // ivar: _guardianLastName
@property (copy, nonatomic) NSString *hashedDSID; // ivar: _hashedDSID
@property (copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (copy, nonatomic) NSUUID *nanoRegistryDeviceUUID; // ivar: _nanoRegistryDeviceUUID
@property (nonatomic) NSUInteger setupType; // ivar: _setupType


+(BOOL)supportsSecureCoding;
+(id)secondaryPairedDeviceConfigurationWithNanoRegistryDeviceUUID:(id)arg0 setupType:(NSUInteger)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(id)_initWithNanoRegistryDeviceUUID:(id)arg0 setupType:(NSUInteger)arg1 firstName:(id)arg2 lastName:(id)arg3 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif