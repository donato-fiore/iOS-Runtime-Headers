// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HFEVENTBUILDERITEMPROVIDER_H
#define HFEVENTBUILDERITEMPROVIDER_H

@class NSMutableSet, NSSet, HMHome;


#import "HFItemProvider.h"
#import "HFTriggerNaturalLanguageOptions.h"
#import "HFEventTriggerBuilder.h"

@interface HFEventBuilderItemProvider : HFItemProvider

@property (retain, nonatomic) NSMutableSet *eventBuilderItems; // ivar: _eventBuilderItems
@property (retain, nonatomic) NSSet *eventBuilders; // ivar: _eventBuilders
@property (readonly, nonatomic) HMHome *home; // ivar: _home
@property (retain, nonatomic) NSSet *lastUpdateEventBuilders; // ivar: _lastUpdateEventBuilders
@property (retain, nonatomic) NSSet *lastUpdateEventGroups; // ivar: _lastUpdateEventGroups
@property (nonatomic) NSUInteger nameType;
@property (retain, nonatomic) HFTriggerNaturalLanguageOptions *naturalLanguageOptions; // ivar: _naturalLanguageOptions
@property (readonly, nonatomic) HFEventTriggerBuilder *triggerBuilder; // ivar: _triggerBuilder


-(id)_reloadItems;
-(id)eventBuilderGroupsForEventBuilders:(id)arg0 ;
-(id)initWithEventBuilders:(id)arg0 inHome:(id)arg1 ;
-(id)initWithTriggerBuilder:(id)arg0 ;
-(id)items;
-(id)reloadBuilderGroups;
-(id)reloadItems;


@end


#endif