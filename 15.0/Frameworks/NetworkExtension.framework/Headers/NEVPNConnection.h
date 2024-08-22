// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEVPNCONNECTION_H
#define NEVPNCONNECTION_H

@class NSString, NSDate, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEVPNManager.h"

@interface NEVPNConnection : NSObject

@property (readonly, nonatomic) NEConfigurationManager *configManager; // ivar: _configManager
@property (retain, nonatomic) NSString *configurationName; // ivar: _configurationName
@property (readonly) NSDate *connectedDate; // ivar: _connectedDate
@property (nonatomic) BOOL initialized; // ivar: _initialized
@property (nonatomic) BOOL installNotify; // ivar: _installNotify
@property (nonatomic) BOOL installed; // ivar: _installed
@property (readonly) NSError *lastDisconnectError; // ivar: _lastDisconnectError
@property (readonly) NEVPNManager *manager;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property *void session; // ivar: _session
@property (readonly, nonatomic) int sessionType; // ivar: _sessionType
@property (readonly) NSInteger status; // ivar: _status
@property (weak) NEVPNManager *weakmanager; // ivar: _weakmanager


+(id)createConnectionForEnabledEnterpriseConfiguration;
+(id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)arg0 ;
+(id)createDisconnectErrorWithDomain:(id)arg0 code:(unsigned int)arg1 ;
-(BOOL)startVPNTunnelAndReturnError:(*id)arg0 ;
-(BOOL)startVPNTunnelWithOptions:(id)arg0 andReturnError:(*id)arg1 ;
-(id)initHeadlessWithName:(id)arg0 ;
-(id)initWithType:(int)arg0 ;
-(void)createSessionWithConfigurationIdentifier:(id)arg0 forceInfoFetch:(BOOL)arg1 completionHandler:(id)arg2 ;
-(void)dealloc;
-(void)destroySession;
-(void)newSessionWithConfigID:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)reload;
-(void)stopVPNTunnel;
-(void)updateSessionInfoForce:(BOOL)arg0 withCompletionHandler:(id)arg1 ;


@end


#endif