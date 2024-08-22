// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FAFAMILYMEMBER_H
#define FAFAMILYMEMBER_H

@class NSString, CNContact, NSDictionary, NSNumber, NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface FAFamilyMember : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSUInteger age;
@property (readonly, copy, nonatomic) NSString *altDSID;
@property (readonly, copy, nonatomic) NSString *appleID;
@property (readonly, nonatomic) CNContact *contact;
@property (readonly, copy, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, copy, nonatomic) NSNumber *dsid;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (readonly, nonatomic) BOOL hasAskToBuyEnabled;
@property (readonly, nonatomic) BOOL hasLinkediTunesAccount;
@property (readonly, nonatomic) BOOL hasParentalControlsEnabled;
@property (readonly, copy, nonatomic) NSString *hashedDSID;
@property (readonly, nonatomic) NSNumber *iTunesAccountDSID;
@property (readonly, copy, nonatomic) NSString *iTunesAccountUsername;
@property (readonly, copy, nonatomic) NSString *iTunesNotLinkedMessage;
@property (readonly, copy, nonatomic) NSDate *invitationDate;
@property (readonly, copy, nonatomic) NSString *inviteEmail;
@property (readonly, nonatomic) BOOL isChildAccount;
@property (readonly, nonatomic) BOOL isMe;
@property (readonly, nonatomic) BOOL isOrganizer;
@property (readonly, nonatomic) BOOL isParent;
@property (readonly, copy, nonatomic) NSDate *joinedDate;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (readonly, copy, nonatomic) NSString *memberPhoneNumbers;
@property (readonly, copy, nonatomic) NSNumber *memberSortOrder;
@property (readonly, nonatomic) NSInteger memberType;
@property (readonly, copy, nonatomic) NSString *memberTypeDisplayString;
@property (readonly, copy, nonatomic) NSString *memberTypeString;
@property (readonly, copy, nonatomic) NSString *statusString;


+(BOOL)supportsSecureCoding;
-(BOOL)_nilEqualProperty:(id)arg0 with:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFamilyMember:(id)arg0 ;
-(NSUInteger)hash;
-(id)_dateWithEpochString:(id)arg0 ;
-(id)contactIncludingImage:(BOOL)arg0 ;
-(id)contactsIncludingImage:(BOOL)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)fetchFamilyPhotoWithRequestedSize:(NSUInteger)arg0 fallbackToLocalAddressBook:(BOOL)arg1 completionHandler:(id)arg2 ;


@end


#endif