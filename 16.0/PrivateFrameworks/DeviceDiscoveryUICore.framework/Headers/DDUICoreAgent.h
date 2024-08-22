// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUICOREAGENT_H
#define DDUICOREAGENT_H


#import <Foundation/Foundation.h>

#import "DDUIEndpointPairingListener.h"
#import "_DDUINotificationManager.h"

@interface DDUICoreAgent : NSObject

@property (retain, nonatomic) DDUIEndpointPairingListener *endpointPairingListener; // ivar: _endpointPairingListener
@property (retain, nonatomic) _DDUINotificationManager *notificationManager; // ivar: _notificationManager
@property (nonatomic) BOOL started; // ivar: _started


+(id)sharedInstance;
-(void)_handleIncomingPairingSession:(id)arg0 pairingMessage:(id)arg1 ;
-(void)_setupListenerIfNeededWithCompletion:(id)arg0 ;
-(void)_showNotificationForPairingSession:(id)arg0 pairingMessage:(id)arg1 ;
-(void)_startOnQueue;
-(void)start;


@end


#endif