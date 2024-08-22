// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HDDAEMONSYNCMESSAGEHANDLER_H
#define HDDAEMONSYNCMESSAGEHANDLER_H

@class NSMutableArray, NSError;
@protocol HDSyncMessageHandler;

#import <Foundation/Foundation.h>

#import "HDSyncSession.h"
#import "HDSyncAnchorMap.h"

@interface HDDaemonSyncMessageHandler : NSObject <HDSyncMessageHandler>

 {
    Class _syncEntityClass;
    HDSyncAnchorRange _anchorRange;
    HDSyncSession *_session;
    HDSyncAnchorMap *_requiredAnchorMap;
    BOOL _done;
    NSInteger _nextSequence;
    NSMutableArray *_changes;
    NSInteger _accumulatedChangeSetSize;
    NSInteger _lastAnchor;
}


@property (readonly, nonatomic) NSInteger currentAnchor; // ivar: _currentAnchor
@property (readonly, copy, nonatomic) NSError *sendChangesError; // ivar: _sendChangesError
@property (readonly, nonatomic) NSInteger sendChangesStatus; // ivar: _sendChangesStatus


-(BOOL)sendCodableChange:(id)arg0 resultAnchor:(NSInteger)arg1 sequence:(NSInteger)arg2 done:(BOOL)arg3 error:(*id)arg4 ;
-(BOOL)sendCodableChange:(id)arg0 version:(struct ? )arg1 resultAnchor:(NSInteger)arg2 sequence:(NSInteger)arg3 done:(BOOL)arg4 error:(*id)arg5 ;
-(id)description;
-(id)initWithSyncEntityClass:(Class)arg0 anchorRange:(struct HDSyncAnchorRange )arg1 session:(id)arg2 requiredAnchorMap:(id)arg3 ;
-(void)abandonUnsentChangesForError:(id)arg0 ;
-(void)dealloc;


@end


#endif