// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKINBOXMESSAGE_H
#define PKINBOXMESSAGE_H

@class PKFeatureApplication, PKFamilyMember, NSString;

#import <Foundation/Foundation.h>


@interface PKInboxMessage : NSObject

@property (readonly, nonatomic) PKFeatureApplication *accountUserInvitation; // ivar: _accountUserInvitation
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) PKFamilyMember *familyMember; // ivar: _familyMember
@property (readonly, nonatomic, getter=isHidden) BOOL hidden; // ivar: _hidden
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL shouldBadge;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(id)accountUserInvitationInboxMessageWithAccountUserInvitation:(id)arg0 familyMember:(id)arg1 ;
-(BOOL)_isEqualToInboxMessage:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 identifier:(id)arg1 ;


@end


#endif