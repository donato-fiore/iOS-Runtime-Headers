// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSIMULATORPAYMENTPASS_H
#define PKSIMULATORPAYMENTPASS_H

@class NSDictionary;


#import "PKPaymentPass.h"

@interface PKSimulatorPaymentPass : PKPaymentPass {
    NSDictionary *_dictionary;
}




-(id)devicePrimaryPaymentApplication;
-(id)initWithDictionary:(id)arg0 bundle:(id)arg1 ;
-(id)localizedDescription;
-(id)primaryAccountIdentifier;
-(id)primaryAccountNumberSuffix;


@end


#endif