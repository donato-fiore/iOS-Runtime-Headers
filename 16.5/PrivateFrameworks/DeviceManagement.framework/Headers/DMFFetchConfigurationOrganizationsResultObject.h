// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFFETCHCONFIGURATIONORGANIZATIONSRESULTOBJECT_H
#define DMFFETCHCONFIGURATIONORGANIZATIONSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface DMFFetchConfigurationOrganizationsResultObject : CATTaskResultObject

@property (retain, nonatomic) NSDictionary *organizationsByIdentifier; // ivar: _organizationsByIdentifier


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif