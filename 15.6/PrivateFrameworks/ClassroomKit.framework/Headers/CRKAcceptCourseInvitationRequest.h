// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKACCEPTCOURSEINVITATIONREQUEST_H
#define CRKACCEPTCOURSEINVITATIONREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier, NSString, NSDictionary;



@interface CRKAcceptCourseInvitationRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *courseIdentifier; // ivar: _courseIdentifier
@property (copy, nonatomic) NSString *pin; // ivar: _pin
@property (copy, nonatomic) NSDictionary *studentInformation; // ivar: _studentInformation


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif