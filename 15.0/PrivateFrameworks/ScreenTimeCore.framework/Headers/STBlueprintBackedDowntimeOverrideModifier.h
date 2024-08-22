// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STBLUEPRINTBACKEDDOWNTIMEOVERRIDEMODIFIER_H
#define STBLUEPRINTBACKEDDOWNTIMEOVERRIDEMODIFIER_H

@protocol STDowntimeOverrideModifier;

#import <Foundation/Foundation.h>

#import "STDowntimeOverride.h"
#import "STBlueprint.h"

@interface STBlueprintBackedDowntimeOverrideModifier : NSObject <STDowntimeOverrideModifier>



@property (readonly, copy) STDowntimeOverride *activeOverride;
@property (readonly) STBlueprint *downtimeBlueprint; // ivar: _downtimeBlueprint


-(BOOL)_saveWithError:(*id)arg0 ;
-(BOOL)applyDowntimeOverride:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeDowntimeOverrideWithError:(*id)arg0 ;
-(id)initWithDowntimeBlueprint:(id)arg0 ;
-(void)_deleteOrphanedOrTombstonedDowntimeOverridesInContext:(id)arg0 ;
-(void)_tombstoneDowntimeOverride;


@end


#endif