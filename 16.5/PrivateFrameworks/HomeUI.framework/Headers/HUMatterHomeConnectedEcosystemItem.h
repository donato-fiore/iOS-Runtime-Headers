// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERHOMECONNECTEDECOSYSTEMITEM_H
#define HUMATTERHOMECONNECTEDECOSYSTEMITEM_H

@class HFItem, NSSet, HMCHIPEcosystem, NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;



@interface HUMatterHomeConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, nonatomic) NSSet *accessoryUUIDs; // ivar: _accessoryUUIDs
@property (readonly, nonatomic) HMCHIPEcosystem *connectedEcosystem; // ivar: _connectedEcosystem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithConnectedEcosystem:(id)arg0 accessoryUUIDs:(id)arg1 ;


@end


#endif