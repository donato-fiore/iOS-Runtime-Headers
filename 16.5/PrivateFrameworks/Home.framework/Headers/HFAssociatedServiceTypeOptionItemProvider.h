// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFASSOCIATEDSERVICETYPEOPTIONITEMPROVIDER_H
#define HFASSOCIATEDSERVICETYPEOPTIONITEMPROVIDER_H

@class HMHome, HMService, NSString;


#import "HFStaticItemProvider.h"

@interface HFAssociatedServiceTypeOptionItemProvider : HFStaticItemProvider

@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) HMService *service; // ivar: _service
@property (readonly, nonatomic) NSString *serviceType; // ivar: _serviceType


+(id)_allItemsForService:(id)arg0 serviceType:(id)arg1 ;
+(id)_itemForService:(id)arg0 associatedServiceType:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithItems:(id)arg0 ;
-(id)initWithService:(id)arg0 serviceType:(id)arg1 home:(id)arg2 ;
-(id)initWithServiceType:(id)arg0 home:(id)arg1 ;


@end


#endif