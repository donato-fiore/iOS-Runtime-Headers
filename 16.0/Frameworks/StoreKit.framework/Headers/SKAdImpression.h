// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKADIMPRESSION_H
#define SKADIMPRESSION_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface SKAdImpression : NSObject

@property (retain, nonatomic) NSNumber *adCampaignIdentifier; // ivar: _adCampaignIdentifier
@property (retain, nonatomic) NSString *adDescription; // ivar: _adDescription
@property (retain, nonatomic) NSString *adImpressionIdentifier; // ivar: _adImpressionIdentifier
@property (retain, nonatomic) NSString *adNetworkIdentifier; // ivar: _adNetworkIdentifier
@property (retain, nonatomic) NSString *adPurchaserName; // ivar: _adPurchaserName
@property (retain, nonatomic) NSString *adType; // ivar: _adType
@property (retain, nonatomic) NSNumber *advertisedAppStoreItemIdentifier; // ivar: _advertisedAppStoreItemIdentifier
@property (retain, nonatomic) NSString *signature; // ivar: _signature
@property (retain, nonatomic) NSNumber *sourceAppStoreItemIdentifier; // ivar: _sourceAppStoreItemIdentifier
@property (retain, nonatomic) NSNumber *timestamp; // ivar: _timestamp
@property (retain, nonatomic) NSString *version; // ivar: _version


-(id)initWithSourceAppStoreItemIdentifier:(id)arg0 advertisedAppStoreItemIdentifier:(id)arg1 adNetworkIdentifier:(id)arg2 adCampaignIdentifier:(id)arg3 adImpressionIdentifier:(id)arg4 timestamp:(id)arg5 signature:(id)arg6 version:(id)arg7 ;


@end


#endif