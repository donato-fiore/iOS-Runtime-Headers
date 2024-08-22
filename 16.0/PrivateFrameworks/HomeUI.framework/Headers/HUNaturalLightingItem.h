// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUNATURALLIGHTINGITEM_H
#define HUNATURALLIGHTINGITEM_H

@class HFTransformItem, NSString, HMRoom, NSSet;
@protocol HFHomeKitItemProtocol, HFRoomContextProviding, HFHomeKitObject;



@interface HUNaturalLightingItem : HFTransformItem <HFHomeKitItemProtocol, HFRoomContextProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) HMRoom *hf_parentRoom;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) NSSet *lightProfiles;
@property (nonatomic) BOOL selected; // ivar: _selected
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)accessory;
-(id)initWithSourceItem:(id)arg0 defaultSelected:(BOOL)arg1 ;


@end


#endif