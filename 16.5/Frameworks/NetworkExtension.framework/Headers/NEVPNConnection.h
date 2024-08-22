// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NEVPNCONNECTION_H
#define NEVPNCONNECTION_H

@class NSString, NSDate, NSError;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEConfigurationManager.h"
#import "NEVPNManager.h"

@interface NEVPNConnection : NSObject {
    BOOL _initialized;
    int _sessionType;
    NEConfigurationManager *_configManager;
    NSString *_configurationName;
    NSObject<OS_dispatch_queue> *_queue;
    *void _session;
    NEVPNManager *_weakmanager;
}


@property (readonly) NSDate *connectedDate; // ivar: _connectedDate
@property (nonatomic) BOOL installNotify; // ivar: _installNotify
@property (nonatomic) BOOL installed; // ivar: _installed
@property (readonly) NSError *lastDisconnectError; // ivar: _lastDisconnectError
@property (readonly) NEVPNManager *manager;
@property (readonly) NSInteger status; // ivar: _status


+(id)createConnectionForEnabledEnterpriseConfiguration;
+(id)createConnectionForEnabledEnterpriseConfigurationWithName:(id)arg0 ;
+(id)createDisconnectErrorWithDomain:(id)arg0 code:(unsigned int)arg1 ;
-(BOOL)startVPNTunnelAndReturnError:(*id)arg0 ;
-(BOOL)startVPNTunnelWithOptions:(id)arg0 andReturnError:(*id)arg1 ;
-(void)dealloc;
-(void)fetchExtendedStatusWithCompletionHandler:(id)arg0 ;
-(void)fetchLastDisconnectErrorWithCompletionHandler:(id)arg0 ;
-(void)fetchStatisticsWithCompletionHandler:(id)arg0 ;
-(void)stopVPNTunnel;


@end


#endif