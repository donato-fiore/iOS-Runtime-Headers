// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTMARKET_H
#define PKPAYMENTMARKET_H

@class NSDictionary, NSString, NSSet;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentMarket : NSObject <NSSecureCoding>

 {
    NSDictionary *_localizedNames;
    NSString *_notificationAssetIdentifier;
    NSDictionary *_renotifyCampaigns;
    NSSet *_geoFences;
}


@property (readonly) NSInteger classification; // ivar: _classification
@property (readonly, copy) NSSet *expressCredentialTypes; // ivar: _expressCredentialTypes
@property (readonly, copy) NSSet *expressTransitNetworks; // ivar: _expressTransitNetworks
@property (readonly) NSUInteger expressUpgradeHideDisableAction; // ivar: _expressUpgradeHideDisableAction
@property (readonly) CGFloat expressUpgradePromoteDuration; // ivar: _expressUpgradePromoteDuration
@property (readonly, copy) NSString *identifier; // ivar: _identifier
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *notificationAssetIdentifier;
@property (readonly) BOOL productsRequiredForRegion; // ivar: _productsRequiredForRegion
@property (readonly, copy) NSString *region; // ivar: _region
@property (readonly, copy) NSString *renotifyDCICampaignIdentifier;
@property (readonly, copy) NSString *renotifyOpenLoopCampaignIdentifier;
@property (readonly) BOOL shouldConsiderCellularRegion; // ivar: _shouldConsiderCellularRegion
@property (readonly, copy) NSSet *supportedCredentialTypes; // ivar: _supportedCredentialTypes
@property (readonly, copy) NSSet *supportedTransitNetworks; // ivar: _supportedTransitNetworks
@property (readonly) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)containsLocation:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)shortestDistanceFromLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)_geoFenceWithDictionary:(id)arg0 ;
-(id)analyticsReportingNameValue;
-(id)description;
-(id)englishName;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 forDeviceClass:(id)arg1 version:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif