// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPEERPAYMENTCARDDATAITEM_H
#define PKPEERPAYMENTCARDDATAITEM_H



#import "PKPaymentDataItem.h"
#import "PKPaymentPass.h"
#import "PKPeerPaymentQuote.h"

@interface PKPeerPaymentCardDataItem : PKPaymentDataItem {
    PKPaymentPass *_pass;
}


@property (readonly, nonatomic) PKPaymentPass *pass;
@property (readonly, nonatomic) PKPeerPaymentQuote *quote;


+(NSInteger)dataType;
-(BOOL)isValidWithError:(*id)arg0 ;
-(BOOL)shouldShowDisclosure;
-(NSInteger)context;


@end


#endif