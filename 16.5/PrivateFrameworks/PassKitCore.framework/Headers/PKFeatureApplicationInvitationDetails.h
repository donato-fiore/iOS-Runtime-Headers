// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKFEATUREAPPLICATIONINVITATIONDETAILS_H
#define PKFEATUREAPPLICATIONINVITATIONDETAILS_H

@class NSString, NSPersonNameComponents;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKFeatureApplicationInvitationDetails : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger accountUserAccessLevel; // ivar: _accountUserAccessLevel
@property (copy, nonatomic) NSString *accountUserAltDSID; // ivar: _accountUserAltDSID
@property (copy, nonatomic) NSString *accountUserFirstName; // ivar: _accountUserFirstName
@property (copy, nonatomic) NSString *accountUserLastName; // ivar: _accountUserLastName
@property (readonly, nonatomic) NSPersonNameComponents *accountUserNameComponents;
@property (copy, nonatomic) NSString *originatorAltDSID; // ivar: _originatorAltDSID
@property (copy, nonatomic) NSString *originatorFirstName; // ivar: _originatorFirstName
@property (copy, nonatomic) NSString *originatorLastName; // ivar: _originatorLastName
@property (readonly, nonatomic) NSPersonNameComponents *originatorNameComponents;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithAccountUserAltDSID:(id)arg0 accessLevel:(NSUInteger)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)jsonRepresentation;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif