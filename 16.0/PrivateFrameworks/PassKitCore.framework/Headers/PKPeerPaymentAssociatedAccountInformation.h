// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTASSOCIATEDACCOUNTINFORMATION_H
#define PKPEERPAYMENTASSOCIATEDACCOUNTINFORMATION_H

@class NSSet, NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPeerPaymentAssociatedAccountInformation : NSObject <NSSecureCoding>



@property (copy, nonatomic) NSSet *associatedAccountInvitations; // ivar: _associatedAccountInvitations
@property (copy, nonatomic) NSSet *associatedAccountRemovalRecords; // ivar: _associatedAccountRemovalRecords
@property (nonatomic, getter=isAssociatedAccountStateDirty) BOOL associatedAccountStateDirty; // ivar: _associatedAccountStateDirty
@property (copy, nonatomic) NSSet *associatedAccounts; // ivar: _associatedAccounts
@property (copy, nonatomic) NSDate *lastUpdated; // ivar: _lastUpdated
@property (nonatomic) CGFloat proactiveAssociatedAccountFetchPeriod; // ivar: _proactiveAssociatedAccountFetchPeriod


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 lastUpdated:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateAccountInvitationsUsingBlock:(id)arg0 ;
-(void)enumerateAssociatedAccountsUsingBlock:(id)arg0 ;
-(void)markAssociatedAccountActiveWithAltDSID:(id)arg0 hasPresentedNotification:(BOOL)arg1 ;
-(void)markAssociatedAccountRemovalRecordWithAltDSID:(id)arg0 hasPresentedNotification:(BOOL)arg1 ;


@end


#endif