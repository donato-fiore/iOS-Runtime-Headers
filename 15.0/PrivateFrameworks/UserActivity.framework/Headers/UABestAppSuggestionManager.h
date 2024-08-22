// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UABESTAPPSUGGESTIONMANAGER_H
#define UABESTAPPSUGGESTIONMANAGER_H

@class NSXPCConnection, NSString;
@protocol UABestAppSuggestionManagerResponseProtocol, UABestAppSuggestionManagerDelegate;

#import <Foundation/Foundation.h>

#import "UABestAppSuggestion.h"
#import "UABestAppSuggestionManagerProxy.h"

@interface UABestAppSuggestionManager : NSObject <UABestAppSuggestionManagerResponseProtocol>

 {
    id<UABestAppSuggestionManagerDelegate> *_delegate;
    BOOL _listeningForBestAppSuggestions;
    int _bestAppNotificationCount;
    UABestAppSuggestion *_lastBestAppSuggestion;
}


@property (retain) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<UABestAppSuggestionManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain) UABestAppSuggestionManagerProxy *proxyManager; // ivar: _proxyManager
@property (readonly) Class superclass;


-(BOOL)determineBestAppWithDelay:(CGFloat)arg0 withBlock:(id)arg1 ;
-(BOOL)fetchAllNearbyAppSuggestions;
-(BOOL)isActivityInfo:(id)arg0 atTime:(id)arg1 similarToAppSuggestion:(id)arg2 ;
-(id)bestAppSuggestion;
-(id)bestAppSuggestions:(NSInteger)arg0 ;
-(id)createAppSuggestionFromActivityInfo:(id)arg0 atTime:(id)arg1 ;
-(id)init;
-(void)bestAppSuggestionLaunchWasCancelled:(id)arg0 ;
-(void)bestAppSuggestionWasLaunched:(id)arg0 withInteractionType:(NSUInteger)arg1 ;
-(void)dealloc;
-(void)launchAppWithBestAppSuggestion:(id)arg0 ;
-(void)launchAppWithBundleIdentifier:(id)arg0 taskContinuationIdentifier:(id)arg1 ;
-(void)launchAppWithBundleIdentifier:(id)arg0 userActivityUniqueIdentifier:(id)arg1 userActivityTypeIdentifier:(id)arg2 ;
-(void)launchAppWithBundleIdentifier:(id)arg0 userActivityUniqueIdentifier:(id)arg1 userActivityTypeIdentifier:(id)arg2 deviceName:(id)arg3 deviceIdentifier:(id)arg4 deviceType:(id)arg5 ;
-(void)notifyBestAppsChanged:(id)arg0 when:(id)arg1 confidence:(CGFloat)arg2 ;
-(void)queueFetchOfPayloadForBestAppSuggestion:(id)arg0 ;
-(void)removeBestApp:(id)arg0 options:(id)arg1 ;
-(void)removeBestAppByUUID:(id)arg0 options:(id)arg1 ;
-(void)startListeningForBestAppSuggestions;
-(void)stopListeningForBestAppSuggestions;


@end


#endif