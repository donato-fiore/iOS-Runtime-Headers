// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MNTRAFFICINCIDENTALERTUPDATER_H
#define MNTRAFFICINCIDENTALERTUPDATER_H

@class NSTimer, NSString;
@protocol MNTrafficIncidentAlertUpdaterDelegate;

#import <Foundation/Foundation.h>

#import "MNLocation.h"
#import "MNTrafficIncidentAlert.h"

@interface MNTrafficIncidentAlertUpdater : NSObject {
    MNLocation *_lastLocation;
    MNTrafficIncidentAlert *_pendingAlert;
    MNTrafficIncidentAlert *_activeAlert;
    BOOL _isSpeakingAlert;
    int _trafficIncidentStatus;
    NSTimer *_alertRetryTimer;
    NSString *_previousBannerID;
}


@property (weak, nonatomic) NSObject<MNTrafficIncidentAlertUpdaterDelegate> *delegate; // ivar: _delegate


-(void)_activateAlertForLocation:(id)arg0 ;
-(void)_alertRetryTimerFired:(id)arg0 ;
-(void)_removeActiveAlert;
-(void)_updateAlertDistanceAndETA:(id)arg0 ;
-(void)_updatePreviousDisplayedBannerForRequest:(id)arg0 ;
-(void)_updateRerouteProposalStatusForRequest:(id)arg0 ;
-(void)clearAlerts;
-(void)dealloc;
-(void)updateForAlertFromResponse:(id)arg0 ;
-(void)updateForLocation:(id)arg0 ;
-(void)updateForReroute:(id)arg0 ;
-(void)updatePreviousIncidentResultForRequest:(id)arg0 ;


@end


#endif