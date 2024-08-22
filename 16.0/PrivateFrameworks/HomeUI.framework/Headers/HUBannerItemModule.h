// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBANNERITEMMODULE_H
#define HUBANNERITEMMODULE_H

@class HFItemModule, NSString, NSSet, HFTransformItemProvider;
@protocol HFItemHiding;


#import "HUBannerItemProvider.h"
#import "HUDashboardContext.h"

@interface HUBannerItemModule : HFItemModule <HFItemHiding>



@property (retain, nonatomic) HUBannerItemProvider *bannerItemProvider; // ivar: _bannerItemProvider
@property (readonly, nonatomic) HUDashboardContext *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSSet *hiddenBanners; // ivar: _hiddenBanners
@property (retain, nonatomic) HFTransformItemProvider *statusBannerItemProvider; // ivar: _statusBannerItemProvider
@property (readonly) Class superclass;


+(Class)_statusBannerItemClassForStatusItemClass:(Class)arg0 ;
-(id)_itemsToHideInSet:(id)arg0 ;
-(id)buildItemProviders;
-(id)buildSectionsWithDisplayedItems:(id)arg0 ;
-(id)initWithContext:(id)arg0 itemUpdater:(id)arg1 ;


@end


#endif