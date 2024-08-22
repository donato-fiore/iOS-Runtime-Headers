// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DALOCALDBWATCHER_H
#define DALOCALDBWATCHER_H

@class NSMutableDictionary, NoteContext, NSMapTable;

#import <Foundation/Foundation.h>

#import "DACalDBHelper.h"

@interface DALocalDBWatcher : NSObject {
    DACalDBHelper *_calDBHelper;
    NSMutableDictionary *_calDBInfosByPath;
    NoteContext *_noteWatcher;
    NSMapTable *_concernedNotePartyToBlockMap;
}




+(id)_canonicalizePath:(id)arg0 ;
+(id)sharedDBWatcher;
-(id)_dbInfoForAccountID:(id)arg0 create:(BOOL)arg1 ;
-(id)init;
-(int)lastSavedCalSequenceNumberForDatabaseInContainer:(id)arg0 ;
-(void)_handleCalChangeNotification;
-(void)_notesChangedExternally;
-(void)didReceiveDarwinNotification:(id)arg0 ;
-(void)noteCalDBDirChanged;
-(void)registerConcernedCalParty:(id)arg0 forAccountID:(id)arg1 withChangedBlock:(id)arg2 ;
-(void)registerConcernedNoteParty:(id)arg0 withChangedBlock:(id)arg1 ;
-(void)removeConcernedCalParty:(id)arg0 forAccountID:(id)arg1 ;
-(void)removeConcernedNoteParty:(id)arg0 ;
-(void)setLastSavedCalSequenceNumber:(int)arg0 forDatabaseInContainer:(id)arg1 ;


@end


#endif