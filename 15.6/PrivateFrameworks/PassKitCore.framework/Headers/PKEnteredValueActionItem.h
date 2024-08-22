// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKENTEREDVALUEACTIONITEM_H
#define PKENTEREDVALUEACTIONITEM_H

@class NSString, NSArray, NSDecimalNumber, NSDictionary;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKEnteredValueActionItem : NSObject <NSSecureCoding, NSCopying>



@property (readonly, copy, nonatomic) NSString *currency; // ivar: _currency
@property (readonly, copy, nonatomic) NSArray *defaultSuggestions; // ivar: _defaultSuggestions
@property (readonly, copy, nonatomic) NSArray *lowBalanceReminderOptions; // ivar: _lowBalanceReminderOptions
@property (readonly, copy, nonatomic) NSDecimalNumber *maxAmount;
@property (readonly, nonatomic) BOOL maxAmountIncludesLocalBalance; // ivar: _maxAmountIncludesLocalBalance
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadAmount; // ivar: _maxLoadAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *maxLoadedBalance; // ivar: _maxLoadedBalance
@property (readonly, copy, nonatomic) NSDecimalNumber *minAmount;
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadAmount; // ivar: _minLoadAmount
@property (readonly, copy, nonatomic) NSDecimalNumber *minLoadedBalance; // ivar: _minLoadedBalance
@property (readonly, copy, nonatomic) NSDictionary *serviceProviderData; // ivar: _serviceProviderData


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)_processLocalizableStrings:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif