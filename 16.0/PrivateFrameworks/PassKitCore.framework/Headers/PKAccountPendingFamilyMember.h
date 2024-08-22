// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPENDINGFAMILYMEMBER_H
#define PKACCOUNTPENDINGFAMILYMEMBER_H

@class NSString, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKAccountPendingFamilyMember : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (copy, nonatomic) NSString *altDSID; // ivar: _altDSID
@property (nonatomic) BOOL displayedNotification; // ivar: _displayedNotification
@property (copy, nonatomic) NSDate *inviteDate; // ivar: _inviteDate
@property (copy, nonatomic) NSString *inviteEmail; // ivar: _inviteEmail


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToAccountPendingFamilyMember:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPendingFamilyMember:(id)arg0 accountIdentifier:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif