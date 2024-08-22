// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDGROUPREP_H
#define TSDGROUPREP_H

@class NSOrderedSet, NSMapTable, NSArray;
@protocol TSDMagicMoveMatching;


#import "TSDContainerRep.h"

@interface TSDGroupRep : TSDContainerRep <TSDMagicMoveMatching>

 {
    CGRect mLastBoundsForStandardKnobs;
    NSOrderedSet *mCachedGroupedChildReps;
    NSMapTable *mChildKnobToRepMap;
}


@property (readonly, nonatomic) NSArray *allRepsContainedInGroup;


-(id)p_groupInfo;
-(id)p_groupedChildReps;
-(id)p_nonGroupedChildReps;
-(struct CGRect )clipRect;
-(struct CGRect )frameInUnscaledCanvas;
-(struct CGRect )frameInUnscaledCanvasForMarqueeSelecting;
-(void)drawInContext:(struct CGContext *)arg0 ;
-(void)recursivelyDrawInContext:(struct CGContext *)arg0 keepingChildrenPassingTest:(id)arg1 ;
-(void)updateChildrenFromLayout;
-(void)updateFromLayout;


@end


#endif