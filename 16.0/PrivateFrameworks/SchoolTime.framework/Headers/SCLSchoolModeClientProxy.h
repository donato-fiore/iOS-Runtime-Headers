// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLSCHOOLMODECLIENTPROXY_H
#define SCLSCHOOLMODECLIENTPROXY_H

@class NSXPCConnection, NSString, NSUUID;
@protocol SCLSchoolModeXPCServer, SCLSchoolModeClientProxyDelegate;

#import <Foundation/Foundation.h>

#import "SCLSchoolModeCoordinator.h"

@interface SCLSchoolModeClientProxy : NSObject <SCLSchoolModeXPCServer>



@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (weak) SCLSchoolModeCoordinator *coordinator; // ivar: _coordinator
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SCLSchoolModeClientProxyDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy) NSString *identifier; // ivar: _identifier
@property (retain) NSUUID *pairingID; // ivar: _pairingID
@property (readonly) Class superclass;


-(BOOL)validateBooleanEntitlement:(id)arg0 error:(*id)arg1 ;
-(BOOL)validatePairing:(*id)arg0 ;
-(id)initWithConnection:(id)arg0 ;
-(id)remoteClient;
-(id)serverSettings;
-(void)addUnlockHistoryItem:(id)arg0 completion:(id)arg1 ;
-(void)applySchedule:(id)arg0 completion:(id)arg1 ;
-(void)connectWithPairingID:(id)arg0 identifier:(id)arg1 completion:(id)arg2 ;
-(void)deleteHistoryWithCompletion:(id)arg0 ;
-(void)didUpdateScheduleSettings:(id)arg0 notify:(BOOL)arg1 ;
-(void)didUpdateState:(id)arg0 fromState:(id)arg1 ;
-(void)dumpState;
-(void)fetchRecentUnlockHistoryItemsWithCompletion:(id)arg0 ;
-(void)noteSignificantUserInteraction;
-(void)sendServerSettings:(id)arg0 ;
-(void)setActive:(BOOL)arg0 options:(NSUInteger)arg1 completion:(id)arg2 ;
-(void)triggerRemoteSync;
-(void)unlockHistoryDidChange;


@end


#endif