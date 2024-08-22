// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPCJINGLEPLAYACTIVITYREPORTINGCONTROLLER_H
#define MPCJINGLEPLAYACTIVITYREPORTINGCONTROLLER_H

@class NSString, ICPlayActivityController;
@protocol OS_dispatch_queue;


#import "MPCReportingController.h"

@interface MPCJinglePlayActivityReportingController : MPCReportingController {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    CGFloat _nonCatalogAggregatePlayDuration;
    CGFloat _nonCatalogAggregateStartTime;
    NSString *_nonCatalogDeviceName;
    BOOL _nonCatalogOffline;
    BOOL _nonCatalogSBEnabled;
    NSUInteger _nonCatalogStoreAccountID;
    NSString *_nonCatalogBuildVersion;
    NSString *_nonCatalogStoreFrontID;
    NSUInteger _nonCatalogSourceType;
}


@property (readonly, nonatomic) ICPlayActivityController *playActivityController; // ivar: _playActivityController
@property (nonatomic) BOOL shouldReportPlayActivityEvents; // ivar: _shouldReportPlayActivityEvents


-(id)_captureNonCatalogAggregatePlayActivityEventWithNonCatalogAggregateEndTime:(CGFloat)arg0 ;
-(id)init;
-(id)initWithWritingStyle:(NSUInteger)arg0 ;
-(void)_applicationWillTerminateNotification:(id)arg0 ;
-(void)_clearNonCatalogAggregatePlayActivityEventData;
-(void)_recordReportingEvents:(id)arg0 ;
-(void)acquirePendingPlayActivityEventsForStoreAccountID:(NSUInteger)arg0 completionHandler:(id)arg1 ;
-(void)completePendingPlayActivityEvents:(id)arg0 forSessionToken:(NSUInteger)arg1 withResult:(NSUInteger)arg2 completionHandler:(id)arg3 ;
-(void)dealloc;


@end


#endif