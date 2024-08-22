// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUMATTERACCESSORYCONNECTEDECOSYSTEMITEM_H
#define HUMATTERACCESSORYCONNECTEDECOSYSTEMITEM_H

@class HFItem, NSSet, HMCHIPEcosystem, NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;



@interface HUMatterAccessoryConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, nonatomic) NSSet *chipAccessoryPairings; // ivar: _chipAccessoryPairings
@property (readonly, nonatomic) HMCHIPEcosystem *connectedEcosystem; // ivar: _connectedEcosystem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithConnectedEcosystem:(id)arg0 chipAccessoryPairings:(id)arg1 ;


@end


#endif