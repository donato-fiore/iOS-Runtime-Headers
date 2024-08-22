// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UISTATUSBARDISPLAYITEMPLACEMENTGROUP_H
#define _UISTATUSBARDISPLAYITEMPLACEMENTGROUP_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface _UIStatusBarDisplayItemPlacementGroup : NSObject

@property (nonatomic) BOOL enabled;
@property (readonly, nonatomic) NSInteger maximumPriority; // ivar: _maximumPriority
@property (readonly, nonatomic) NSInteger minimumPriority; // ivar: _minimumPriority
@property (copy, nonatomic) NSArray *placements; // ivar: _placements


+(id)groupWithPriority:(NSInteger)arg0 placements:(id)arg1 ;


@end


#endif