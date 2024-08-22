// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FCPURCHASEOFFERABLECONFIGURATION_H
#define FCPURCHASEOFFERABLECONFIGURATION_H

@class NSString;

#import <Foundation/Foundation.h>


@interface FCPurchaseOfferableConfiguration : NSObject

@property (nonatomic) BOOL allowsPublisherPadApp; // ivar: _allowsPublisherPadApp
@property (nonatomic) BOOL allowsPublisherPhoneApp; // ivar: _allowsPublisherPhoneApp
@property (nonatomic) BOOL allowsPublisherWebsite; // ivar: _allowsPublisherWebsite
@property (nonatomic) BOOL preferredOffer; // ivar: _preferredOffer
@property (copy, nonatomic) NSString *purchaseID; // ivar: _purchaseID


-(id)initWithPurchaseID:(id)arg0 allowsPublisherPhoneApp:(BOOL)arg1 allowsPublisherPadApp:(BOOL)arg2 allowsPublisherWebsite:(BOOL)arg3 preferredOffer:(BOOL)arg4 ;


@end


#endif