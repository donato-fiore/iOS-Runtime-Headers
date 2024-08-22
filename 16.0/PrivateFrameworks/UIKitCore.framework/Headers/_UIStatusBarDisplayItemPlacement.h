// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARDISPLAYITEMPLACEMENT_H
#define _UISTATUSBARDISPLAYITEMPLACEMENT_H

@class NSHashTable, NSSet, NSDictionary;
@protocol _UIStatusBarPrioritized;

#import <Foundation/Foundation.h>

#import "_UIStatusBarIdentifier.h"

@interface _UIStatusBarDisplayItemPlacement : NSObject <_UIStatusBarPrioritized>



@property (readonly, copy, nonatomic) NSHashTable *allRequiredPlacements; // ivar: _allRequiredPlacements
@property (readonly, copy, nonatomic) NSHashTable *anyRequiredPlacements; // ivar: _anyRequiredPlacements
@property (nonatomic, getter=isEnabled) BOOL enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSHashTable *excludedPlacements; // ivar: _excludedPlacements
@property (readonly, copy, nonatomic) NSSet *excludedRegionIdentifiers; // ivar: _excludedRegionIdentifiers
@property (readonly, copy, nonatomic) _UIStatusBarIdentifier *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSHashTable *includedPlacements; // ivar: _includedPlacements
@property (readonly, copy, nonatomic) NSDictionary *itemInfo; // ivar: _itemInfo
@property (nonatomic) NSInteger priority; // ivar: _priority


+(id)placementWithIdentifier:(id)arg0 priority:(NSInteger)arg1 ;
+(id)spacerPlacementWithSize:(struct CGSize )arg0 priority:(NSInteger)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)disabledPlacement;
-(id)excludingAllPlacementsInRegions:(id)arg0 ;
-(id)excludingAllPlacementsInRegions:(id)arg0 exceptPlacements:(id)arg1 ;
-(id)excludingPlacements:(id)arg0 ;
-(id)requiringAllPlacements:(id)arg0 ;
-(id)requiringAnyPlacements:(id)arg0 ;
-(id)withItemInfo:(id)arg0 ;


@end


#endif