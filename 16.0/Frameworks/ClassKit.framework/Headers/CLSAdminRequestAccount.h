// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CLSADMINREQUESTACCOUNT_H
#define CLSADMINREQUESTACCOUNT_H

@class NSArray, NSString;


#import "CLSObject.h"
#import "CLSPerson.h"

@interface CLSAdminRequestAccount : CLSObject

@property (retain, nonatomic) CLSPerson *accountPersonInfo; // ivar: _accountPersonInfo
@property (copy, nonatomic) NSArray *conflictingPersonIDs; // ivar: _conflictingPersonIDs
@property (copy, nonatomic) NSString *personID; // ivar: _personID
@property (copy, nonatomic) NSArray *requestedLocationIDs; // ivar: _requestedLocationIDs
@property (retain, nonatomic) NSString *requestedRoleID; // ivar: _requestedRoleID
@property (nonatomic) NSInteger requestedRoleType; // ivar: _requestedRoleType
@property (nonatomic) NSInteger status; // ivar: _status
@property (copy, nonatomic) NSString *temporaryPassword; // ivar: _temporaryPassword
@property (copy, nonatomic) NSString *verificationCode; // ivar: _verificationCode


+(BOOL)supportsSecureCoding;
+(id)_propertyNames;
-(id)_init;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithAdminRequestID:(id)arg0 forAccountWithGivenName:(id)arg1 middleName:(id)arg2 familyName:(id)arg3 emailAddress:(id)arg4 appleID:(id)arg5 personNumber:(id)arg6 roleType:(NSInteger)arg7 atLocationIDs:(id)arg8 ;
-(id)initWithAdminRequestID:(id)arg0 personID:(id)arg1 ;
-(id)initWithAdminRequestID:(id)arg0 personID:(id)arg1 roleType:(NSInteger)arg2 atLocationIDs:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)mergeWithObject:(id)arg0 ;
-(void)setRequestedRole:(id)arg0 ;


@end


#endif