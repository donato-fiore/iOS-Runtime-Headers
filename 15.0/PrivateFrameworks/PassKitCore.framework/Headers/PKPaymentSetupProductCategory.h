// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTSETUPPRODUCTCATEGORY_H
#define PKPAYMENTSETUPPRODUCTCATEGORY_H

@class NSString, NSSet;

#import <Foundation/Foundation.h>

#import "PKPaymentSetupProductImageAssetURLs.h"
#import "PKPaymentSetupProductImageAssets.h"

@interface PKPaymentSetupProductCategory : NSObject

@property (nonatomic) NSUInteger capabilities; // ivar: _capabilities
@property (nonatomic) NSUInteger excludedContexts; // ivar: _excludedContexts
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) PKPaymentSetupProductImageAssetURLs *imageAssetURLs; // ivar: _imageAssetURLs
@property (retain, nonatomic) PKPaymentSetupProductImageAssets *imageAssets; // ivar: _imageAssets
@property (copy, nonatomic) NSString *localizedDisplayName; // ivar: _localizedDisplayName
@property (readonly, copy, nonatomic) NSString *localizedSearchBarDefaultText; // ivar: _localizedSearchBarDefaultText
@property (readonly, copy, nonatomic) NSString *localizedSubtitle; // ivar: _localizedSubtitle
@property (readonly, copy, nonatomic) NSString *localizedTitle; // ivar: _localizedTitle
@property (copy, nonatomic) NSSet *productIdentifiers; // ivar: _productIdentifiers
@property (copy, nonatomic) NSSet *regions; // ivar: _regions


-(BOOL)needsProducts;
-(id)description;
-(id)initWithDictionary:(id)arg0 ;


@end


#endif