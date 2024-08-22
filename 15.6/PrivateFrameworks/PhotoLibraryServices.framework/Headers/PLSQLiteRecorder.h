// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLSQLITERECORDER_H
#define PLSQLITERECORDER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface PLSQLiteRecorder : NSObject {
    *sqlite3 _targetDb;
    NSInteger _libraryID;
    BOOL _muted;
    BOOL _isSearch;
    os_unfair_lock_s _lock;
    NSMutableArray *_lastStatements;
    id *_decorator;
    id *_entriesHandler;
    int _lastObservedPagesHit;
    int _lastObservedPagesMissed;
}




+(id)queryPlanFromSQL:(char *)arg0 usingDb:(struct sqlite3 *)arg1 ;
-(BOOL)startRecordingSqliteDb:(struct sqlite3 *)arg0 ;
-(BOOL)stopRecording;
-(id)_recordedStatementsAndReset:(BOOL)arg0 ;
-(id)init;
// -(id)initWithEntryDecorator:(id)arg0 entriesAvailableHandler:(unk)arg1  ;
-(id)recordedStatements;
-(id)recordedStatementsAndReset;


@end


#endif