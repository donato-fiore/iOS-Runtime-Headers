// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MIBUCLIENT_H
#define MIBUCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface MIBUClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


-(BOOL)_isActivated:(*id)arg0 ;
-(BOOL)_isOnLockScreen;
-(BOOL)isInBoxUpdateMode:(*id)arg0 ;
-(id)init;
-(void)_setupConnection;
-(void)connectToWiFi:(*id)arg0 ;
-(void)dealloc;
-(void)eapConfigurationWithCompletion:(id)arg0 ;
-(void)invalidate;
-(void)stopWiFiMonitor:(*id)arg0 ;
-(void)terminateInBoxUpdateWithCompletion:(id)arg0 ;


@end


#endif