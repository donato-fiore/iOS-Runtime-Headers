// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WBSDIGITALHEALTHMANAGER_H
#define WBSDIGITALHEALTHMANAGER_H

@class DMFWebsitePolicyMonitor, NSMutableDictionary;
@protocol WBSDigitalHealthManagerDelegate;

#import <Foundation/Foundation.h>


@interface WBSDigitalHealthManager : NSObject {
    DMFWebsitePolicyMonitor *_monitor;
    NSMutableDictionary *_trackedUrlsToUsageState;
}


@property (weak, nonatomic) NSObject<WBSDigitalHealthManagerDelegate> *delegate; // ivar: _delegate


+(void)_updateWebpageUsage:(id)arg0 withDigitalHealthManagerUsageState:(NSUInteger)arg1 ;
+(void)deleteAllUsageHistory;
+(void)deleteUsageHistoryForURLs:(id)arg0 ;
+(void)deleteUsageHistoryFromDate:(id)arg0 toDate:(id)arg1 ;
-(id)init;
-(void)_historyItemsWereRemoved:(id)arg0 ;
-(void)_historyWasCleared:(id)arg0 ;
-(void)_requestPoliciesForWebsites:(id)arg0 completionHandler:(id)arg1 ;
-(void)dealloc;
-(void)getOverlayStateForURLs:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)startObserving;
-(void)stopObserving;
-(void)stopUsageTrackingForURL:(id)arg0 ;
-(void)stopUsageTrackingForURL:(id)arg0 withCompletionHandler:(id)arg1 ;
-(void)updateUsageTrackingForURL:(id)arg0 withBundleIdentifier:(id)arg1 toState:(NSUInteger)arg2 ;


@end


#endif