// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUMATTERCONNECTEDHOMEITEM_H
#define HUMATTERCONNECTEDHOMEITEM_H

@class HFItem, HMCHIPAccessoryPairing, HMCHIPHome, NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;



@interface HUMatterConnectedHomeItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, nonatomic) HMCHIPAccessoryPairing *chipAccessoryPairing; // ivar: _chipAccessoryPairing
@property (readonly, nonatomic) HMCHIPHome *connectedHome; // ivar: _connectedHome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)initWithConnectedHome:(id)arg0 accessoryPairing:(id)arg1 ;


@end


#endif