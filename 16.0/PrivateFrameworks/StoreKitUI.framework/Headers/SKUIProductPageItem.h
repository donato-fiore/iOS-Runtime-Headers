// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIPRODUCTPAGEITEM_H
#define SKUIPRODUCTPAGEITEM_H

@class NSArray, NSMutableDictionary, NSURL, NSString;


#import "SKUIItem.h"
#import "SKUIItemContentRating.h"
#import "SKUIDeveloperInfo.h"
#import "SKUIStoreNotes.h"

@interface SKUIProductPageItem : SKUIItem {
    NSArray *_childItemIdentifiers;
    NSMutableDictionary *_loadedChildItems;
}


@property (readonly, nonatomic) NSURL *artistPageURL; // ivar: _artistPageURL
@property (readonly, nonatomic) SKUIItemContentRating *contentRating; // ivar: _contentRating
@property (readonly, nonatomic) NSString *copyrightString; // ivar: _copyrightString
@property (readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // ivar: _developerInfo
@property (readonly, nonatomic) NSArray *inAppPurchases; // ivar: _inAppPurchases
@property (readonly, nonatomic) NSString *installationRequirementsDescription; // ivar: _installationRequirementsDescription
@property (readonly, nonatomic) NSString *itemDescription; // ivar: _itemDescription
@property (readonly, nonatomic) NSString *lastUpdateDateString; // ivar: _lastUpdateDateString
@property (readonly, nonatomic) NSString *licenseAgreementURLString; // ivar: _licenseAgreementURLString
@property (readonly, nonatomic) NSArray *parentBundleItemIdentifiers; // ivar: _parentBundleItemIdentifiers
@property (readonly, nonatomic) NSString *privacyPolicyURLString; // ivar: _privacyPolicyURLString
@property (readonly, nonatomic) NSString *regularPriceString; // ivar: _regularPriceString
@property (readonly, nonatomic) NSArray *releaseNotes; // ivar: _releaseNotes
@property (readonly, nonatomic) NSString *reviewsURLString; // ivar: _reviewsURLString
@property (readonly, nonatomic) NSArray *screenshots; // ivar: _screenshots
@property (readonly, nonatomic) NSArray *secondaryContentRatings; // ivar: _secondaryContentRatings
@property (readonly, nonatomic) NSString *sellerName; // ivar: _sellerName
@property (readonly, nonatomic) NSString *shortenedProductPageURLString; // ivar: _shortenedProductPageURLString
@property (readonly, nonatomic) SKUIStoreNotes *storeNotes; // ivar: _storeNotes
@property (readonly, nonatomic) NSString *supportURLString; // ivar: _supportURLString
@property (readonly, nonatomic) NSInteger supportedFeatures; // ivar: _supportedFeatures
@property (readonly, nonatomic) NSUInteger supportedGameCenterFeatures; // ivar: _supportedGameCenterFeatures
@property (readonly, nonatomic) NSString *updateDescription; // ivar: _updateDescription


-(NSInteger)numberOfChildItems;
-(id)childItemForIdentifier:(id)arg0 ;
-(id)childItemIdentifiers;
-(id)initWithLookupDictionary:(id)arg0 ;
-(id)loadedChildItems;
-(void)_setVersionHistory:(id)arg0 ;


@end


#endif