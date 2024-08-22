// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STICLOUDORGANIZATIONSETTINGS_H
#define STICLOUDORGANIZATIONSETTINGS_H

@class NSString;
@protocol STSerializableMappedObject;


#import "STCoreOrganizationSettings.h"
#import "STiCloudOrganization.h"

@interface STiCloudOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) STiCloudOrganization *organization;
@property (copy, nonatomic) NSString *recoveryAltDSID;
@property (readonly) Class superclass;


+(id)serializableClassName;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(void)setPasscode:(id)arg0 ;


@end


#endif