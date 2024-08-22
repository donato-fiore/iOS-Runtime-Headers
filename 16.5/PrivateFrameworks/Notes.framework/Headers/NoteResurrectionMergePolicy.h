// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NOTERESURRECTIONMERGEPOLICY_H
#define NOTERESURRECTIONMERGEPOLICY_H

@class NSMergePolicy;



@interface NoteResurrectionMergePolicy : NSMergePolicy



+(id)sharedNoteResurrectionMergePolicy;
-(BOOL)accountExists:(id)arg0 ;
-(BOOL)resolveConflicts:(id)arg0 error:(*id)arg1 ;
-(id)localStoreForNote:(id)arg0 ;
-(id)snapshotFromRecord:(id)arg0 ;


@end


#endif