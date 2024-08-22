// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKSETREQUESTINGUNENROLLMENTFROMCONTROLGROUPREQUEST_H
#define CRKSETREQUESTINGUNENROLLMENTFROMCONTROLGROUPREQUEST_H

@class CATTaskRequest, DMFControlGroupIdentifier;



@interface CRKSetRequestingUnenrollmentFromControlGroupRequest : CATTaskRequest

@property (retain, nonatomic) DMFControlGroupIdentifier *groupIdentifier; // ivar: _groupIdentifier
@property (nonatomic) BOOL requestingUnenroll; // ivar: _requestingUnenroll


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif