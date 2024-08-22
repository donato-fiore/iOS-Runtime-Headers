// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKWALLETMERCHANTRESPONSE_H
#define MKWALLETMERCHANTRESPONSE_H

@class GEOPDMerchantLookupResult, NSString;
@protocol GEOMapItem;

#import <Foundation/Foundation.h>

#import "MKMapItem.h"
#import "MKWalletMerchantStylingInfo.h"

@interface MKWalletMerchantResponse : NSObject {
    id<GEOMapItem> *_mapItem;
    GEOPDMerchantLookupResult *_merchantLookupResult;
}


@property (readonly, nonatomic) NSString *heroImageProviderName;
@property (readonly, nonatomic) NSString *localizedPlaceLanguage;
@property (readonly, nonatomic) NSString *localizedPlaceName;
@property (readonly, nonatomic) NSString *localizedWalletCategoryLanguage;
@property (readonly, nonatomic) NSString *localizedWalletCategoryName;
@property (readonly, nonatomic) MKMapItem *mapItem;
@property (readonly, nonatomic) NSString *mapsCategoryIdentifier;
@property (readonly, nonatomic) MKWalletMerchantStylingInfo *placeStyling;
@property (readonly, nonatomic) NSString *walletCategoryIdentifier;
@property (readonly, nonatomic) MKWalletMerchantStylingInfo *walletCategoryStyling;


-(BOOL)_validHeroImageForPhoto:(id)arg0 ;
-(id)bestHeroImageForSize:(struct CGSize )arg0 allowSmaller:(BOOL)arg1 ;
-(id)initWithGEOMapItem:(id)arg0 ;
-(id)initWithMerchantLookupResult:(id)arg0 ;


@end


#endif