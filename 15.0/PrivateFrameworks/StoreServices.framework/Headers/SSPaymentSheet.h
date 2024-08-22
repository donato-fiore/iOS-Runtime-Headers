// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SSPAYMENTSHEET_H
#define SSPAYMENTSHEET_H

@class NSLock, NSString, NSArray, NSAttributedString, NSDictionary, NSNumber, NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface SSPaymentSheet : NSObject <NSCopying>

 {
    NSLock *_lock;
}


@property (copy) NSString *accountHeader; // ivar: _accountHeader
@property (copy) NSString *accountName; // ivar: _accountName
@property (getter=isApplePayClassic) BOOL applePayClassic; // ivar: _applePayClassic
@property (readonly) NSArray *attributedList; // ivar: _attributedList
@property (readonly, copy) NSString *buyParams; // ivar: _buyParams
@property NSInteger confirmationTitleType; // ivar: _confirmationTitleType
@property (copy) NSString *countryCode; // ivar: _countryCode
@property (copy) NSString *currencyCode; // ivar: _currencyCode
@property (copy) NSString *dialogId; // ivar: _dialogId
@property (copy) NSString *displayPrice; // ivar: _displayPrice
@property (readonly, copy) NSAttributedString *displayPriceLabel; // ivar: _displayPriceLabel
@property (copy) NSString *explanation; // ivar: _explanation
@property (readonly) NSArray *flexList; // ivar: _flexList
@property (readonly, copy) NSArray *inlineImages; // ivar: _inlineImages
@property (copy) NSDictionary *merchantSession; // ivar: _merchantSession
@property (copy) NSString *message; // ivar: _message
@property NSInteger payeeType; // ivar: _payeeType
@property (copy) NSString *paymentSummary; // ivar: _paymentSummary
@property (copy) NSNumber *price; // ivar: _price
@property (copy) NSArray *priceSectionItems; // ivar: _priceSectionItems
@property (copy) NSString *ratingHeader; // ivar: _ratingHeader
@property (copy) NSString *ratingValue; // ivar: _ratingValue
@property NSInteger salableIconType; // ivar: _salableIconType
@property (readonly, copy) NSURL *salableIconURL; // ivar: _salableIconURL
@property (copy) NSString *salableIconURLString; // ivar: _salableIconURLString
@property (copy) NSArray *salableInfo; // ivar: _salableInfo
@property (readonly, copy) NSAttributedString *salableInfoLabel; // ivar: _salableInfoLabel
@property BOOL shouldShowCardPicker; // ivar: _shouldShowCardPicker
@property BOOL shouldSuppressPrice; // ivar: _shouldSuppressPrice
@property BOOL shouldUppercaseText; // ivar: _shouldUppercaseText
@property (copy) NSString *storeName; // ivar: _storeName
@property (copy) NSString *title; // ivar: _title
@property NSInteger titleType; // ivar: _titleType


+(id)stringWithFormattedUsernameForString:(id)arg0 username:(id)arg1 ;
-(NSInteger)_confirmationTitleTypeForStringValue:(id)arg0 ;
-(NSInteger)_inferSalableIconTypeWithBuyParams:(id)arg0 ;
-(NSInteger)_payeeTypeForRequestorValue:(id)arg0 ;
-(NSInteger)_salableIconTypeForString:(id)arg0 ;
-(id)_attributedListForFlexList:(id)arg0 ;
-(id)_attributedStringForAttributedArray:(id)arg0 ;
-(id)_attributedStringForAttributedDictionary:(id)arg0 ;
-(id)_attributedStringForSalableInfoStringArray:(id)arg0 ;
-(id)_attributedStringForString:(id)arg0 ;
-(id)_attributedStringForStringArray:(id)arg0 useGrey:(BOOL)arg1 ;
-(id)_displayPriceLabelForDisplayPrice:(id)arg0 ;
-(id)_greyAttributedStringForAttributedString:(id)arg0 range:(struct _NSRange )arg1 ;
-(id)_replaceBreakingSpaceMarkupForMutableAttributedString:(id)arg0 ;
-(id)_replaceMarkupForMutableAttributedString:(id)arg0 markupType:(NSInteger)arg1 ;
-(id)authKitAuthenticationContextForAccount:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)copyXPCEncoding;
-(id)defaultAuthKitAuthenticationContext;
-(id)init;
-(id)initWithServerResponse:(id)arg0 ;
-(id)initWithServerResponse:(id)arg0 buyParams:(id)arg1 ;
-(id)initWithXPCEncoding:(id)arg0 ;
-(void)_init;
-(void)_lock;
-(void)_parseResponse:(id)arg0 ;
-(void)_stringValuesToUppercase;
-(void)_unlock;


@end


#endif