// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AXSWITCHCONTROLSERVER_H
#define AXSWITCHCONTROLSERVER_H



#import "AXServer.h"

@interface AXSwitchControlServer : AXServer



+(id)server;
-(BOOL)_connectIfNecessary;
-(BOOL)_triggerAutomationCommand:(NSInteger)arg0 ;
-(BOOL)isAutoScanEnabled;
-(BOOL)isDwellEnabled;
-(BOOL)isManualScanEnabled;
-(BOOL)isScannerActive;
-(BOOL)isScannerPaused;
-(BOOL)setupAutomation;
-(BOOL)tearDownAutomation;
-(BOOL)triggerCommand:(NSInteger)arg0 ;
-(id)_serviceName;
-(id)currentFocusedElement;
-(void)_didConnectToClient;
-(void)_wasDisconnectedFromClient;
-(void)_willClearServer;


@end


#endif