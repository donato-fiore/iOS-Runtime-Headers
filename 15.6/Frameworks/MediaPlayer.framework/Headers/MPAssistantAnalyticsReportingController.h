// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPASSISTANTANALYTICSREPORTINGCONTROLLER_H
#define MPASSISTANTANALYTICSREPORTINGCONTROLLER_H

@class NSString, NSHashTable, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface MPAssistantAnalyticsReportingController : NSObject {
    NSObject<OS_dispatch_queue> *_eventQueue;
    NSString *_lastSiriReferenceIdentifierForPlaybackStart;
    NSString *_lastSiriReferenceIdentifierForWillReload;
    NSString *_lastSiriReferenceIdentifierWithLikelyToKeepUp;
    NSHashTable *_players;
    NSMapTable *_playerToObservedTimebase;
}




+(id)sharedController;
-(id)_createContextDictionaryWithSiriReferenceIdentifier:(id)arg0 siriWHAMetricsInfo:(id)arg1 ;
-(id)_init;
-(void)_attemptLikelyToKeepUpReportingEventWithPlayer:(id)arg0 ;
-(void)_attemptPlaybackStartReportingEventWithPlayer:(id)arg0 ;
-(void)_bufferingStateDidChangeNotification:(id)arg0 ;
-(void)_itemDidChangeNotification:(id)arg0 ;
-(void)_itemTimebaseDidChangeNotification:(id)arg0 ;
-(void)_timebaseEffectiveRateChangedNotification;
-(void)_willReloadWithPlaybackContextNotification:(id)arg0 ;
-(void)logAssistantEvent:(id)arg0 withTimestamp:(NSUInteger)arg1 ;
-(void)registerPlayer:(id)arg0 ;
-(void)unregisterPlayer:(id)arg0 ;


@end


#endif