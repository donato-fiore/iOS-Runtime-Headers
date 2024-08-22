// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSPORDEREDREPLICA_H
#define MSPORDEREDREPLICA_H



#import "MSPReplica.h"

@interface MSPOrderedReplica : MSPReplica



+(id)allowedEditClasses;
// +(void)_switchForEdit:(id)arg0 caseIsInsertRecord:(id)arg1 caseIsEditContents:(unk)arg2 caseIsEditPosition:(id)arg3 caseIsRemoveTombstone:(unk)arg4  ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
// -(id)orderedReplicaByApplyingContainerEdits:(id)arg0 toOldContents:(id)arg1 forNewContents:(id)arg2 recordCreationHandler:(id)arg3 replicaEditApplier:(unk)arg4 error:(id)arg5  ;
-(void)_mergeSelfRecord:(id)arg0 withRecordFromOtherReplica:(id)arg1 identifier:(id)arg2 options:(id)arg3 edits:(id)arg4 ;


@end


#endif