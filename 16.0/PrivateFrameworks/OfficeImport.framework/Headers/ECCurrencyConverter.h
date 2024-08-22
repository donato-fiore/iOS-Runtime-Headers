// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ECCURRENCYCONVERTER_H
#define ECCURRENCYCONVERTER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ECCurrencyConverter : NSObject {
    NSMutableDictionary *mXlToLassoCurrencyCode;
    NSMutableDictionary *mLassoToXlCurrencyCode;
    NSMutableDictionary *mXlAccountingFormat;
    NSMutableDictionary *mXlToLassoCurrencyCodeBySymbol;
}




+(id)currencyConverter;
-(id)lassoCurrencyCodeForDollar;
-(id)lassoCurrencyCodeFromXl:(id)arg0 ;
-(id)xlCurrencyCodeFromLasso:(id)arg0 ;
-(int)xlAccountFormatFromLasso:(id)arg0 ;
-(void)populateDictionaries;


@end


#endif