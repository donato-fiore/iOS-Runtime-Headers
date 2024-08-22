// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICNOTEMERGEPOLICY_H
#define ICNOTEMERGEPOLICY_H

@class NSMergePolicy;



@interface ICNoteMergePolicy : NSMergePolicy



-(BOOL)resolveConflictingAttachment:(id)arg0 withInlineAttachment:(id)arg1 ;
-(BOOL)resolveConflictingAttachmentPreviewImage:(id)arg0 with:(id)arg1 ;
-(BOOL)resolveConflictingDeviceMigrationState:(id)arg0 with:(id)arg1 ;
-(BOOL)resolveConflictingFolder:(id)arg0 with:(id)arg1 ;
-(BOOL)resolveConflictingInlineAttachment:(id)arg0 with:(id)arg1 ;
-(BOOL)resolveConflictingNote:(id)arg0 with:(id)arg1 ;
-(BOOL)resolveConstraintConflict:(id)arg0 ;
-(BOOL)resolveConstraintConflicts:(id)arg0 error:(*id)arg1 ;
-(BOOL)resolveOptimisticLockingVersionConflicts:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithMergeType:(NSUInteger)arg0 ;


@end


#endif