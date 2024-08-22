// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBANNERITEMPROVIDER_H
#define HUBANNERITEMPROVIDER_H

@class HFStaticItemProvider, HMHome;


#import "HUCameraUpgradeOfferBannerItem.h"
#import "HUMultiUserTokenFixBannerItem.h"
#import "HUSetupBannerItem.h"

@interface HUBannerItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HUCameraUpgradeOfferBannerItem *cameraUpgradeOfferBannerItem; // ivar: _cameraUpgradeOfferBannerItem
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HUMultiUserTokenFixBannerItem *multiUserTokenFixBannerItem; // ivar: _multiUserTokenFixBannerItem
@property (readonly, nonatomic) HUSetupBannerItem *setupBannerItem; // ivar: _setupBannerItem


+(id)_bannerItemClasses;
+(id)bannerItemComparator:(SEL)arg0 ;
+(id)sortOrderForBannerItemCategory:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItems:(id)arg0 ;


@end


#endif