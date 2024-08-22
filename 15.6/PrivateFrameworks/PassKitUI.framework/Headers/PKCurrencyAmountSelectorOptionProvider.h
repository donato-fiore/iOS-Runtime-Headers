// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKCURRENCYAMOUNTSELECTOROPTIONPROVIDER_H
#define PKCURRENCYAMOUNTSELECTOROPTIONPROVIDER_H

@class PKAccountUser, NSArray, NSDecimalNumber, NSString;

#import <Foundation/Foundation.h>

#import "PKCurrencyAmountSelectorOption.h"

@interface PKCurrencyAmountSelectorOptionProvider : NSObject {
    PKAccountUser *_accountUser;
    NSArray *_defaultAmounts;
    NSArray *_customAmounts;
}


@property (readonly, nonatomic) NSDecimalNumber *amount; // ivar: _amount
@property (readonly, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (readonly, nonatomic) NSArray *options; // ivar: _options
@property (copy, nonatomic) id *optionsUpdateHandler; // ivar: _optionsUpdateHandler
@property (readonly, nonatomic) PKCurrencyAmountSelectorOption *selectedOption; // ivar: _selectedOption
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)_optionWithAmount:(id)arg0 isCustom:(BOOL)arg1 selected:(BOOL)arg2 ;
-(id)initWithType:(NSInteger)arg0 accountUser:(id)arg1 currencyCode:(id)arg2 ;
-(void)_updateOptions;
-(void)insertCustomAmount:(id)arg0 ;
-(void)removeCustomAmount:(id)arg0 ;
-(void)selectAmount:(id)arg0 ;


@end


#endif