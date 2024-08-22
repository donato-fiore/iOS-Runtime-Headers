// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUSHORTCUTSTRIGGERVIEWACCESSORYPICKERCONFIGURATION_H
#define HUSHORTCUTSTRIGGERVIEWACCESSORYPICKERCONFIGURATION_H

@protocol HFAccessoryLikeObjectContainer;

#import <Foundation/Foundation.h>


@interface HUShortcutsTriggerViewAccessoryPickerConfiguration : NSObject

@property (nonatomic) NSUInteger accessoryPool; // ivar: _accessoryPool
@property (retain, nonatomic) NSObject<HFAccessoryLikeObjectContainer> *customAccessoryContainer; // ivar: _customAccessoryContainer
@property (copy, nonatomic) id *filterBlock; // ivar: _filterBlock
@property (nonatomic) NSUInteger objectLevel; // ivar: _objectLevel
@property (nonatomic) NSUInteger sectionGroupingStyle; // ivar: _sectionGroupingStyle
@property (nonatomic) BOOL servicesOnly; // ivar: _servicesOnly


-(id)init;


@end


#endif