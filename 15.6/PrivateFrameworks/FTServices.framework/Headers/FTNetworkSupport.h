// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTNETWORKSUPPORT_H
#define FTNETWORKSUPPORT_H

@class APSConnection, NSTimer;

#import <Foundation/Foundation.h>


@interface FTNetworkSupport : NSObject {
    Class _APSConnectionClass;
    APSConnection *_apsConnection;
    NSTimer *_reliabilityAttemptTimer;
    BOOL _enableCriticalReliability;
    BOOL _criticalReliabilityEnabledState;
}


@property (readonly, nonatomic) BOOL allowAnyNetwork;
@property (readonly, nonatomic) BOOL dataActiveAndReachable;
@property (nonatomic) BOOL enableCriticalReliability;
@property (readonly, nonatomic) BOOL networkActive;
@property (readonly, nonatomic) BOOL networkEnabled;
@property (readonly, nonatomic) BOOL networkReachable;
@property (readonly, nonatomic) BOOL validNetworkActive;
@property (readonly, nonatomic) BOOL validNetworkEnabled;
@property (readonly, nonatomic) BOOL validNetworkReachable;
@property (readonly, nonatomic) BOOL wiFiActiveAndReachable;
@property (readonly, nonatomic) BOOL willSearchForNetwork;


+(id)sharedInstance;
-(BOOL)validNetworkActiveForBundleId:(id)arg0 ;
-(BOOL)validNetworkEnabledForBundleId:(id)arg0 ;
-(BOOL)validNetworkReachableForBundleId:(id)arg0 ;
-(BOOL)willSearchForNetworkForBundleId:(id)arg0 ;
-(void)_clearReliabilityTimeoutInterval;
-(void)_createAPSConnectionIfNeeded;
-(void)_reallySetCriticalReliability:(BOOL)arg0 ;
-(void)_setReliabilityTimeoutInterval;
-(void)_tryToEnableReliability;


@end


#endif