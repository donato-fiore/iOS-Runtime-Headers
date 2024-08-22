// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IMSIMULATEDDAEMONCONTROLLER_H
#define IMSIMULATEDDAEMONCONTROLLER_H

@class NSArray;


#import "IMDaemonController.h"

@interface IMSimulatedDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners; // ivar: _listeners


+(id)dictionaryForChat:(id)arg0 ;
+(id)sharedInstance;
+(void)beginSimulatingDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(BOOL)isConnected;
-(unsigned int)capabilitiesForListenerID:(id)arg0 ;
-(void)sendBalloonPayload:(id)arg0 attachments:(id)arg1 withMessageGUID:(id)arg2 bundleID:(id)arg3 ;


@end


#endif