// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROSCRIPTCLIENT_H
#define SCROSCRIPTCLIENT_H

@class NSLock, SCRCTargetSelectorTimer;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SCROConnection.h"

@interface SCROScriptClient : NSObject {
    NSLock *_lock;
    SCROConnection *_connection;
    SCRCTargetSelectorTimer *_timer;
    BOOL _isReady;
}


@property (retain, nonatomic) NSObject<OS_dispatch_queue> *_scriptDispatchQueue; // ivar: __scriptDispatchQueue


+(id)sharedClient;
-(BOOL)_isReady;
-(BOOL)_runAsyncWithConnection:(int)arg0 object:(id)arg1 ;
-(BOOL)runScriptFile:(id)arg0 ;
-(BOOL)runShortcutWithIdentifier:(id)arg0 ;
-(id)_lazyConnection;
-(id)init;
-(void)_killConnection;
-(void)dealloc;
-(void)handleCallback:(id)arg0 ;


@end


#endif