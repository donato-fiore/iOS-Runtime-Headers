// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef EKSHAREE_H
#define EKSHAREE_H

@class NSString, NSPredicate;
@protocol NSCopying, EKIdentityProtocol;


#import "EKObject.h"
#import "EKCalendar.h"

@interface EKSharee : EKObject <NSCopying, EKIdentityProtocol>



@property (readonly, nonatomic) NSString *UUID;
@property (copy, nonatomic) NSString *address;
@property (readonly, nonatomic) NSPredicate *contactPredicate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddress;
@property (copy, nonatomic) NSString *externalID;
@property (copy, nonatomic) NSString *firstName;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCurrentUserForScheduling;
@property (readonly, nonatomic) BOOL isCurrentUserForSharing;
@property (copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSString *name;
@property (readonly, nonatomic) EKCalendar *owner;
@property (readonly, nonatomic) NSString *phoneNumber;
@property (nonatomic) NSUInteger shareeAccessLevel;
@property (nonatomic) BOOL shareeMuteRemoval;
@property (nonatomic) NSUInteger shareeStatus;
@property (readonly) Class superclass;


+(Class)frozenClass;
+(NSUInteger)_ekShareeAccessLevelFromCalShareeAccessLevel:(int)arg0 ;
+(NSUInteger)_ekShareeStatusFromCalShareeStatus:(int)arg0 ;
+(NSUInteger)statusEnumFromString:(id)arg0 ;
+(id)_urlForEmailAddress:(id)arg0 andPhoneNumber:(id)arg1 ;
+(id)knownIdentityKeysForComparison;
+(id)knownSingleValueKeysForComparison;
+(id)shareeWithName:(id)arg0 emailAddress:(id)arg1 ;
+(id)shareeWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 ;
+(id)shareeWithName:(id)arg0 emailAddress:(id)arg1 phoneNumber:(id)arg2 externalID:(id)arg3 ;
+(id)shareeWithName:(id)arg0 phoneNumber:(id)arg1 ;
+(id)shareeWithName:(id)arg0 url:(id)arg1 ;
+(id)shareeWithUUID:(id)arg0 name:(id)arg1 emailAddress:(id)arg2 phoneNumber:(id)arg3 ;
+(id)statusStringFromEnum:(NSUInteger)arg0 ;
+(int)_calShareeAccessLevelFromEKShareeAccessLevel:(NSUInteger)arg0 ;
+(int)_calShareeStatusFromEKShareeStatus:(NSUInteger)arg0 ;
-(id)URL;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)displayName;
-(id)existingContact;
-(id)init;
-(id)initWithName:(id)arg0 url:(id)arg1 ;
-(id)initWithName:(id)arg0 url:(id)arg1 externalID:(id)arg2 ;
-(void)setDisplayName:(id)arg0 ;


@end


#endif