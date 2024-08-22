// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SPOTLIGHTDAEMONCLIENTCONNECTION_H
#define SPOTLIGHTDAEMONCLIENTCONNECTION_H

@class CSXPCConnection;
@protocol SpotlightDaemonClient;



@interface SpotlightDaemonClientConnection : CSXPCConnection

@property (readonly, nonatomic) NSObject<SpotlightDaemonClient> *spotlightDaemonClient; // ivar: _spotlightDaemonClient


-(BOOL)addClientConnectionIfAllowedForConnection:(id)arg0 ;
-(BOOL)handleCommand:(char *)arg0 info:(id)arg1 connection:(id)arg2 ;
-(BOOL)lostClientConnection:(id)arg0 error:(id)arg1 ;
-(id)initWithClient:(id)arg0 forServiceName:(id)arg1 ;


@end


#endif