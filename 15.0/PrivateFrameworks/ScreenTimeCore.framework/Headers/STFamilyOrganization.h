// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STFAMILYORGANIZATION_H
#define STFAMILYORGANIZATION_H

@class NSString, NSSet;
@protocol STSerializableMappedObject;


#import "STCoreOrganization.h"

@interface STFamilyOrganization : STCoreOrganization <STSerializableMappedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *settings;
@property (readonly) Class superclass;


+(id)fetchOrCreateFamilyOrganizationWithContext:(id)arg0 error:(*id)arg1 ;
+(id)serializableClassName;


@end


#endif