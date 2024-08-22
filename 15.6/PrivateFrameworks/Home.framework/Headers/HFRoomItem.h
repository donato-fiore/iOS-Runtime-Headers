// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFROOMITEM_H
#define HFROOMITEM_H

@class NSString, HMHome, HMRoom;
@protocol HFHomeKitItemProtocol, HFHomeKitObject;


#import "HFItem.h"

@interface HFRoomItem : HFItem <HFHomeKitItemProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (readonly, nonatomic) NSObject<HFHomeKitObject> *homeKitObject;
@property (readonly, nonatomic) HMRoom *room; // ivar: _room
@property (readonly) Class superclass;


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 room:(id)arg1 ;
-(id)togglePowerState;


@end


#endif