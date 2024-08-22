// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STUSERDEVICESTATE_H
#define STUSERDEVICESTATE_H

@class NSData, NSString, NSSet, NSDate;
@protocol STSerializableMappedObject, STUniquelySerializableManagedObject;


#import "STUniquedManagedObject.h"
#import "STCoreDevice.h"
#import "STCoreUser.h"

@interface STUserDeviceState : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>



@property (copy, nonatomic) NSData *capabilitiesPlist;
@property (nonatomic) BOOL cloudSyncEnabled;
@property (copy, nonatomic) NSString *coreDuetIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) STCoreDevice *device;
@property (copy, nonatomic) NSData *deviceInfoPlist;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *installedApps;
@property (copy, nonatomic) NSDate *lastFamilyCheckinDate;
@property (retain, nonatomic) STCoreDevice *localDevice;
@property (retain, nonatomic) STCoreUser *localUser;
@property (nonatomic) BOOL managementEnabled;
@property (copy, nonatomic) NSString *passcodeOwner;
@property (nonatomic) BOOL screenTimeEnabled;
@property (readonly) Class superclass;
@property (retain, nonatomic) STCoreUser *user;


+(id)fetchLocalUserDeviceStateInContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchOrCreateLocalUserDeviceStateInContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchRequestMatchingLocalUserDeviceState;
+(id)serializableClassName;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif