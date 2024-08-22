// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AXELEMENTGROUPER_H
#define AXELEMENTGROUPER_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface AXElementGrouper : NSObject

@property (nonatomic) NSInteger heuristics; // ivar: _heuristics
@property (readonly, nonatomic) NSUInteger maximumGroupSize;
@property (readonly, nonatomic) NSUInteger minimumGroupSize;
@property (readonly, nonatomic) NSUInteger preferredGroupSize;
@property (readonly, nonatomic) CGFloat thresholdForDeterminingEqualSize; // ivar: _thresholdForDeterminingEqualSize
@property (readonly, nonatomic) NSArray *transformationPasses;


-(BOOL)_frame:(struct CGRect )arg0 isApproximatelySameSizeAsFrame:(struct CGRect )arg1 ;
-(id)_applyTransformationPass:(id)arg0 toGroup:(id)arg1 ;
-(id)_applyTransformationPassesToRootGroup:(id)arg0 ;
-(id)_buildHierarchyForGroup:(id)arg0 indexOfKeyboard:(*NSUInteger)arg1 ;
-(id)_flattenHierarchyForGroup:(id)arg0 rootLevel:(BOOL)arg1 ;
-(id)_groupRemovingImpossibleGroups:(id)arg0 isRootLevel:(BOOL)arg1 ;
-(id)_groupablesForItems:(id)arg0 ;
-(id)groupElementsInRootGroup:(id)arg0 ;
-(id)init;
-(id)initWithHeuristics:(NSInteger)arg0 ;


@end


#endif