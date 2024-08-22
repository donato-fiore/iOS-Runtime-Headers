// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MSPCLOUDSYNCHRONIZERRUNCONDITIONS_H
#define MSPCLOUDSYNCHRONIZERRUNCONDITIONS_H

@class NSDate, GEONetworkObserver;
@protocol MSPCloudSynchronizerRunConditionsDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MSPCloudSynchronizerRunConditions : NSObject

@property (weak, nonatomic) NSObject<MSPCloudSynchronizerRunConditionsDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (nonatomic) BOOL hasiCloudAccount; // ivar: _hasiCloudAccount
@property (nonatomic) BOOL isDeviceToDeviceEncryptionReady; // ivar: _isDeviceToDeviceEncryptionReady
@property (nonatomic) BOOL isNetworkReachable; // ivar: _isNetworkReachable
@property (retain, nonatomic) NSDate *lastErrorDate; // ivar: _lastErrorDate
@property (nonatomic) CGFloat lastRetryDelayInSeconds; // ivar: _lastRetryDelayInSeconds
@property (retain, nonatomic) GEONetworkObserver *networkObserver; // ivar: _networkObserver
@property (readonly, nonatomic) BOOL shouldRun;


-(BOOL)shouldRetryAfterError:(id)arg0 ;
-(CGFloat)currentRetryDelay;
-(CGFloat)delayRetryingAfterError:(id)arg0 ;
-(id)description;
-(id)init;
-(id)initWithDelegate:(id)arg0 ;
-(void)accountChanged:(id)arg0 ;
-(void)announceRunConditionsChanged;
-(void)networkConditionsChanged;
-(void)refreshAccountStatus;
-(void)subscribeToAccountChangeNotifications;
-(void)subscribeToNetworkChangeNotifications;


@end


#endif