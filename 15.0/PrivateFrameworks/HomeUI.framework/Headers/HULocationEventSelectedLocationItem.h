// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONEVENTSELECTEDLOCATIONITEM_H
#define HULOCATIONEVENTSELECTEDLOCATIONITEM_H

@class HFItem, HFEventBuilder<HFLocationEventBuilder>, HMHome;



@interface HULocationEventSelectedLocationItem : HFItem

@property (retain, nonatomic) HFEventBuilder<HFLocationEventBuilder> *eventBuilder; // ivar: _eventBuilder
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic) BOOL locationCanBeEdited; // ivar: _locationCanBeEdited


-(BOOL)_locationIsHome;
-(id)_locationTitle;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithEvent:(id)arg0 inHome:(id)arg1 ;


@end


#endif