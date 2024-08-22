// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ESLOCALDBWATCHER_H
#define ESLOCALDBWATCHER_H

@class NoteContext, NSMapTable;

#import <Foundation/Foundation.h>


@interface ESLocalDBWatcher : NSObject {
    *void _abWatcher;
    *CalDatabase _calWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedCalPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
}


@property (nonatomic) int lastSavedABSequenceNumber; // ivar: _lastSavedABSequenceNumber
@property (nonatomic) int lastSavedCalSequenceNumber; // ivar: _lastSavedCalSequenceNumber


+(id)sharedDBWatcher;
-(id)init;
-(void)_handleABChangeNotificationWithInfo:(id)arg0 ;
-(void)_handleCalChangeNotification;
-(void)_notesChangedExternally;
-(void)dealloc;
-(void)didReceiveDarwinNotification:(id)arg0 ;
-(void)noteABDBDirChanged;
-(void)noteCalDBDirChanged;
-(void)registerConcernedABParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)registerConcernedCalParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)registerConcernedNoteParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)removeConcernedABParty:(id)arg0 ;
-(void)removeConcernedCalParty:(id)arg0 ;
-(void)removeConcernedNoteParty:(id)arg0 ;


@end


#endif