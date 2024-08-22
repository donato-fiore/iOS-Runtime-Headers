// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFSERVICEBUILDERITEM_H
#define HFSERVICEBUILDERITEM_H

@class NSString, HMHome, NSSet;
@protocol HFItemBuilderItem, HFServiceLikeItem, HFHomeKitObject, HFCharacteristicValueSource;


#import "HFItem.h"
#import "HFServiceBuilder.h"
#import "HFServiceItem.h"

@interface HFServiceBuilderItem : HFItem <HFItemBuilderItem, HFServiceLikeItem>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HFServiceBuilder *serviceBuilder; // ivar: _serviceBuilder
@property (readonly, nonatomic) HFServiceItem *serviceItem; // ivar: _serviceItem
@property (readonly, nonatomic) NSSet *services;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<HFCharacteristicValueSource> *valueSource;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessories;
-(id)copyWithValueSource:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithServiceBuilder:(id)arg0 ;
-(id)initWithServiceBuilder:(id)arg0 valueSource:(id)arg1 ;
-(id)namingComponentForHomeKitObject;


@end


#endif