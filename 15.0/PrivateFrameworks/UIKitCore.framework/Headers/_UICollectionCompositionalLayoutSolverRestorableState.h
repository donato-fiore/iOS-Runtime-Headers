// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESTORABLESTATE_H
#define _UICOLLECTIONCOMPOSITIONALLAYOUTSOLVERRESTORABLESTATE_H

@class NSArray, NSIndexSet, NSString;
@protocol _UICollectionCompositionalLayoutSolverRestorableState;

#import <Foundation/Foundation.h>


@interface _UICollectionCompositionalLayoutSolverRestorableState : NSObject <_UICollectionCompositionalLayoutSolverRestorableState>

 {
    NSArray *_bookmarkSnapshotters;
    NSIndexSet *_orthogonalSectionIndexes;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)applyToSolver:(id)arg0 ;


@end


#endif