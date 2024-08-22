// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKSETCOURSEPROPERTIESREQUEST_H
#define CRKSETCOURSEPROPERTIESREQUEST_H

@class CATTaskRequest, NSArray, NSString, DMFControlGroupIdentifier;



@interface CRKSetCoursePropertiesRequest : CATTaskRequest

@property (copy, nonatomic) NSArray *anchorCertificates; // ivar: _anchorCertificates
@property (copy, nonatomic) NSString *courseDescription; // ivar: _courseDescription
@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (copy, nonatomic) NSString *courseName; // ivar: _courseName


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif