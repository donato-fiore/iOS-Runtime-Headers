// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCONNECTEDECOSYSTEMITEM_H
#define HUCONNECTEDECOSYSTEMITEM_H

@class HFItem, NSNumber, HMCHIPAccessoryPairing, HMCHIPHome, NSString;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;



@interface HUConnectedEcosystemItem : HFItem <HFHomeKitItemProtocol>



@property (retain, nonatomic) NSNumber *accessoryInHomeCount; // ivar: _accessoryInHomeCount
@property (readonly, nonatomic) HMCHIPAccessoryPairing *chipAccessoryParing; // ivar: _chipAccessoryParing
@property (readonly, nonatomic) HMCHIPHome *connectedEcosystemHome; // ivar: _connectedEcosystemHome
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (nonatomic) BOOL isAppleHome; // ivar: _isAppleHome
@property (readonly, nonatomic) BOOL removalMode; // ivar: _removalMode
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithConnectedEcosystemHome:(id)arg0 accessoryPairing:(id)arg1 removalMode:(BOOL)arg2 accessoryInHomeCount:(id)arg3 ;
-(id)initWithConnectedEcosystemHome:(id)arg0 removalMode:(BOOL)arg1 accessoryInHomeCount:(id)arg2 ;
-(id)initWithConnectedEcosystemHome:(id)arg0 removalMode:(BOOL)arg1 accessoryPairing:(id)arg2 ;


@end


#endif