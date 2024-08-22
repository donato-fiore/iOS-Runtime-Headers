// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFPASSWORDSHARINGSESSION_H
#define SFPASSWORDSHARINGSESSION_H

@class NSDate, NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFSession.h"
#import "SFDevice.h"

@interface SFPasswordSharingSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    int _pairState;
    int _passwordShareState;
    SFSession *_sfSession;
    int _sfSessionState;
    NSDate *_shareClock;
}


@property (retain, nonatomic) NSString *deviceName; // ivar: _deviceName
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSString *hashedEmail; // ivar: _hashedEmail
@property (retain, nonatomic) NSString *hashedPhone; // ivar: _hashedPhone
@property (retain, nonatomic) NSString *hotspotPSK; // ivar: _hotspotPSK
@property (retain, nonatomic) SFDevice *peerDevice; // ivar: _peerDevice
@property (copy, nonatomic) id *progressHandler; // ivar: _progressHandler
@property (copy, nonatomic) id *promptForPINHandler; // ivar: _promptForPINHandler


-(id)init;
-(int)_runPair;
-(int)_runPasswordShare;
-(int)_runSFSessionStart;
-(void)_cleanup;
-(void)_completedWithError:(id)arg0 ;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_run;
-(void)_runPasswordShareReceiveResponse:(id)arg0 ;
-(void)_runPasswordShareSendInfo;
-(void)activate;
-(void)dealloc;
-(void)invalidate;
-(void)tryPIN:(id)arg0 ;


@end


#endif