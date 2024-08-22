// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INREQUESTPAYMENTINTENT_H
#define INREQUESTPAYMENTINTENT_H

@class NSString;
@protocol INRequestPaymentIntentExport;


#import "INIntent.h"
#import "INCurrencyAmount.h"
#import "INPerson.h"

@interface INRequestPaymentIntent : INIntent <INRequestPaymentIntentExport>



@property (readonly, copy, nonatomic) INCurrencyAmount *currencyAmount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *note;
@property (readonly, copy, nonatomic) INPerson *payer;
@property (readonly) Class superclass;


-(BOOL)_isUserConfirmationRequired;
-(BOOL)configureAttributeSet:(id)arg0 includingData:(BOOL)arg1 ;
-(NSInteger)_intentCategory;
-(id)_categoryVerb;
-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithPayer:(id)arg0 currencyAmount:(id)arg1 note:(id)arg2 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif