// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSETCOURSEPERMISSIONREQUEST_H
#define CRKSETCOURSEPERMISSIONREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSString, NSNumber;



@interface CRKSetCoursePermissionRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (retain, nonatomic) NSString *feature; // ivar: _feature
@property (retain, nonatomic) NSNumber *permission; // ivar: _permission


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif