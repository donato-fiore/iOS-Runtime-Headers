// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPRTCREPORTINGCONTROLLER_H
#define MPRTCREPORTINGCONTROLLER_H

@class NSNumber, NSMutableDictionary, NSString;
@protocol ICEnvironmentMonitorObserver;

#import <Foundation/Foundation.h>

#import "MPAVItem.h"
#import "MPRTCReportingSessionSummaryEvent.h"
#import "MPAVController.h"

@interface MPRTCReportingController : NSObject <ICEnvironmentMonitorObserver>

 {
    NSInteger _currentInterfaceType;
    MPAVItem *_currentItem;
    BOOL _isReloadingWithPlaybackContext;
    NSNumber *_tracklistStartUptime;
    MPRTCReportingSessionSummaryEvent *_tracklistSummaryEvent;
    NSMutableDictionary *_uniqueIdentifierToReportingSession;
    NSMutableDictionary *_uniqueIdentifierToSummaryEvent;
}


@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, nonatomic) int clientType; // ivar: _clientType
@property (readonly, nonatomic) NSInteger clientVersion; // ivar: _clientVersion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, weak, nonatomic) MPAVController *player; // ivar: _player
@property (readonly) Class superclass;


+(NSInteger)defaultClientVersion;
+(id)newHierarchyTokenFromParentToken:(id)arg0 ;
-(BOOL)_isAVItemReadyForReportingSessionInitialization:(id)arg0 ;
-(BOOL)_isAVItemReadyForReportingSessionSetupCompletion:(id)arg0 ;
-(id)_newReportingSession;
-(id)_preparedSummaryEventForAVItem:(id)arg0 ;
-(id)_reportingSessionForAVItem:(id)arg0 ;
-(id)_uniqueIdentifierForAVItem:(id)arg0 ;
-(id)initWithPlayer:(id)arg0 clientName:(id)arg1 clientType:(int)arg2 clientVersion:(NSInteger)arg3 ;
-(void)_avControllerBufferingStateDidChangeNotification:(id)arg0 ;
-(void)_avControllerDidReloadWithPlaybackContextNotification:(id)arg0 ;
-(void)_avControllerItemWillChangeNotification:(id)arg0 ;
-(void)_avControllerWillReloadWithPlaybackContextNotification:(id)arg0 ;
-(void)_avItemAssetLoadedNotification:(id)arg0 ;
-(void)_avItemSecureKeyDeliveryRequestDidFinishNotification:(id)arg0 ;
-(void)_avItemTypeDidChangeNotification:(id)arg0 ;
-(void)_completeSetupForReportingSession:(id)arg0 avItem:(id)arg1 ;
-(void)_completeSetupForReportingSession:(id)arg0 avItem:(id)arg1 fallbackQueueFeeder:(id)arg2 ;
-(void)_configureBaseEventPropertiesForEvent:(id)arg0 ;
-(void)_configureStartupStateForSummaryEvent:(id)arg0 withItem:(id)arg1 ;
-(void)_handleDeallocationForUniqueIdentifier:(id)arg0 ;
-(void)_initializeReportingSession:(id)arg0 forAVItem:(id)arg1 ;
-(void)_networkTypeDidChangeNotification:(id)arg0 ;
-(void)_setPerceivedTotalStartupTimeForItem:(id)arg0 withSummaryEvent:(id)arg1 ;
-(void)dealloc;


@end


#endif