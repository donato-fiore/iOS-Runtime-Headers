// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSPAYMENTSHEETREQUEST_H
#define AMSPAYMENTSHEETREQUEST_H

@class ACAccount, NSString, NSArray, NSDictionary, NSNumber, NSURL, NSAttributedString;

#import <Foundation/Foundation.h>

#import "AMSBiometricsSignatureRequest.h"

@interface AMSPaymentSheetRequest : NSObject

@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *accountHeader; // ivar: _accountHeader
@property (readonly, nonatomic) NSUInteger ams_confirmationStyle;
@property (readonly, nonatomic) NSUInteger ams_paymentRequestorType;
@property (nonatomic, getter=isApplePayClassic) BOOL applePayClassic; // ivar: _applePayClassic
@property (copy, nonatomic) NSArray *attributedList; // ivar: _attributedList
@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // ivar: _biometricsRequest
@property (nonatomic) NSInteger confirmationTitle; // ivar: _confirmationTitle
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *delegateAuthenticateChallenge; // ivar: _delegateAuthenticateChallenge
@property (copy, nonatomic) NSString *displayPrice; // ivar: _displayPrice
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (copy, nonatomic) NSArray *flexList; // ivar: _flexList
@property (retain, nonatomic) NSArray *inlineImages; // ivar: _inlineImages
@property (nonatomic) BOOL isDelegateAuthentication; // ivar: _isDelegateAuthentication
@property (retain, nonatomic) NSString *logKey; // ivar: _logKey
@property (copy, nonatomic) NSDictionary *merchantSession; // ivar: _merchantSession
@property (copy, nonatomic) NSString *message; // ivar: _message
@property (nonatomic) NSInteger payee; // ivar: _payee
@property (copy, nonatomic) NSString *paymentSession; // ivar: _paymentSession
@property (copy, nonatomic) NSString *paymentSummary; // ivar: _paymentSummary
@property (copy, nonatomic) NSArray *preSheetDialog; // ivar: _preSheetDialog
@property (copy, nonatomic) NSNumber *price; // ivar: _price
@property (copy, nonatomic) NSArray *priceSectionItems; // ivar: _priceSectionItems
@property (copy, nonatomic) NSString *ratingHeader; // ivar: _ratingHeader
@property (copy, nonatomic) NSString *ratingValue; // ivar: _ratingValue
@property (nonatomic) BOOL requiresAuthorization; // ivar: _requiresAuthorization
@property (readonly, nonatomic) BOOL requiresDelegateAuthentication;
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (nonatomic) NSInteger salableIcon; // ivar: _salableIcon
@property (copy, nonatomic) NSURL *salableIconURL; // ivar: _salableIconURL
@property (copy, nonatomic) NSArray *salableInfo; // ivar: _salableInfo
@property (copy, nonatomic) NSAttributedString *salableInfoLabel; // ivar: _salableInfoLabel
@property (nonatomic) BOOL shouldUppercaseText; // ivar: _shouldUppercaseText
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleType; // ivar: _titleType
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


-(NSInteger)_imageTypeForURL:(id)arg0 ;
-(NSUInteger)_countImagePlaceholderTags:(id)arg0 ;
-(id)_contentItemsForFlexibleList:(id)arg0 assetCache:(id)arg1 bag:(id)arg2 ;
-(id)_removeAllImagePlaceholderTags:(id)arg0 ;
-(id)_replaceImagePlaceholderTagWithImageData:(id)arg0 tag:(id)arg1 data:(id)arg2 scale:(float)arg3 tint:(BOOL)arg4 ;
-(id)_summaryItemsForAttributedList:(id)arg0 assetCache:(id)arg1 bag:(id)arg2 ;
-(id)ams_createContentItemForAccount;
-(id)ams_createContentItemForRating;
-(id)ams_createContentItemForSalableInfoWithAssetCache:(id)arg0 bag:(id)arg1 ;
-(id)ams_createContentItemsForFlexibleListWithAssetCache:(id)arg0 bag:(id)arg1 ;
-(id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)arg0 bag:(id)arg1 ;
-(id)ams_createSummaryItems;
-(id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)arg0 bag:(id)arg1 ;
-(struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg0 size:(struct CGSize )arg1 borderPath:(struct CGPath *)arg2 ;
-(struct CGImage *)_createImageForResourceName:(id)arg0 outAssetScale:(*float)arg1 ;
-(struct CGImage *)_createImageMaskRefWithSize:(struct CGSize )arg0 andPath:(struct CGPath *)arg1 ;
-(struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg0 screenScale:(float)arg1 outAssetScale:(*float)arg2 ;
-(struct CGImage *)_createImageRefForImageURL:(id)arg0 outAssetScale:(*float)arg1 ;
-(struct CGImage *)_createImageRefWithURL:(id)arg0 adornmentStyle:(NSInteger)arg1 bag:(id)arg2 ;
-(struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg0 withPathRef:(struct CGPath *)arg1 andAdornmentStyle:(NSInteger)arg2 ;
-(struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(struct CGImage *)_createRatingImageWithStringValue:(id)arg0 assetScale:(*float)arg1 ;
-(struct CGPath *)_createBorderPathForAdornmentStyle:(NSInteger)arg0 iconWidth:(CGFloat)arg1 iconHeight:(CGFloat)arg2 ;


@end


#endif