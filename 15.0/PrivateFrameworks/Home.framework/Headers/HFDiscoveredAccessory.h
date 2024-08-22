// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HFDISCOVEREDACCESSORY_H
#define HFDISCOVEREDACCESSORY_H

@class HMAccessory, HMAccessoryCategory, NSString, NSDate, NSError, SFDevice, NSUUID;
@protocol HFHomeKitObject;

#import <Foundation/Foundation.h>


@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>



@property (retain, nonatomic) HMAccessory *accessory; // ivar: _accessory
@property (retain, nonatomic) HMAccessoryCategory *category; // ivar: _category
@property (nonatomic) NSUInteger certificationStatus; // ivar: _certificationStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *discoveryDate; // ivar: _discoveryDate
@property (readonly, nonatomic) NSError *error; // ivar: _error
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, nonatomic) BOOL requiresSetupCode;
@property (readonly, nonatomic) BOOL requiresSoftwareUpdate;
@property (readonly, nonatomic) SFDevice *sharingDevice; // ivar: _sharingDevice
@property (readonly, nonatomic) NSUInteger status; // ivar: _status
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // ivar: _uniqueIdentifier


+(id)discoveredAccessoryFromSetupDescription:(id)arg0 ;
-(id)_descriptionForStatus:(NSUInteger)arg0 ;
-(id)identify;
-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithAccessoryUUID:(id)arg0 accessoryName:(id)arg1 accessoryCategory:(id)arg2 ;
-(id)initWithSharingDevice:(id)arg0 ;
-(void)updateStatus:(NSUInteger)arg0 error:(id)arg1 ;


@end


#endif