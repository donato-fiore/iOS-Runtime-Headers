// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLDETECTEDFACECOMPUTEPAYLOADADAPTER_H
#define PLDETECTEDFACECOMPUTEPAYLOADADAPTER_H



#import "PLJournalEntryPayloadUpdateAdapter.h"

@interface PLDetectedFaceComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter



-(BOOL)isValidForJournalPersistence;
-(id)face;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;


@end


#endif