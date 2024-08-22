// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SYINCOMINGSYNCALLOBJECTSSESSION_H
#define SYINCOMINGSYNCALLOBJECTSSESSION_H

@class NSMutableArray;


#import "SYIncomingFullSyncSession.h"

@interface SYIncomingSyncAllObjectsSession : SYIncomingFullSyncSession {
    NSMutableArray *_allObjectsAsData;
    id *_completion;
    BOOL canRestart;
    BOOL canRollback;
}




-(BOOL)canRestart;
-(BOOL)canRollback;
-(id)initWithService:(id)arg0 message:(id)arg1 completion:(id)arg2 ;
-(void)_continueProcessing;
-(void)_sendEndSessionResponse:(id)arg0 ;
-(void)setCanRestart:(BOOL)arg0 ;
-(void)setCanRollback:(BOOL)arg0 ;


@end


#endif