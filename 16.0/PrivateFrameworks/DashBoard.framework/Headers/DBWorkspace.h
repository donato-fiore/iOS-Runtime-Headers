// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DBWORKSPACE_H
#define DBWORKSPACE_H

@class NSHashTable, NSMutableArray, NSString;
@protocol BSInvalidatable, DBWorkspaceOwner, DBWorkspaceState;

#import <Foundation/Foundation.h>

#import "_DBWorkspaceStateChangeSession.h"

@interface DBWorkspace : NSObject <BSInvalidatable>

 {
    id<DBWorkspaceOwner> *_owner;
    BOOL _invalidated;
    NSHashTable *_observers;
    NSMutableArray *_pendingRequests;
    _DBWorkspaceStateChangeSession *_currentSession;
    id<BSInvalidatable> *_pendingRequestsStateCaptureBlock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, setter=_setState:) NSObject<DBWorkspaceState> *state; // ivar: _state
@property (readonly) Class superclass;


-(id)_createStateChangeSession;
-(id)init;
-(id)initWithOwner:(id)arg0 ;
-(void)_invalidateSession:(id)arg0 ;
-(void)addObserver:(id)arg0 ;
-(void)invalidate;
-(void)removeObserver:(id)arg0 ;
-(void)requestStateChange:(id)arg0 ;


@end


#endif