// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC19REMOTEPAIRINGDEVICE43REMOTEPAIRINGDEVICEPAIRINGSERVICECONNECTION_H
#define _TTC19REMOTEPAIRINGDEVICE43REMOTEPAIRINGDEVICEPAIRINGSERVICECONNECTION_H


#import <Foundation/Foundation.h>


@interface _TtC19RemotePairingDevice43RemotePairingDevicePairingServiceConnection : NSObject {
    ? connection;
}




-(NSInteger)getUSBConectedHostTrustStateWithError:(*id)arg0 ;
-(id)init;
-(id)trustedHostInfoAndReturnError:(*id)arg0 ;
-(void)allowPromptlessPairingForHostWithQueue:(id)arg0 completion:(id)arg1 ;
-(void)deleteAllPairingRecordsWithInvokingCompletionHandlerOn:(id)arg0 completion:(id)arg1 ;
-(void)initiateWirelessPairingSessionWithQueue:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif