// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WLKOFFERLISTING_H
#define WLKOFFERLISTING_H

@class NSArray;

#import <Foundation/Foundation.h>

#import "WLKStoreOffer.h"

@interface WLKOfferListing : NSObject

@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreBuyOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreGetOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRedownloadOffer;
@property (readonly, copy, nonatomic) WLKStoreOffer *bestStoreRentalOffer;
@property (readonly, copy, nonatomic) NSArray *storeOffers; // ivar: _storeOffers


-(BOOL)_prefersSD;
-(id)_bestStoreOfferForOfferType:(NSUInteger)arg0 ;
-(id)_filteredStoreContentSource:(id)arg0 ;
-(id)_highDefinitionPredicate;
-(id)_standardDefinitionPredicate;
-(id)_storeOffersFromMAPIDictionaries:(id)arg0 ;
-(id)initWithMAPIDictionaries:(id)arg0 ;


@end


#endif