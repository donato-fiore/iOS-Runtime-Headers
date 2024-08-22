// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFOCUSMOVEMENTPERFORMER_H
#define _UIFOCUSMOVEMENTPERFORMER_H

@protocol _UIFocusMovementPerformerDelegate;

#import <Foundation/Foundation.h>


@interface _UIFocusMovementPerformer : NSObject

@property (weak, nonatomic) NSObject<_UIFocusMovementPerformerDelegate> *delegate; // ivar: _delegate


-(BOOL)_isMovementValidForFocusSequences:(id)arg0 ;
-(BOOL)_shouldRecordDestinationItemDistanceOffscreenInWindow:(id)arg0 ;
-(BOOL)performFocusMovement:(id)arg0 ;
-(id)__findFocusCandidateInContainer:(id)arg0 forRequest:(id)arg1 minimumSearchArea:(struct CGRect )arg2 isLoadingScrollableContainer:(BOOL)arg3 ;
-(id)_bestCandidateForFocusMovement:(id)arg0 ;
-(id)_bestCandidateForLinearFocusMovement:(id)arg0 ;
-(id)_bestCandidateForNonLinearFocusMovement:(id)arg0 ;
-(id)_fakeFocusedViewForFocusMovement:(id)arg0 searchArea:(struct CGRect )arg1 window:(id)arg2 ;
-(id)_findFocusCandidateByExhaustivelySearchingScrollableContainer:(id)arg0 forRequest:(id)arg1 ;
-(id)_findFocusCandidateBySearchingLinearFocusMovementSequencesForRequest:(id)arg0 ;
-(id)_findFocusCandidateWithoutLoadingScrollableContent:(id)arg0 forRequest:(id)arg1 minimumSearchArea:(struct CGRect )arg2 ;
-(id)_itemContainersToCheckForRequest:(id)arg0 ;
-(id)_nextLinearCandidateLoadingScrollableContentForRequest:(id)arg0 ;
-(id)viewForFocusHeading:(NSUInteger)arg0 fromView:(id)arg1 ;
-(struct CGRect )_minimumSearchAreaForContainer:(id)arg0 inWindow:(id)arg1 ;
-(struct CGRect )_minimumSearchAreaForContainer:(id)arg0 inWindow:(id)arg1 shouldLoadScrollableContainer:(BOOL)arg2 ;


@end


#endif