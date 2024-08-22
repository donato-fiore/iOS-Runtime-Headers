// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HUPRESENCEACTIVATIONOPTIONITEM_H
#define HUPRESENCEACTIVATIONOPTIONITEM_H

@class HFItem, HMHome, HFSelectedUserCollection;



@interface HUPresenceActivationOptionItem : HFItem

@property (readonly, nonatomic) NSUInteger activationGranularity; // ivar: _activationGranularity
@property (readonly, nonatomic) NSUInteger eventType; // ivar: _eventType
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (nonatomic, getter=isSelected) BOOL selected; // ivar: _selected
@property (retain, nonatomic) HFSelectedUserCollection *selectedUsers; // ivar: _selectedUsers
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


-(id)_subclass_updateWithOptions:(id)arg0 ;
-(id)_summaryTitle;
-(id)init;
-(id)initWithEventType:(NSUInteger)arg0 selectedUsers:(id)arg1 activationGranularity:(NSUInteger)arg2 style:(NSUInteger)arg3 home:(id)arg4 ;


@end


#endif