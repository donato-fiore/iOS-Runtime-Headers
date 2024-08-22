// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKDYNAMICPROVISIONINGFIELDSPAGECONTENT_H
#define PKDYNAMICPROVISIONINGFIELDSPAGECONTENT_H



#import "PKDynamicProvisioningPageContent.h"
#import "PKPaymentSetupFieldsModel.h"

@interface PKDynamicProvisioningFieldsPageContent : PKDynamicProvisioningPageContent

@property (retain, nonatomic) PKPaymentSetupFieldsModel *fieldModel; // ivar: _fieldModel


-(id)initWithDictionary:(id)arg0 fieldOptions:(id)arg1 businessChatIdentifier:(id)arg2 ;


@end


#endif