// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSLAYOUTCONSTRAINTEXPLAINER_H
#define NSLAYOUTCONSTRAINTEXPLAINER_H

@class NSMutableSet, NSArray, NSMapTable;

#import <Foundation/Foundation.h>

#import "NSLayoutConstraint.h"

@interface NSLayoutConstraintExplainer : NSObject {
    NSLayoutConstraint *_constraint;
    NSMutableSet *_requiredConstraints;
    NSMutableSet *_frozenConstraints;
    NSMutableSet *_relaxedConstraints;
}


@property (retain) NSArray *mutuallyExclusiveConstraints; // ivar: _mutuallyExclusiveConstraints
@property (retain) NSMapTable *priorities; // ivar: _priorities
@property (retain) NSMapTable *satisfactionChanges; // ivar: _satisfactionChanges


// -(NSUInteger)_satisfactionChangeCount:(id)arg0 withResults:(unk)arg1  ;
-(id)description;
-(id)freezeConstraint:(id)arg0 ;
-(id)initWithConstraint:(id)arg0 ;
-(id)relaxConstraint:(id)arg0 ;
-(id)requireConstraint:(id)arg0 ;
-(id)thawConstraint:(id)arg0 ;
-(void)_freezeErrorVariable:(id)arg0 forcingZeroValue:(BOOL)arg1 inEngine:(id)arg2 accumulatingConstraints:(id)arg3 andMutuallyExclusiveConstraints:(*id)arg4 ;
-(void)dealloc;
-(void)recalculateExplanation;


@end


#endif