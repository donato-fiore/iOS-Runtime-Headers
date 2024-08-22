// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WFPAYMENTMETHODCONTENTITEM_H
#define WFPAYMENTMETHODCONTENTITEM_H

@class INPaymentMethod;
@protocol WFContentItemClass;


#import "WFContentItem.h"

@interface WFPaymentMethodContentItem : WFContentItem <WFContentItemClass>



@property (readonly, nonatomic) INPaymentMethod *paymentMethod;


+(id)contentCategories;
+(id)countDescription;
+(id)outputTypes;
+(id)ownedTypes;
+(id)pluralTypeDescription;
+(id)typeDescription;
-(id)generateObjectRepresentationForClass:(Class)arg0 options:(id)arg1 error:(*id)arg2 ;


@end


#endif