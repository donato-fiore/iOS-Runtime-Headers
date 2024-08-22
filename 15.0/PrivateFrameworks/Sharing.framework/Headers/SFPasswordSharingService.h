// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SFPASSWORDSHARINGSERVICE_H
#define SFPASSWORDSHARINGSERVICE_H

@class NSUUID, NSDate, NSString;
@protocol SFPasswordSharingServiceDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "SFUserAlert.h"
#import "SFPasswordSharingInfo.h"
#import "SFService.h"

@interface SFPasswordSharingService : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    SFUserAlert *_notification;
    NSUUID *_peer;
    SFPasswordSharingInfo *_promptedInfo;
    SFService *_service;
    int _serviceState;
    NSDate *_shareClock;
    CGFloat _shareTime;
}


@property (weak, nonatomic) NSObject<SFPasswordSharingServiceDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (retain, nonatomic) NSString *networkName; // ivar: _networkName


+(unsigned int)passwordSharingAvailability;
-(BOOL)__activateCalled;
-(BOOL)__invalidateCalled;
-(BOOL)disabledViaConfig;
-(id)init;
-(id)messageForDisplayName:(id)arg0 deviceName:(id)arg1 info:(id)arg2 ;
-(int)_runServiceStart;
-(void)__testReceivedObject:(id)arg0 withFlags:(unsigned int)arg1 ;
-(void)_cleanup;
-(void)_handleReceivedPassword:(id)arg0 ;
-(void)_handleSessionStarted:(id)arg0 ;
-(void)_handleUserNotificationResponse:(int)arg0 ;
-(void)_passInfoToDelegate:(id)arg0 ;
-(void)_promptUserWithInfo:(id)arg0 message:(id)arg1 ;
-(void)_receivedObject:(id)arg0 flags:(unsigned int)arg1 ;
-(void)_run;
-(void)_sendPasswordDeclinedWithError:(int)arg0 ;
-(void)_sendPasswordReceived;
-(void)activate;
-(void)dealloc;
-(void)invalidate;


@end


#endif