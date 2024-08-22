// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXTERNALSEQUENCENUMBERTOATTACHMENTNOTEBODYTOATTACHMENTMIGRATIONPOLICY_H
#define EXTERNALSEQUENCENUMBERTOATTACHMENTNOTEBODYTOATTACHMENTMIGRATIONPOLICY_H

@class NSEntityMigrationPolicy;



@interface ExternalSequenceNumberToAttachmentNoteBodyToAttachmentMigrationPolicy : NSEntityMigrationPolicy



-(BOOL)createDestinationInstancesForSourceInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(BOOL)createRelationshipsForDestinationInstance:(id)arg0 entityMapping:(id)arg1 manager:(id)arg2 error:(*id)arg3 ;
-(BOOL)endEntityMapping:(id)arg0 manager:(id)arg1 error:(*id)arg2 ;
-(id)unarchiveObjectWithExternalRepresentation:(id)arg0 ;


@end


#endif