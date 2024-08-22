// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUCHIMEONHOMEPODSINGLEITEM_H
#define HUCHIMEONHOMEPODSINGLEITEM_H

@class HFItem, HMHome;
@protocol HFHomeKitObject;



@interface HUChimeOnHomePodSingleItem : HFItem

@property (nonatomic) BOOL accessoryIsCameraWithDoorbell; // ivar: _accessoryIsCameraWithDoorbell
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSObject<HFHomeKitObject> *homeKitObject; // ivar: _homeKitObject


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithHome:(id)arg0 homeKitObject:(id)arg1 ;


@end


#endif