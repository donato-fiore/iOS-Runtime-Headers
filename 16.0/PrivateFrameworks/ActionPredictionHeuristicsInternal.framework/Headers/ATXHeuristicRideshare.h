// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXHEURISTICRIDESHARE_H
#define ATXHEURISTICRIDESHARE_H

@class NSString;
@protocol ATXContextHeuristicProtocol, OS_nw_path_monitor, OS_nw_path, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ATXHeuristicRideshare : NSObject <ATXContextHeuristicProtocol>

 {
    NSObject<OS_nw_path_monitor> *_pathMonitor;
    NSObject<OS_nw_path> *_networkPath;
    NSObject<OS_dispatch_queue> *_accessQueue;
    int _currentStatus;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)_appRegistrationChange:(id)arg0 ;
+(void)subscribeNotification;
-(id)heuristicResultWithEnvironment:(id)arg0 ;
-(id)init;
-(id)permanentRefreshTriggers;
-(id)rideShareAppWithHeuristicDevice:(id)arg0 ;
-(id)rideShareSuggestionActionForDestination:(id)arg0 heuristicDevice:(id)arg1 flightInformationSchema:(id)arg2 predictionReasons:(NSUInteger)arg3 score:(CGFloat)arg4 validFromStartDate:(id)arg5 validToEndDate:(id)arg6 ;
-(id)rideShareSuggestionActionForEvent:(id)arg0 heuristicDevice:(id)arg1 predictionReasons:(NSUInteger)arg2 score:(CGFloat)arg3 validFromStartDate:(id)arg4 validToEndDate:(id)arg5 ;
-(id)suggestionForConcludedFlightWithHeuristicDevice:(id)arg0 ;
-(id)suggestionForUpcomingFlightWithHeuristicDevice:(id)arg0 ;
-(void)dealloc;
-(void)sendRefreshNotificationIfRequired:(id)arg0 ;
-(void)setupCellularNetworkMonitoring;


@end


#endif