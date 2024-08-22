// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXVOICEOVERSERVER_H
#define AXVOICEOVERSERVER_H



#import "AXServer.h"

@interface AXVoiceOverServer : AXServer

@property (readonly, nonatomic, getter=isScreenCurtainEnabled) BOOL isScreenCurtainEnabled;


+(id)server;
-(BOOL)_connectIfNecessary;
-(BOOL)isBluetoothBrailleDisplayConnected;
-(BOOL)isBrailleInputUIShowing;
-(BOOL)isHandwritingInputUIShowing;
-(BOOL)triggerCommand:(NSInteger)arg0 ;
-(BOOL)triggerCommand:(NSInteger)arg0 withArgument:(id)arg1 ;
-(BOOL)triggerGesture:(id)arg0 ;
-(id)_serviceName;
-(id)currentFocusedElement;
-(id)currentRotorName;
-(id)lastScreenChange;
-(id)lastSoundsPlayed;
-(id)lastSpokenContents;
-(id)lastSpokenPhrases;
-(void)clearLastSpokenPhrases:(id)arg0 ;
-(void)performAutomationTestingCommand:(id)arg0 userInfo:(id)arg1 timeout:(CGFloat)arg2 completion:(id)arg3 ;


@end


#endif