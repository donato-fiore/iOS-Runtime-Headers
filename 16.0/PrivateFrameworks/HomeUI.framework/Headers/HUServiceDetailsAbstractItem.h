// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSERVICEDETAILSABSTRACTITEM_H
#define HUSERVICEDETAILSABSTRACTITEM_H

@class HFItem, HMHome, HFItem<HFServiceLikeItem>;



@interface HUServiceDetailsAbstractItem : HFItem

@property (retain, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFItem<HFServiceLikeItem> *sourceServiceItem; // ivar: _sourceServiceItem


-(BOOL)canShowAsIndividualTiles;
-(BOOL)isAccessory;
-(BOOL)isAccessoryDisplayedAsIndividualTiles;
-(BOOL)isBridge;
-(BOOL)isBridged;
-(BOOL)isCHIPAccessory;
-(BOOL)isCamera;
-(BOOL)isContainedInAParent;
-(BOOL)isContainedWithinItemGroup;
-(BOOL)isItemGroup;
-(BOOL)isMediaAccessory;
-(BOOL)isMediaAccessoryGroup;
-(BOOL)isMultiServiceAccessory;
-(BOOL)isNetworkRouter;
-(BOOL)isNetworkRouterSatellite;
-(BOOL)isNotificationSupportedCamera;
-(BOOL)isSensorService;
-(BOOL)isService;
-(BOOL)isVisibleAsBridge;
-(BOOL)mediaAccessoryGroupIsReachable;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSourceServiceItem:(id)arg0 home:(id)arg1 ;
-(id)sourceAccessory;


@end


#endif