// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHCOURSEINVITATIONSRESULTOBJECT_H
#define CRKFETCHCOURSEINVITATIONSRESULTOBJECT_H

@class CATTaskResultObject, NSSet, NSArray;



@interface CRKFetchCourseInvitationsResultObject : CATTaskResultObject

@property (copy, nonatomic) NSSet *acceptedInvitationIdentifiers; // ivar: _acceptedInvitationIdentifiers
@property (retain, nonatomic) NSArray *courseInvitations; // ivar: _courseInvitations


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif