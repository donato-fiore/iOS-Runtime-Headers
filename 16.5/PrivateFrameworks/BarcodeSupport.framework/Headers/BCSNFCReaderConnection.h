// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BCSNFCREADERCONNECTION_H
#define BCSNFCREADERCONNECTION_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BCSNotificationServiceConnection.h"

@interface BCSNFCReaderConnection : NSObject {
    BCSNotificationServiceConnection *_notificationServiceConnection;
    NSObject<OS_dispatch_queue> *_queue;
}




-(BOOL)_enableNFC;
-(BOOL)_isNFCEnabled;
-(BOOL)_needsRadioEnabledCheck;
-(NSInteger)_hardwareSupportState;
-(id)init;
-(void)checkHardwareSupportStateWithCompletionHandler:(id)arg0 ;
-(void)checkNFCEnabledWithCompletionHandler:(id)arg0 ;
-(void)disconnect;
-(void)enableNFCWithCompletionHandler:(id)arg0 ;
// -(void)startReaderWithDelegate:(id)arg0 errorHandler:(id)arg1 interruptionHandler:(unk)arg2  ;
-(void)stopReaderWithErrorHandler:(id)arg0 ;


@end


#endif