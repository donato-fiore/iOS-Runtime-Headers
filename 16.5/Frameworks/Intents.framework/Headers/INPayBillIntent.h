// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INPAYBILLINTENT_H
#define INPAYBILLINTENT_H

@class NSString;
@protocol INPayBillIntentExport;


#import "INIntent.h"
#import "INBillPayee.h"
#import "INDateComponentsRange.h"
#import "INPaymentAccount.h"
#import "INPaymentAmount.h"

@interface INPayBillIntent : INIntent <INPayBillIntentExport>



@property (readonly, copy, nonatomic) INBillPayee *billPayee;
@property (readonly, nonatomic) NSInteger billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INDateComponentsRange *dueDate;
@property (readonly, copy, nonatomic) INPaymentAccount *fromAccount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INPaymentAmount *transactionAmount;
@property (readonly, copy, nonatomic) NSString *transactionNote;
@property (readonly, copy, nonatomic) INDateComponentsRange *transactionScheduledDate;


-(BOOL)_isUserConfirmationRequired;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithBillPayee:(id)arg0 fromAccount:(id)arg1 transactionAmount:(id)arg2 transactionScheduledDate:(id)arg3 transactionNote:(id)arg4 billType:(NSInteger)arg5 dueDate:(id)arg6 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif