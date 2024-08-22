// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef VCCTSERVICEMONITOR_H
#define VCCTSERVICEMONITOR_H

@class CoreTelephonyClient, CTXPCServiceSubscriptionContext, CTDataConnectionStatus, CTDataStatus, NSString, NSNumber, CTSignalStrengthInfo;
@protocol CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate;

#import <Foundation/Foundation.h>


@interface VCCTServiceMonitor : NSObject <CoreTelephonyClientRegistrationDelegate, CoreTelephonyClientDataDelegate>

 {
    CoreTelephonyClient *_ctClient;
    CTXPCServiceSubscriptionContext *_subscriptionContext;
    os_unfair_lock_s _statusLock;
}


@property (readonly, nonatomic) CTDataConnectionStatus *connectionStatus; // ivar: _connectionStatus
@property (readonly) CTDataStatus *dataStatus; // ivar: _dataStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSNumber *inHomeCountry; // ivar: _inHomeCountry
@property (readonly, nonatomic) CTSignalStrengthInfo *signalStrength; // ivar: _signalStrength
@property (readonly, nonatomic) *os_unfair_lock_s statusLock;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsCellular; // ivar: _supportsCellular


+(id)sharedInstance;
-(id)getCurrentDataSubscriptionContext;
-(id)init;
-(void)dataStatus:(id)arg0 dataStatusInfo:(id)arg1 ;
-(void)dealloc;
-(void)internetConnectionStateChanged:(id)arg0 ;
-(void)signalStrengthChanged:(id)arg0 info:(id)arg1 ;


@end


#endif