// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CRKASMATOMICROSTERPROVIDER_H
#define CRKASMATOMICROSTERPROVIDER_H

@class NSMutableDictionary;


#import "CRKASMRosterProviderDecoratorBase.h"

@interface CRKASMAtomicRosterProvider : CRKASMRosterProviderDecoratorBase

@property (readonly, nonatomic) NSMutableDictionary *completionsByConstraint; // ivar: _completionsByConstraint


-(id)courseWithIdentifier:(id)arg0 inRoster:(id)arg1 ;
-(id)coursesMatchingCreateProperties:(id)arg0 inRoster:(id)arg1 createdAfter:(id)arg2 ;
-(id)initWithRosterProvider:(id)arg0 ;
// -(id)pushCompletion:(id)arg0 withRosterEvaluator:(unk)arg1  ;
-(void)beginObservingRoster;
-(void)createCourseWithProperties:(id)arg0 completion:(id)arg1 ;
-(void)dealloc;
-(void)endObservingRoster;
-(void)evaluateConstraintForUnderlyingCompletion:(id)arg0 error:(id)arg1 ;
-(void)evalutateConstraintsForRosterUpdate;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)removeCourseWithIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)updateCourseWithIdentifier:(id)arg0 properties:(id)arg1 completion:(id)arg2 ;


@end


#endif