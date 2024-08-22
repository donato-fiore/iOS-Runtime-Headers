// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DMFFETCHPROVISIONINGPROFILESRESULTOBJECT_H
#define DMFFETCHPROVISIONINGPROFILESRESULTOBJECT_H

@class CATTaskResultObject, NSArray;



@interface DMFFetchProvisioningProfilesResultObject : CATTaskResultObject

@property (readonly, copy, nonatomic) NSArray *profiles; // ivar: _profiles


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProfiles:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif