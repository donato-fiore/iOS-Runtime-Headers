// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STCOREDEVICE_H
#define STCOREDEVICE_H

@class NSManagedObject, NSString, NSSet;
@protocol STSyncableSubObject, STSerializableManagedObject;


#import "STUserDeviceState.h"

@interface STCoreDevice : NSManagedObject <STSyncableSubObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) STUserDeviceState *localUserDeviceState;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) short platform;
@property (readonly) Class superclass;
@property (readonly) NSObject<STSerializableManagedObject> *syncableRootObject;
@property (retain, nonatomic) NSSet *usages;
@property (retain, nonatomic) NSSet *userDeviceAddresses;
@property (retain, nonatomic) NSSet *userDeviceStates;


+(id)fetchDeviceWithIdentifier:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateDeviceWithIdentifier:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateLocalDeviceInContext:(id)arg0 error:(*id)arg1 ;
+(id)fetchRequestForOrphanedDevices;


@end


#endif