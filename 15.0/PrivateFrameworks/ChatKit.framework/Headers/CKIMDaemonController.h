// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKIMDAEMONCONTROLLER_H
#define CKIMDAEMONCONTROLLER_H

@class IMDaemonController, NSArray;



@interface CKIMDaemonController : IMDaemonController

@property (retain, nonatomic) NSArray *listeners; // ivar: _listeners


+(id)sharedInstance;
+(void)beginSimulatingDaemon;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 ;
-(BOOL)connectToDaemonWithLaunch:(BOOL)arg0 capabilities:(unsigned int)arg1 blockUntilConnected:(BOOL)arg2 ;
-(void)sendBalloonPayload:(id)arg0 attachments:(id)arg1 withMessageGUID:(id)arg2 bundleID:(id)arg3 ;


@end


#endif