// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXCHRONOSERVICESPROVIDER_H
#define ATXCHRONOSERVICESPROVIDER_H

@class CHSProactiveService, SBSWidgetMetricsService, _PASQueueLock;
@protocol ATXChronoServicesProviderDelegate;

#import <Foundation/Foundation.h>


@interface ATXChronoServicesProvider : NSObject {
    CHSProactiveService *_proactiveService;
    SBSWidgetMetricsService *_widgetMetricService;
    _PASQueueLock *_lock;
}


@property (weak, nonatomic) NSObject<ATXChronoServicesProviderDelegate> *delegate; // ivar: _delegate


-(BOOL)_allReloadsAreCompletedInGuardedData:(id)arg0 ;
-(BOOL)_isCurrentTimelineRelevanceScoreNonPositiveForEntries:(id)arg0 ;
-(BOOL)_shouldBlockSuggestionForWidget:(id)arg0 entries:(id)arg1 ;
-(id)_recordFromSuggestionLayout:(id)arg0 guardedData:(id)arg1 ;
-(id)_widgetFromSuggestionLayout:(id)arg0 ;
-(id)init;
-(id)initWithProactiveService:(id)arg0 widgetMetricsService:(id)arg1 ;
-(void)_chronoDidReplyHandle:(id)arg0 timelineEntries:(id)arg1 forWidget:(id)arg2 withError:(id)arg3 ;
-(void)_removeOudatedFailureEntriesInGuardedData:(id)arg0 ;
-(void)_requestChronoToLoadWidget:(id)arg0 inGuardedData:(id)arg1 ;
-(void)_updateAndSendHomeScreenSuggestionsToDelegateWithGuardedData:(id)arg0 ;
-(void)_updateGuardedData:(id)arg0 withNewCachedSuggestions:(id)arg1 ;
-(void)resetToPrewarmWidgetsInSuggestions:(id)arg0 ;


@end


#endif