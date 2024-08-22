// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKSUMMARYSHARINGENTRY_H
#define HKSUMMARYSHARINGENTRY_H

@class NSString, NSUUID, NSArray, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>

#import "HKProfileIdentifier.h"

@interface HKSummarySharingEntry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *CNContactIdentifier; // ivar: _CNContactIdentifier
@property (readonly, copy, nonatomic) NSUUID *UUID; // ivar: _UUID
@property (readonly, copy, nonatomic) NSArray *allContactIdentifiers; // ivar: _allContactIdentifiers
@property (readonly, copy, nonatomic) NSDate *dateAccepted; // ivar: _dateAccepted
@property (readonly, copy, nonatomic) NSDate *dateInvited; // ivar: _dateInvited
@property (readonly, nonatomic) NSUInteger direction; // ivar: _direction
@property (readonly, copy, nonatomic) NSString *firstName; // ivar: _firstName
@property (readonly, copy, nonatomic) NSString *lastName; // ivar: _lastName
@property (readonly, copy, nonatomic) NSDate *modificationDate; // ivar: _modificationDate
@property (readonly, nonatomic) NSInteger notificationStatus; // ivar: _notificationStatus
@property (readonly, copy, nonatomic) NSString *primaryContactIdentifier; // ivar: _primaryContactIdentifier
@property (readonly, copy, nonatomic) HKProfileIdentifier *profileIdentifier; // ivar: _profileIdentifier
@property (readonly, nonatomic) NSInteger status; // ivar: _status
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger userWheelchairMode; // ivar: _userWheelchairMode


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithUUID:(id)arg0 primaryContactIdentifier:(id)arg1 allContactIdentifiers:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 userWheelchairMode:(NSInteger)arg5 type:(NSInteger)arg6 status:(NSInteger)arg7 notificationStatus:(NSInteger)arg8 direction:(NSUInteger)arg9 modificationDate:(id)arg10 dateAccepted:(id)arg11 profileIdentifier:(id)arg12 CNContactIdentifier:(id)arg13 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUUID:(id)arg0 primaryContactIdentifier:(id)arg1 allContactIdentifiers:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 type:(NSInteger)arg5 status:(NSInteger)arg6 notificationStatus:(NSInteger)arg7 direction:(NSUInteger)arg8 modificationDate:(id)arg9 ;
-(id)initWithUUID:(id)arg0 primaryContactIdentifier:(id)arg1 allContactIdentifiers:(id)arg2 firstName:(id)arg3 lastName:(id)arg4 userWheelchairMode:(NSInteger)arg5 type:(NSInteger)arg6 status:(NSInteger)arg7 notificationStatus:(NSInteger)arg8 direction:(NSUInteger)arg9 modificationDate:(id)arg10 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif