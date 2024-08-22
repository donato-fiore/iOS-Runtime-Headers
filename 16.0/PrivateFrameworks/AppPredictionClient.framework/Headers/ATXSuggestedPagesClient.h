// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXSUGGESTEDPAGESCLIENT_H
#define ATXSUGGESTEDPAGESCLIENT_H

@class NSXPCConnection;
@protocol ATXSuggestedPagesInterface, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "ATXInstalledSuggestedPagesTracker.h"

@interface ATXSuggestedPagesClient : NSObject <ATXSuggestedPagesInterface>

 {
    NSXPCConnection *_xpcConnection;
    ATXInstalledSuggestedPagesTracker *_tracker;
    NSObject<OS_dispatch_queue> *_queue;
}




+(BOOL)shouldShowInternalFeedbackUI;
+(id)tapToRadarURLForModeName:(id)arg0 ;
-(BOOL)allowsSuggestionsForModeUUID:(id)arg0 ;
-(id)init;
-(struct CGImage *)cachedSnapshotForSuggestedPageWithIdentifier:(id)arg0 ;
-(void)_createInstalledPagesTrackerIfNeeded;
-(void)didAddAppsWithBundleIds:(id)arg0 suggestedPage:(id)arg1 ;
-(void)didInstallSuggestedPage:(id)arg0 ;
-(void)didRemoveAppsWithBundleIds:(id)arg0 suggestedPage:(id)arg1 ;
-(void)sendModificationMetricsToCoreAnalyticsWithBundleIds:(id)arg0 suggestedPage:(id)arg1 isAdded:(BOOL)arg2 ;
-(void)suggestedPagesWithFilter:(id)arg0 layoutOptions:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif