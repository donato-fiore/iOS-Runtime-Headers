// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKHOMEKEYCREDENTIAL_H
#define PKHOMEKEYCREDENTIAL_H



#import "PKPaymentLocalPassCredential.h"

@interface PKHomeKeyCredential : PKPaymentLocalPassCredential {
    BOOL _detailDescriptionAvailable;
}




-(id)detailDescription;
-(id)initWithPaymentPass:(id)arg0 ;


@end


#endif