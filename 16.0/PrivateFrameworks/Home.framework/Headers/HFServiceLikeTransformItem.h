// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSERVICELIKETRANSFORMITEM_H
#define HFSERVICELIKETRANSFORMITEM_H

@class NSString, NSSet, HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory>;
@protocol HFServiceVendor, HFActionBuilderFactory;


#import "HFHomeKitTransformItem.h"

@interface HFServiceLikeTransformItem : HFHomeKitTransformItem <HFServiceVendor, HFActionBuilderFactory>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSSet *services;
@property (readonly, nonatomic) HFItem<HFHomeKitItemProtocol><HFServiceVendor><HFActionBuilderFactory> *sourceServicePickerItem;
@property (readonly) Class superclass;


-(BOOL)actionsMayRequireDeviceUnlock;
-(BOOL)containsActions;
-(id)accessories;
-(id)currentStateActionBuildersForHome:(id)arg0 ;


@end


#endif