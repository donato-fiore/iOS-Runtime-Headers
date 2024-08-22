// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MSAUTOSAVE_H
#define MSAUTOSAVE_H

@class NSHashTable;


#import "MSXPCService.h"

@interface MSAutosave : MSXPCService

@property (retain, nonatomic) NSHashTable *activeAutosaveSessions; // ivar: _activeAutosaveSessions


+(id)autosave;
+(id)log;
-(BOOL)hasAutosavedMessageWithIdentifier:(id)arg0 ;
-(id)autosavedMessageDataWithIdentifier:(id)arg0 ;
-(id)init;
-(id)initWithRemoteObjectInterface:(id)arg0 ;
-(id)newConnectionForInterface:(id)arg0 ;
-(void)_getRemoteAutosaveSessionForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)_handleInterruptedConnection;
-(void)autosaveMessageData:(id)arg0 replacingIdentifier:(id)arg1 completion:(id)arg2 ;
-(void)autosaveSessionForIdentifier:(id)arg0 completion:(id)arg1 ;
-(void)getIdleAutosaves:(id)arg0 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg0 ;


@end


#endif