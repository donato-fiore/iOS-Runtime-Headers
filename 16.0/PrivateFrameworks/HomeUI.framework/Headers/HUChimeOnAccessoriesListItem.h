// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUCHIMEONACCESSORIESLISTITEM_H
#define HUCHIMEONACCESSORIESLISTITEM_H

@class HFItem, HMHome;



@interface HUChimeOnAccessoriesListItem : HFItem

@property (nonatomic) BOOL accessoryIsCameraWithDoorbell; // ivar: _accessoryIsCameraWithDoorbell
@property (readonly, nonatomic) HMHome *home; // ivar: _home


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithAccessory:(id)arg0 ;
-(id)initWithHome:(id)arg0 ;


@end


#endif