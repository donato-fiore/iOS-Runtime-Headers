// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHOOLMODEXPCCLIENT_H
#define SCLSCHOOLMODEXPCCLIENT_H

@class NSXPCConnection, NSString;
@protocol SCLSchoolModeXPCClient, SCLSchoolModeXPCClientDelegate;

#import <Foundation/Foundation.h>

#import "SCLSchoolModeServerSettings.h"
#import "SCLSchoolModeConfiguration.h"
#import "SCLScheduleSettings.h"
#import "SCLState.h"

@interface SCLSchoolModeXPCClient : NSObject <SCLSchoolModeXPCClient>

 {
    os_unfair_lock_s _lock;
    os_unfair_lock_s _connectionLock;
    SCLSchoolModeServerSettings *_serverSettings;
    int _restartNotificationToken;
}


@property (retain, nonatomic) SCLSchoolModeConfiguration *configuration; // ivar: _configuration
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCLSchoolModeXPCClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property (nonatomic, getter=isRunning) BOOL running; // ivar: _running
@property (readonly, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic) SCLState *state;
@property (readonly) Class superclass;


-(BOOL)_makeConnection:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 configuration:(id)arg1 ;
-(id)serverWithErrorHandler:(id)arg0 ;
-(void)_dropConnection;
-(void)_reconnectToServer;
-(void)addUnlockHistoryItem:(id)arg0 completion:(id)arg1 ;
-(void)applyScheduleSettings:(id)arg0 completion:(id)arg1 ;
-(void)applyServerSettings:(id)arg0 ;
-(void)dealloc;
-(void)deleteHistoryWithCompletion:(id)arg0 ;
-(void)didChangeUnlockHistory;
-(void)dumpState;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)noteSignificantUserInteraction;
-(void)resume;
-(void)setActive:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerRemoteSync;


@end


#endif