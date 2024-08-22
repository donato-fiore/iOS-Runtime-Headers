// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DBWORKSPACESTATECHANGESESSION_H
#define _DBWORKSPACESTATECHANGESESSION_H

@class NSTimer, NSString;
@protocol DBWorkspaceStateChangeSession;

#import <Foundation/Foundation.h>


@interface _DBWorkspaceStateChangeSession : NSObject <DBWorkspaceStateChangeSession>

 {
    BOOL _invalidated;
    id *_stateChangeBlock;
    id *_invalidationBlock;
    NSTimer *_watchdogTimer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) id *owner; // ivar: _owner
@property (readonly) Class superclass;


// -(id)initWithStateChangeBlock:(id)arg0 invalidationBlock:(unk)arg1  ;
-(void)_startWatchdogTimer;
-(void)_watchdogTimerFired;
-(void)dealloc;
-(void)invalidate;
-(void)setState:(id)arg0 ;


@end


#endif