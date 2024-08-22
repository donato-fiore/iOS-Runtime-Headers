// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TPSPHONEBOOKTELEPHONYCONTROLLER_H
#define TPSPHONEBOOKTELEPHONYCONTROLLER_H

@class NSString, CTPhoneNumberInfo, CTXPCServiceSubscriptionContext;
@protocol CoreTelephonyClientSuppServicesDelegate;


#import "TPSTelephonyController.h"

@interface TPSPhonebookTelephonyController : TPSTelephonyController <CoreTelephonyClientSuppServicesDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger phoneBookEntryCount; // ivar: _phoneBookEntryCount
@property (retain, nonatomic) CTPhoneNumberInfo *phoneNumberInfo; // ivar: _phoneNumberInfo
@property (readonly, nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *updatePhoneNumber; // ivar: _updatePhoneNumber
@property (copy, nonatomic) id *updatePhoneNumberInfoCompletion; // ivar: _updatePhoneNumberInfoCompletion


-(id)getPhoneNumberInfo;
-(id)getPhoneNumberInfoWithError:(*id)arg0 ;
-(id)init;
-(id)initWithSubscriptionContext:(id)arg0 ;
-(void)fetchPhoneNumberInfo;
-(void)fetchPhoneNumberInfoWithCompletion:(id)arg0 ;
-(void)phoneBookSelected:(id)arg0 ;
-(void)phoneNumberChanged:(id)arg0 ;
-(void)savePhoneBookEntryAtIndex:(int)arg0 withContactName:(id)arg1 contactNumber:(id)arg2 ;
-(void)savePhoneBookEntryAtIndex:(int)arg0 withContactName:(id)arg1 contactNumber:(id)arg2 completion:(id)arg3 ;
-(void)selectPhoneBookWithName:(int)arg0 password:(id)arg1 completion:(id)arg2 ;
-(void)updatePhoneNumberInfo:(id)arg0 label:(id)arg1 number:(id)arg2 completion:(id)arg3 ;


@end


#endif