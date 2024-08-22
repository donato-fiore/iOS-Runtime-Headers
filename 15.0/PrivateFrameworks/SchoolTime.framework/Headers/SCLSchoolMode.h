// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHOOLMODE_H
#define SCLSCHOOLMODE_H

@class NSString;
@protocol SCLSchoolModeXPCClientDelegate;

#import <Foundation/Foundation.h>

#import "SCLSchoolModeXPCClient.h"
#import "SCLSchoolModeConfiguration.h"
#import "SCLScheduleSettings.h"
#import "SCLState.h"

@interface SCLSchoolMode : NSObject <SCLSchoolModeXPCClientDelegate>

 {
    SCLSchoolModeXPCClient *_xpcClient;
    SCLSchoolModeConfiguration *_configuration;
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic, getter=isLoaded) BOOL loaded;
@property NSUInteger resumeState; // ivar: _resumeState
@property (readonly, nonatomic) SCLScheduleSettings *scheduleSettings;
@property (readonly, nonatomic) SCLState *state;
@property (readonly) Class superclass;


-(id)delegate;
-(id)init;
-(id)initWithConfiguration:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 delegate:(id)arg1 ;
-(id)initWithIdentifier:(id)arg0 pairingID:(id)arg1 delegate:(id)arg2 ;
-(void)_assertQueueIfReady;
-(void)addUnlockHistoryItem:(id)arg0 completion:(id)arg1 ;
-(void)applyScheduleSettings:(id)arg0 completion:(id)arg1 ;
-(void)client:(id)arg0 didLoadScheduleSettings:(id)arg1 ;
-(void)client:(id)arg0 didUpdateScheduleSettings:(id)arg1 ;
-(void)client:(id)arg0 didUpdateToState:(id)arg1 fromState:(id)arg2 ;
-(void)clientDidChangeUnlockHistory:(id)arg0 ;
-(void)dealloc;
-(void)deleteHistoryWithCompletion:(id)arg0 ;
-(void)dumpState;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(id)arg0 ;
-(void)noteSignificantUserInteraction;
-(void)resume;
-(void)setActive:(BOOL)arg0 completion:(id)arg1 ;
-(void)triggerRemoteSync;


@end


#endif