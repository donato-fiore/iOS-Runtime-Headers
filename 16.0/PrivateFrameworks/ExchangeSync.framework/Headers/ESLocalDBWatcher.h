// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ESLOCALDBWATCHER_H
#define ESLOCALDBWATCHER_H

@class NoteContext, NSMapTable, NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "ESCalDBHelper.h"

@interface ESLocalDBWatcher : NSObject {
    *void _abWatcher;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedABPartyToBlockMap;
    NSMapTable *_concernedNotePartyToBlockMap;
    ESCalDBHelper *_calDBHelper;
    NSMutableDictionary *_calDBInfosByPath;
}


@property (nonatomic) int lastSavedABSequenceNumber; // ivar: _lastSavedABSequenceNumber


+(id)_canonicalizePath:(id)arg0 ;
+(id)sharedDBWatcher;
-(id)_dbInfoForAccountID:(id)arg0 create:(BOOL)arg1 ;
-(id)init;
-(int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)arg0 ;
-(void)_handleABChangeNotificationWithInfo:(id)arg0 ;
-(void)_handleCalChangeNotification;
-(void)_notesChangedExternally;
-(void)dealloc;
-(void)didReceiveDarwinNotification:(id)arg0 ;
-(void)noteABDBDirChanged;
-(void)noteCalDBDirChanged;
-(void)registerConcernedABParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)registerConcernedCalParty:(id)arg0 forAccountID:(id)arg1 withChangedBlock:(id)arg2 ;
-(void)registerConcernedNoteParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)removeConcernedABParty:(id)arg0 ;
-(void)removeConcernedCalParty:(id)arg0 forAccountID:(id)arg1 ;
-(void)removeConcernedNoteParty:(id)arg0 ;
-(void)setLastSavedCalSequenceNumber:(int)arg0 forDatabaseInContainer:(id)arg1 ;


@end


#endif