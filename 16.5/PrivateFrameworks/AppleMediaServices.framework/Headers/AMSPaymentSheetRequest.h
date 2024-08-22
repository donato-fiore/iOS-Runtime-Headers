// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSPAYMENTSHEETREQUEST_H
#define AMSPAYMENTSHEETREQUEST_H

@class ACAccount, NSString, NSArray, NSNumber, NSDictionary, NSURL, NSAttributedString;

#import <Foundation/Foundation.h>

#import "AMSBiometricsSignatureRequest.h"
#import "AMSCardSingleSelection.h"

@interface AMSPaymentSheetRequest : NSObject

@property (copy, nonatomic) ACAccount *account; // ivar: _account
@property (copy, nonatomic) NSString *accountHeader; // ivar: _accountHeader
@property (readonly, nonatomic) NSUInteger ams_confirmationStyle;
@property (nonatomic, getter=isApplePayClassic) BOOL applePayClassic; // ivar: _applePayClassic
@property (copy, nonatomic) NSArray *attributedList; // ivar: _attributedList
@property (retain, nonatomic) AMSBiometricsSignatureRequest *biometricsRequest; // ivar: _biometricsRequest
@property (nonatomic) NSInteger confirmationTitle; // ivar: _confirmationTitle
@property (copy, nonatomic) NSString *countryCode; // ivar: _countryCode
@property (copy, nonatomic) NSString *currencyCode; // ivar: _currencyCode
@property (copy, nonatomic) NSString *delegateAuthenticateChallenge; // ivar: _delegateAuthenticateChallenge
@property (copy, nonatomic) NSNumber *designVersion; // ivar: _designVersion
@property (copy, nonatomic) NSString *displayPrice; // ivar: _displayPrice
@property (copy, nonatomic) NSString *explanation; // ivar: _explanation
@property (copy, nonatomic) NSArray *flexList; // ivar: _flexList
@property (retain, nonatomic) NSArray *inlineImages; // ivar: _inlineImages
@property (nonatomic) BOOL isDelegateAuthentication;
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
@property (copy, nonatomic) NSDictionary *responseDictionary;
@property (copy, nonatomic) NSDictionary *responseDictionary; // ivar: _responseDictionary
@property (nonatomic) NSInteger salableIcon; // ivar: _salableIcon
@property (copy, nonatomic) NSURL *salableIconURL; // ivar: _salableIconURL
@property (copy, nonatomic) NSArray *salableInfo; // ivar: _salableInfo
@property (copy, nonatomic) NSAttributedString *salableInfoLabel; // ivar: _salableInfoLabel
@property (copy, nonatomic) NSArray *secondaryFlexList; // ivar: _secondaryFlexList
@property (nonatomic) NSInteger secondarySalableIcon; // ivar: _secondarySalableIcon
@property (copy, nonatomic) NSURL *secondarySalableIconURL; // ivar: _secondarySalableIconURL
@property (copy, nonatomic) NSArray *secondarySalableInfo; // ivar: _secondarySalableInfo
@property (copy, nonatomic) NSAttributedString *secondarySalableInfoLabel; // ivar: _secondarySalableInfoLabel
@property (retain, nonatomic) AMSCardSingleSelection *selectedCard; // ivar: _selectedCard
@property (nonatomic) BOOL shouldUppercaseText; // ivar: _shouldUppercaseText
@property (copy, nonatomic) NSString *storeName; // ivar: _storeName
@property (copy, nonatomic) NSArray *styles; // ivar: _styles
@property (copy, nonatomic) NSString *title; // ivar: _title
@property (nonatomic) NSInteger titleType; // ivar: _titleType
@property (copy, nonatomic) NSString *userAgent; // ivar: _userAgent


+(id)attributedStringByRemovingPlaceholderTagsFromAttributedString:(id)arg0 ;
+(id)paymentSheetRequestFromDictionary:(id)arg0 account:(id)arg1 ;
-(BOOL)_shouldDrawGrayBorderForMaskedImage;
-(BOOL)isDesignVersionEqual:(id)arg0 ;
-(BOOL)isDesignVersionEqualOrGreaterThan:(id)arg0 ;
-(BOOL)isDesignVersionLessThan:(id)arg0 ;
-(NSInteger)_imageTypeForURL:(id)arg0 ;
-(NSUInteger)ams_paymentRequestorType;
-(id)_attachInlineImagesToAttributedString:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)_contentItemsForFlexibleList:(id)arg0 assetCache:(id)arg1 designVersion:(id)arg2 bag:(id)arg3 ;
-(id)_replaceImagePlaceholderTag:(id)arg0 withAttributes:(id)arg1 foregroundColor:(NSInteger)arg2 forAttributedString:(id)arg3 ;
-(id)_replaceImagePlaceholderTag:(id)arg0 withImageData:(id)arg1 scale:(float)arg2 tint:(BOOL)arg3 forAttributedString:(id)arg4 ;
-(id)_summaryItemsForAttributedList:(id)arg0 assetCache:(id)arg1 bag:(id)arg2 ;
-(id)ams_contentItemForSalableInfoLabel:(id)arg0 salableIconURL:(id)arg1 salableIcon:(NSInteger)arg2 assetCache:(id)arg3 designVersion:(id)arg4 bag:(id)arg5 ;
-(id)ams_createContentItemForAccount;
-(id)ams_createContentItemForDeviceName:(id)arg0 ;
-(id)ams_createContentItemForRating;
-(id)ams_createContentItemForSalableInfoWithAssetCache:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)ams_createContentItemsForFlexibleListWithAssetCache:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)ams_createContentItemsForPreScreenDialogWithAssetCache:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)ams_createSecondaryContentItemForSalableInfoWithAssetCache:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)ams_createSecondaryContentItemsForFlexibleListWithAssetCache:(id)arg0 designVersion:(id)arg1 bag:(id)arg2 ;
-(id)ams_createSummaryItems;
-(id)ams_createSummaryItemsForAttributedListWithAssetCache:(id)arg0 bag:(id)arg1 ;
-(id)init;
-(struct CGImage *)_createDefaultImageWithImageRef:(struct CGImage *)arg0 size:(struct CGSize )arg1 borderPath:(struct CGPath *)arg2 ;
-(struct CGImage *)_createImageForAssetConfiguration:(id)arg0 outAssetScale:(*float)arg1 ;
-(struct CGImage *)_createImageMaskRefWithSize:(struct CGSize )arg0 andPath:(struct CGPath *)arg1 ;
-(struct CGImage *)_createImageRefForAssetURL:(id)arg0 size:(struct CGSize )arg1 assetType:(NSInteger)arg2 outAssetScale:(*float)arg3 ;
-(struct CGImage *)_createImageRefForImageSource:(struct CGImageSource *)arg0 screenScale:(float)arg1 outAssetScale:(*float)arg2 ;
-(struct CGImage *)_createImageRefForImageURL:(id)arg0 outAssetScale:(*float)arg1 ;
-(struct CGImage *)_createImageRefForPDFURL:(id)arg0 size:(struct CGSize )arg1 outAssetScale:(*float)arg2 ;
-(struct CGImage *)_createImageRefWithURL:(id)arg0 designVersion:(id)arg1 adornmentStyle:(NSInteger)arg2 bag:(id)arg3 ;
-(struct CGImage *)_createMaskedImageRefForImageRef:(struct CGImage *)arg0 withPathRef:(struct CGPath *)arg1 andAdornmentStyle:(NSInteger)arg2 ;
-(struct CGImage *)_createRGBImageRefForGreyScaleImageRef:(struct CGImage *)arg0 width:(NSUInteger)arg1 height:(NSUInteger)arg2 ;
-(struct CGImage *)_createRatingImageWithStringValue:(id)arg0 assetScale:(*float)arg1 ;
-(struct CGPath *)_createBorderPathForAdornmentStyle:(NSInteger)arg0 iconWidth:(CGFloat)arg1 iconHeight:(CGFloat)arg2 ;


@end


#endif