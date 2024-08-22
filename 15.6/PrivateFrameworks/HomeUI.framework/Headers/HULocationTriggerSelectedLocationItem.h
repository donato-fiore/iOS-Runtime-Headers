// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULOCATIONTRIGGERSELECTEDLOCATIONITEM_H
#define HULOCATIONTRIGGERSELECTEDLOCATIONITEM_H

@class HFItem, HFEventTriggerBuilder;



@interface HULocationTriggerSelectedLocationItem : HFItem

@property (readonly, nonatomic) BOOL locationCanBeEdited;
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(BOOL)_locationIsHome;
-(id)_locationTitle;
-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)init;
-(id)initWithTriggerBuilder:(id)arg0 ;


@end


#endif