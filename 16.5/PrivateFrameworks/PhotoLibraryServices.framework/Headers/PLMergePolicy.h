// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLMERGEPOLICY_H
#define PLMERGEPOLICY_H

@class NSMergePolicy;



@interface PLMergePolicy : NSMergePolicy

@property (readonly, nonatomic) BOOL isResolvingConflicts; // ivar: _isResolvingConflicts


-(BOOL)resolveConflicts:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg0 error:(*id)arg1 ;


@end


#endif