// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCPLAYACTIVITYFEEDEVENTCONSUMER_H
#define MPCPLAYACTIVITYFEEDEVENTCONSUMER_H

@class NSArray, NSString, NSMutableArray;
@protocol MPCPlaybackEngineEventConsumer, MPCPlaybackEngineEventStreamSubscription;

#import <Foundation/Foundation.h>


@interface MPCPlayActivityFeedEventConsumer : NSObject <MPCPlaybackEngineEventConsumer>

 {
    NSArray *_allowedBundleIds;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSMutableArray *radioPlayActivityEvents; // ivar: _radioPlayActivityEvents
@property (readonly, nonatomic) NSObject<MPCPlaybackEngineEventStreamSubscription> *subscription; // ivar: _subscription
@property (readonly) Class superclass;


+(id)identifier;
-(BOOL)_finalizePAFEvents:(id)arg0 ;
-(BOOL)_handleApplicationTerminationEvent:(id)arg0 cursor:(id)arg1 ;
-(BOOL)_handleItemEndEvent:(id)arg0 cursor:(id)arg1 ;
-(BOOL)_handleItemPauseEvent:(id)arg0 cursor:(id)arg1 ;
-(BOOL)_handleItemPositionJumpEvent:(id)arg0 cursor:(id)arg1 ;
-(BOOL)_handleItemResumeEvent:(id)arg0 cursor:(id)arg1 ;
-(BOOL)_itemIsPlaceholderFromQueueSectionIdentifier:(id)arg0 itemIdentifier:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_itemIsPlayingFromQueueSectionIdentifier:(id)arg0 itemIdentifier:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_itemWithinHLSTimedMetadataBeginFromQueueSection:(id)arg0 itemIdentifier:(id)arg1 cursor:(id)arg2 ;
-(BOOL)_vocalControlIsOnForEvent:(id)arg0 ;
-(CGFloat)_getPlaybackDurationForHLSStreamFromStartEvent:(id)arg0 toEndEvent:(id)arg1 withLimitedCursor:(id)arg2 ;
-(CGFloat)_getStartTimeForMostRecentPlaybackStart:(id)arg0 withItemBeginEvent:(id)arg1 containerBeginEvent:(id)arg2 cursor:(id)arg3 ;
-(id)_findRecentPlaybackStartFromTypes:(id)arg0 matchingPayload:(id)arg1 cursor:(id)arg2 ;
-(id)_generateAggregateNoncatalogEndEventForCursor:(id)arg0 ;
-(id)_generatePlaybackEndEventFromEvent:(id)arg0 withQueueSectionIdentifier:(id)arg1 itemIdentifier:(id)arg2 cursor:(id)arg3 ;
-(id)init;
-(void)_clampTimeValuesForPAFEvent:(id)arg0 withDuration:(CGFloat)arg1 ;
-(void)_handleURLBagProviderDidUpdateBagNotification:(id)arg0 ;
-(void)_updateAllowedBundleIdsIfNecessary:(id)arg0 ;
-(void)_updatePAFEvent:(id)arg0 withAccountIdentifier:(id)arg1 cursor:(id)arg2 ;
-(void)_updatePAFEvent:(id)arg0 withAudioChangeEvent:(id)arg1 ;
-(void)_updatePAFEvent:(id)arg0 withDeviceInfoFromCursor:(id)arg1 ;
-(void)_updatePAFEvent:(id)arg0 withEnqueuerAccountIdentifier:(id)arg1 queueAddEvent:(id)arg2 cursor:(id)arg3 ;
-(void)_updatePAFEvent:(id)arg0 withItemBeginEvent:(id)arg1 containerBeginPayload:(id)arg2 cursor:(id)arg3 forEventType:(id)arg4 ;
-(void)_updatePAFEvent:(id)arg0 withQueueAddEvent:(id)arg1 queueSectionIdentifier:(id)arg2 cursor:(id)arg3 ;
-(void)_updatePAFEvent:(id)arg0 withSharedListeningInfoFromCursor:(id)arg1 ;
-(void)_updatePAFEvent:(id)arg0 withVocalAttenuationInfoForEndEvent:(id)arg1 cursor:(id)arg2 ;
-(void)subscribeToEventStream:(id)arg0 ;
-(void)unsubscribeFromEventStream:(id)arg0 ;


@end


#endif