// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HFSERVICEACTIONITEMPROVIDER_H
#define HFSERVICEACTIONITEMPROVIDER_H

@class NSMutableSet, HMActionSet, HFItemBuilder<HFActionSetBuilderProtocol>, HMHome;
@protocol HFActionSetValueSourceDelegate;


#import "HFItemProvider.h"
#import "HFActionSetValueSource.h"

@interface HFServiceActionItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *actionItems; // ivar: _actionItems
@property (retain, nonatomic) HMActionSet *actionSet; // ivar: _actionSet
@property (retain, nonatomic) HFItemBuilder<HFActionSetBuilderProtocol> *actionSetBuilder; // ivar: _actionSetBuilder
@property (weak, nonatomic) NSObject<HFActionSetValueSourceDelegate> *actionSetValueSourceDelegate;
@property (copy, nonatomic) id *filter; // ivar: _filter
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) HFActionSetValueSource *valueSource; // ivar: _valueSource


-(id)_actionItemForCharacteristic:(id)arg0 addedActionItems:(id)arg1 home:(id)arg2 ;
-(id)_actionItemForMediaProfile:(id)arg0 addedActionItems:(id)arg1 home:(id)arg2 ;
-(id)_addOrUpdateActionItemWithAction:(id)arg0 actionBuilder:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3 ;
-(id)_addOrUpdateActionItemWithMediaAction:(id)arg0 mediaActionBuilder:(id)arg1 addedActionItems:(id)arg2 home:(id)arg3 ;
-(id)_createActionItemForCharacteristic:(id)arg0 home:(id)arg1 ;
-(id)_createActionItemForMediaProfile:(id)arg0 home:(id)arg1 ;
-(id)_findServiceActionForIdentifier:(id)arg0 addedActionItems:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithHome:(id)arg0 actionSet:(id)arg1 ;
-(id)initWithHome:(id)arg0 actionSetBuilder:(id)arg1 ;
-(id)invalidationReasons;
-(id)items;
-(id)reloadItems;


@end


#endif