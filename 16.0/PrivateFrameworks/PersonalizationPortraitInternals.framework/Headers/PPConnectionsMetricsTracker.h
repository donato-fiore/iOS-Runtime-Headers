// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PPCONNECTIONSMETRICSTRACKER_H
#define PPCONNECTIONSMETRICSTRACKER_H

@class PETGoalConversionEventTracker, PETScalarEventTracker, PETDistributionEventTracker;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PPConnectionsMetricsTracker : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) PETGoalConversionEventTracker *conversionTracker; // ivar: _conversionTracker
@property (retain, nonatomic) PETScalarEventTracker *dismissalTracker; // ivar: _dismissalTracker
@property (retain, nonatomic) PETScalarEventTracker *donationTracker; // ivar: _donationTracker
@property (retain, nonatomic) PETScalarEventTracker *opportunityTracker; // ivar: _opportunityTracker
@property (retain, nonatomic) PETScalarEventTracker *pasteboardTracker; // ivar: _pasteboardTracker
@property (retain, nonatomic) PETDistributionEventTracker *timingTracker; // ivar: _timingTracker


+(id)consumerStringForConsumerType:(NSUInteger)arg0 ;
+(id)donationSourceFromBundleID:(id)arg0 ;
+(id)sharedInstance;
+(id)triggerFromCriteria:(id)arg0 ;
-(id)init;
-(void)trackConversionGoalForConsumer:(id)arg0 source:(id)arg1 trigger:(id)arg2 originatingApp:(id)arg3 targetApp:(id)arg4 converted:(BOOL)arg5 ;
-(void)trackDismissalForConsumer:(id)arg0 source:(id)arg1 trigger:(id)arg2 originatingApp:(id)arg3 targetApp:(id)arg4 ;
-(void)trackDonationFromBundleId:(id)arg0 source:(id)arg1 hasLatLon:(BOOL)arg2 isEligible:(BOOL)arg3 ;
-(void)trackOpportunityForConsumer:(id)arg0 trigger:(id)arg1 targetApp:(id)arg2 ;
-(void)trackPasteboardItemFromBundleId:(id)arg0 hasAddress:(BOOL)arg1 isEligible:(BOOL)arg2 ;
-(void)trackTimingForConsumer:(id)arg0 time:(NSUInteger)arg1 ;


@end


#endif