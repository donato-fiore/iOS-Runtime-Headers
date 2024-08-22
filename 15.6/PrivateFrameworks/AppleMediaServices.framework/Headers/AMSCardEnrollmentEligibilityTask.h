// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSCARDENROLLMENTELIGIBILITYTASK_H
#define AMSCARDENROLLMENTELIGIBILITYTASK_H

@class NSString;
@protocol AMSBagProtocol;


#import "AMSTask.h"

@interface AMSCardEnrollmentEligibilityTask : AMSTask

@property (retain, nonatomic) NSObject<AMSBagProtocol> *bag; // ivar: _bag
@property (readonly, copy, nonatomic) NSString *countryCode; // ivar: _countryCode


-(NSUInteger)_cardTypeForPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(id)_performSilentEnrollmentCheckWithRequest:(id)arg0 ;
-(id)init;
-(id)initWithBag:(id)arg0 ;
-(id)initWithBag:(id)arg0 countryCode:(id)arg1 ;
-(id)initWithCountryCode:(id)arg0 ;
-(id)performCanWriteBillingInfoQueryWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 ;
-(void)canWriteBillingInfoWithPassTypeIdentifier:(id)arg0 serialNumber:(id)arg1 completion:(id)arg2 ;


@end


#endif