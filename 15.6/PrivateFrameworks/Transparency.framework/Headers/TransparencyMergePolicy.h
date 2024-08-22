// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TRANSPARENCYMERGEPOLICY_H
#define TRANSPARENCYMERGEPOLICY_H

@class NSMergePolicy;



@interface TransparencyMergePolicy : NSMergePolicy



-(BOOL)resolveConstraintConflicts:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(void)updateTreeHead:(id)arg0 withConflictingHead:(id)arg1 ;


@end


#endif