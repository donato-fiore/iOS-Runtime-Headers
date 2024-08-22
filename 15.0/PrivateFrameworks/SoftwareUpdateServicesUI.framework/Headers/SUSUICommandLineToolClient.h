// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUSUICOMMANDLINETOOLCLIENT_H
#define SUSUICOMMANDLINETOOLCLIENT_H

@class NSXPCConnection, NSString;
@protocol SUSUICommandLineToolClientInterface, SUSUICommandLineToolClientDelegate;

#import <Foundation/Foundation.h>


@interface SUSUICommandLineToolClient : NSObject <SUSUICommandLineToolClientInterface>

 {
    NSXPCConnection *_serverConnection;
    BOOL _connected;
    BOOL _serverIsExiting;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<SUSUICommandLineToolClientDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_remoteInterface;
-(id)_remoteInterfaceWithErrorHandler:(id)arg0 ;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)_connectToServerIfNecessary;
-(void)_invalidateConnection;
-(void)_noteConnectionDropped;
-(void)_noteServerExiting;
-(void)dealloc;
-(void)downloadDidFinish;
-(void)invalidate;
-(void)reboot:(BOOL)arg0 ;
-(void)setPasscodePolicy:(NSUInteger)arg0 ;
-(void)showAuthenticationUIWithOptions:(NSUInteger)arg0 result:(id)arg1 ;
-(void)showEmergencyCallUIWithOptions:(NSUInteger)arg0 result:(id)arg1 ;
-(void)showFollowUp:(NSUInteger)arg0 ;
-(void)showMiniAlert:(NSUInteger)arg0 usingFakeData:(BOOL)arg1 errorCode:(id)arg2 ;
-(void)simulateComingFromOTAUpdate;
-(void)toggleSettingsBadge:(BOOL)arg0 ;


@end


#endif