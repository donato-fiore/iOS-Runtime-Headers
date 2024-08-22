// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef INSEARCHFORBILLSINTENT_H
#define INSEARCHFORBILLSINTENT_H

@class NSString;
@protocol INSearchForBillsIntentExport;


#import "INIntent.h"
#import "INBillPayee.h"
#import "INDateComponentsRange.h"

@interface INSearchForBillsIntent : INIntent <INSearchForBillsIntentExport>



@property (readonly, copy, nonatomic) INBillPayee *billPayee;
@property (readonly, nonatomic) NSInteger billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) INDateComponentsRange *dueDateRange;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) INDateComponentsRange *paymentDateRange;
@property (readonly, nonatomic) NSInteger status;
@property (readonly) Class superclass;


-(id)_dictionaryRepresentation;
-(id)_metadata;
-(id)_typedBackingStore;
-(id)domain;
-(id)initWithBillPayee:(id)arg0 paymentDateRange:(id)arg1 billType:(NSInteger)arg2 status:(NSInteger)arg3 dueDateRange:(id)arg4 ;
-(id)parametersByName;
-(id)verb;
-(void)_redactForMissingPrivacyEntitlementOptions:(NSUInteger)arg0 containingAppBundleId:(id)arg1 ;
-(void)_setMetadata:(id)arg0 ;
-(void)setDomain:(id)arg0 ;
-(void)setParametersByName:(id)arg0 ;
-(void)setVerb:(id)arg0 ;


@end


#endif