// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NPKPEERPAYMENTNUMBERFORMATTER_H
#define NPKPEERPAYMENTNUMBERFORMATTER_H

@class NSNumberFormatter, NSString;

#import <Foundation/Foundation.h>


@interface NPKPeerPaymentNumberFormatter : NSObject {
    NSNumberFormatter *_decimalNumberFormatter;
    NSNumberFormatter *_nonDecimalNumberFormatter;
}


@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode


-(id)currencySymbol;
-(id)init;
-(id)initWithCurrencyCode:(id)arg0 ;
-(id)stringFromNumber:(id)arg0 ;


@end


#endif