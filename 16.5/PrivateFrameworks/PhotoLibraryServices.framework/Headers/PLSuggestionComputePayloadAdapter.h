// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSUGGESTIONCOMPUTEPAYLOADADAPTER_H
#define PLSUGGESTIONCOMPUTEPAYLOADADAPTER_H



#import "PLJournalEntryPayloadUpdateAdapter.h"

@interface PLSuggestionComputePayloadAdapter : PLJournalEntryPayloadUpdateAdapter



-(BOOL)isValidForJournalPersistence;
-(id)payloadForChangedKeys:(id)arg0 ;
-(id)payloadID;
-(id)payloadIDForTombstone:(id)arg0 ;
-(id)suggestion;


@end


#endif