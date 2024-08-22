// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NMUMETRICSREPORTER_H
#define NMUMETRICSREPORTER_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NMUMetricsReporter : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)_actionNameFromAlertAction:(NSUInteger)arg0 ;
+(id)_actionNameFromMoreActionType:(NSUInteger)arg0 ;
+(id)_alertReasonFromDownloadWaitingReason:(NSUInteger)arg0 ;
+(id)_alertReasonFromKeepLocalErrorAlertReason:(NSUInteger)arg0 ;
+(id)_contextNameFromMoreActionContextType:(NSUInteger)arg0 ;
+(id)_endpointNameFromEndpointType:(NSUInteger)arg0 ;
+(id)_launcherNameForLaunchURLType:(NSUInteger)arg0 ;
+(id)_processName;
+(id)_stringForRoutePickingResult:(NSUInteger)arg0 ;
+(id)_viewNameForViewType:(NSUInteger)arg0 ;
+(id)sharedMetricsReporter;
+(void)incrementAutoPlayChangeCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementBrowsingCountForViewType:(NSUInteger)arg0 endpointType:(NSUInteger)arg1 ;
+(void)incrementCrownBasedVolumeControlCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementLaunchCountForLaunchURLType:(NSUInteger)arg0 ;
+(void)incrementPlaybackRoutePickerPresentationCount;
+(void)incrementPlaybackShuffleAllCountFromViewType:(NSUInteger)arg0 endpointType:(NSUInteger)arg1 ;
+(void)incrementPlaybackStartCountFromViewType:(NSUInteger)arg0 endpointType:(NSUInteger)arg1 ;
+(void)incrementPlaybackStartCountFromViewType:(NSUInteger)arg0 index:(NSInteger)arg1 endpointType:(NSUInteger)arg2 ;
+(void)incrementRepeatModeChangeCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementRouteChangeCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementRouteSelectCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementRouteSelectionResult:(NSUInteger)arg0 endpointType:(NSUInteger)arg1 ;
+(void)incrementShuffleModeChangeCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementTapCountForDownloadWaitingReason:(NSUInteger)arg0 action:(NSUInteger)arg1 ;
+(void)incrementTapCountForKeepLocalErrorAlertReason:(NSUInteger)arg0 action:(NSUInteger)arg1 ;
+(void)incrementTapCountForMoreActionType:(NSUInteger)arg0 context:(NSUInteger)arg1 endpointType:(NSUInteger)arg2 ;
+(void)incrementTrackListTrackSelectionCountWithEndpointType:(NSUInteger)arg0 ;
+(void)incrementW1RouteAutoSelectionResult:(NSUInteger)arg0 ;
+(void)updatePinnedAlbumsCount:(NSInteger)arg0 ;
+(void)updatePinnedPlaylistsCount:(NSInteger)arg0 ;
+(void)updatePinnedRecommendationsCount:(NSInteger)arg0 ;
+(void)updateTopLevelContainersCount:(NSInteger)arg0 ;
-(id)init;
-(void)_sendEvent:(id)arg0 payload:(id)arg1 ;


@end


#endif