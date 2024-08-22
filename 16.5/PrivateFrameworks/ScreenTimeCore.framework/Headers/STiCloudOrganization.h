// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STICLOUDORGANIZATION_H
#define STICLOUDORGANIZATION_H

@class NSString;
@protocol STSerializableMappedObject;


#import "STCoreOrganization.h"
#import "STiCloudOrganizationSettings.h"

@interface STiCloudOrganization : STCoreOrganization <STSerializableMappedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) STiCloudOrganizationSettings *settings;
@property (readonly) Class superclass;


+(id)fetchOrCreateiCloudOrganizationWithContext:(id)arg0 error:(*id)arg1 ;
+(id)serializableClassName;


@end


#endif