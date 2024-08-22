// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STINSTALLEDAPP_H
#define STINSTALLEDAPP_H

@class NSString, NSData;
@protocol STSerializableMappedObject, STUniquelySerializableManagedObject;


#import "STUniquedManagedObject.h"
#import "STUserDeviceState.h"

@interface STInstalledApp : STUniquedManagedObject <STSerializableMappedObject, STUniquelySerializableManagedObject>



@property (copy, nonatomic) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSData *iconData;
@property (nonatomic) BOOL installedLocally;
@property (readonly) Class superclass;
@property (retain, nonatomic) STUserDeviceState *userDeviceState;


+(id)bundleIdentifiersInstalledForDSID:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)fetchOrCreateWithDictionaryRepresentation:(id)arg0 inContext:(id)arg1 error:(*id)arg2 ;
+(id)serializableClassName;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)didChangeValueForKey:(id)arg0 ;


@end


#endif