// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPLSHAREPARTICIPANT_H
#define CPLSHAREPARTICIPANT_H

@class NSString, NSPersonNameComponents;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface CPLShareParticipant : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger acceptanceStatus; // ivar: _acceptanceStatus
@property (copy, nonatomic) NSString *email; // ivar: _email
@property (nonatomic) BOOL hasiCloudAccount; // ivar: _hasiCloudAccount
@property (nonatomic) BOOL isCurrentUser; // ivar: _isCurrentUser
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // ivar: _nameComponents
@property (nonatomic) NSInteger permission; // ivar: _permission
@property (copy, nonatomic) NSString *phoneNumber; // ivar: _phoneNumber
@property (nonatomic) NSInteger role; // ivar: _role
@property (copy, nonatomic) NSString *userIdentifier; // ivar: _userIdentifier


+(BOOL)supportsSecureCoding;
+(id)descriptionForAcceptanceStatus:(NSInteger)arg0 ;
+(id)descriptionForPermission:(NSInteger)arg0 ;
+(id)descriptionForRole:(NSInteger)arg0 ;
+(void)initialize;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEmail:(id)arg0 ;
-(id)initWithPhoneNumber:(id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 ;
-(id)initWithUserIdentifier:(id)arg0 phoneNumber:(id)arg1 email:(id)arg2 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif