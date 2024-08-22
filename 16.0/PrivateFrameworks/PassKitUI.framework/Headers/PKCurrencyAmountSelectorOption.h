// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKCURRENCYAMOUNTSELECTOROPTION_H
#define PKCURRENCYAMOUNTSELECTOROPTION_H

@class PKCurrencyAmount, NSString;
@protocol PKSpendNotificationLimitViewControllerItem;

#import <Foundation/Foundation.h>


@interface PKCurrencyAmountSelectorOption : NSObject <PKSpendNotificationLimitViewControllerItem>



@property (readonly, nonatomic) PKCurrencyAmount *currencyAmount; // ivar: _currencyAmount
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayValue; // ivar: _displayValue
@property (readonly, nonatomic) NSInteger editingStyle;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isCustomOption; // ivar: _isCustomOption
@property (readonly, nonatomic) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


+(id)cellReuseIdentifier;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldHighlight;
-(NSInteger)compare:(id)arg0 ;
-(id)initWithCurrencyAmount:(id)arg0 displayValue:(id)arg1 customOption:(BOOL)arg2 selected:(BOOL)arg3 ;
-(id)tableViewCellForTableView:(id)arg0 atIndexPath:(id)arg1 ;


@end


#endif