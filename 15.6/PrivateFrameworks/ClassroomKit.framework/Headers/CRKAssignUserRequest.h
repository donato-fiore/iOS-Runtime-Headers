// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKASSIGNUSERREQUEST_H
#define CRKASSIGNUSERREQUEST_H

@class CATTaskRequest, NSString, NSArray, NSNumber;



@interface CRKAssignUserRequest : CATTaskRequest

@property (copy, nonatomic) NSString *appleID; // ivar: _appleID
@property (copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (copy, nonatomic) NSArray *enrolledCourseIdentifiers; // ivar: _enrolledCourseIdentifiers
@property (copy, nonatomic) NSString *familyName; // ivar: _familyName
@property (copy, nonatomic) NSString *fullScreenImageURL; // ivar: _fullScreenImageURL
@property (copy, nonatomic) NSString *givenName; // ivar: _givenName
@property (copy, nonatomic) NSNumber *groupID; // ivar: _groupID
@property (copy, nonatomic) NSString *imageURL; // ivar: _imageURL
@property (copy, nonatomic) NSString *passcodeType; // ivar: _passcodeType
@property (copy, nonatomic) NSString *password; // ivar: _password
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif