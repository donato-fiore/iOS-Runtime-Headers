// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STLOCALORGANIZATION_H
#define STLOCALORGANIZATION_H

@class NSString;
@protocol STSerializableMappedObject;


#import "STCoreOrganization.h"
#import "STLocalOrganizationSettings.h"

@interface STLocalOrganization : STCoreOrganization <STSerializableMappedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) STLocalOrganizationSettings *settings;
@property (readonly) Class superclass;


+(id)fetchOrCreateLocalOrganizationWithContext:(id)arg0 error:(*id)arg1 ;
+(id)serializableClassName;


@end


#endif