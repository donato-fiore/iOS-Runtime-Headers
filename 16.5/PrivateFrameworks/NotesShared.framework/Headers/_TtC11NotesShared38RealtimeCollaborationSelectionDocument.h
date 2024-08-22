// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC11NOTESSHARED38REALTIMECOLLABORATIONSELECTIONDOCUMENT_H
#define _TTC11NOTESSHARED38REALTIMECOLLABORATIONSELECTIONDOCUMENT_H



#import "ICCRDocument.h"

@interface _TtC11NotesShared38RealtimeCollaborationSelectionDocument : ICCRDocument {
    ? localParticipantID;
    ? selections;
}




-(NSUInteger)mergeWithData:(id)arg0 ;
-(id)init;
-(id)initWithReplica:(id)arg0 ;
-(id)initWithVersion:(id)arg0 rootObject:(id)arg1 replica:(id)arg2 ;
-(id)initWithVersion:(id)arg0 startVersion:(id)arg1 rootObject:(id)arg2 replica:(id)arg3 ;


@end


#endif