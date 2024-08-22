// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKFETCHCOURSEPERMISSIONSRESULTOBJECT_H
#define CRKFETCHCOURSEPERMISSIONSRESULTOBJECT_H

@class CATTaskResultObject, NSDictionary;



@interface CRKFetchCoursePermissionsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSDictionary *permissionsByFeature; // ivar: _permissionsByFeature


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif