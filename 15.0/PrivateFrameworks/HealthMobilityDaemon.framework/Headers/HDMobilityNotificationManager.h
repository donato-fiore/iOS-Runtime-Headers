// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDMOBILITYNOTIFICATIONMANAGER_H
#define HDMOBILITYNOTIFICATIONMANAGER_H

@class HDProfile, HKMobilityWalkingSteadinessAnalyticsManager, NSString;
@protocol HDHealthDaemonReadyObserver, HDDataObserver, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface HDMobilityNotificationManager : NSObject <HDHealthDaemonReadyObserver, HDDataObserver>

 {
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HKMobilityWalkingSteadinessAnalyticsManager *_analyticsManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithProfile:(id)arg0 ;
-(void)_queue_showNotificationForLocalSteadinessEvent:(id)arg0 completion:(id)arg1 ;
-(void)daemonReady:(id)arg0 ;
-(void)dealloc;
-(void)samplesAdded:(id)arg0 anchor:(id)arg1 ;


@end


#endif