// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MNROUTEREFRESHPOLICYRULESTIMETOLEAVE_H
#define MNROUTEREFRESHPOLICYRULESTIMETOLEAVE_H

@class NSString;
@protocol MNRouteRefreshPolicyRules;

#import <Foundation/Foundation.h>


@interface MNRouteRefreshPolicyRulesTimeToLeave : NSObject <MNRouteRefreshPolicyRules>



@property (readonly, nonatomic) BOOL canWakeClientForUpdates;
@property (readonly, nonatomic) BOOL canWakeDeviceForUpdates;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger policy; // ivar: _policy
@property (readonly) Class superclass;


-(BOOL)canMakeNetworkRequestsForDestination:(id)arg0 atDate:(id)arg1 ;
-(CGFloat)_timeIntervalToDestination:(id)arg0 fromDate:(id)arg1 ;
-(CGFloat)maxTimeIntervalFromNowForDestinationRefresh:(id)arg0 fromDate:(id)arg1 ;
-(CGFloat)timeIntervalForDestinationRefresh:(id)arg0 lastUpdate:(id)arg1 ;
-(id)init;


@end


#endif