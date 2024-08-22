// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKACCOUNTUSERCOLLECTION_H
#define PKACCOUNTUSERCOLLECTION_H

@class NSDictionary, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "PKAccountUser.h"

@interface PKAccountUserCollection : NSObject <NSSecureCoding>

 {
    NSDictionary *_accountUsersByAltDSID;
}


@property (readonly, nonatomic) NSSet *accountUsers; // ivar: _accountUsers
@property (readonly, nonatomic, getter=isCoOwner) BOOL coOwner; // ivar: _coOwner
@property (readonly, nonatomic) PKAccountUser *coOwnerAccountUser; // ivar: _coOwnerAccountUser
@property (readonly, nonatomic) PKAccountUser *currentAccountUser; // ivar: _currentAccountUser


+(BOOL)supportsSecureCoding;
-(BOOL)_isEqualToAccountUserCollection:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(NSUInteger)hash;
-(id)accountUserForTransaction:(id)arg0 ;
-(id)accountUserWithAltDSID:(id)arg0 ;
-(id)activeAccountUsers;
-(id)activeAccountUsersExcludingCurrentAccountUser;
-(id)description;
-(id)initWithAccountUsers:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)transactionSourceIdentifiers;
-(void)_updateWithAccountUsers:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif