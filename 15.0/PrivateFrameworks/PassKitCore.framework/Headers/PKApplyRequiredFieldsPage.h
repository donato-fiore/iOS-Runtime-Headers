// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKAPPLYREQUIREDFIELDSPAGE_H
#define PKAPPLYREQUIREDFIELDSPAGE_H



#import "PKDynamicProvisioningPageContent.h"
#import "PKPaymentSetupFieldsModel.h"

@interface PKApplyRequiredFieldsPage : PKDynamicProvisioningPageContent

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel; // ivar: _fieldModel


-(id)initWithDictionary:(id)arg0 fieldOptions:(id)arg1 featureApplication:(id)arg2 ;


@end


#endif