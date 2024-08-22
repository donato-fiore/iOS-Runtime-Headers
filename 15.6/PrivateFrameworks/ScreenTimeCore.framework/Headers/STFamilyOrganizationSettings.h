// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STFAMILYORGANIZATIONSETTINGS_H
#define STFAMILYORGANIZATIONSETTINGS_H

@class NSString, NSData;
@protocol STSerializableMappedObject, STVersionVectorable;


#import "STCoreOrganizationSettings.h"
#import "STFamilyOrganization.h"

@interface STFamilyOrganizationSettings : STCoreOrganizationSettings <STSerializableMappedObject, STVersionVectorable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isDirty;
@property (nonatomic) BOOL isManaged;
@property (retain, nonatomic) STFamilyOrganization *organization;
@property (nonatomic) BOOL shareWebUsage;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSData *versionVector;


+(id)serializableClassName;
-(BOOL)updateWithDictionaryRepresentation:(id)arg0 ;
-(id)computeUniqueIdentifier;
-(id)dictionaryRepresentation;
-(id)redactedDescription;
-(void)didChangeValueForKey:(id)arg0 ;
-(void)setPasscode:(id)arg0 ;


@end


#endif