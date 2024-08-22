// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SBMUTABLEDIRECTTOAIRPLAYPOLICYSTATE_H
#define _SBMUTABLEDIRECTTOAIRPLAYPOLICYSTATE_H

@class SBDirectToAirPlayPolicyState, NSSet, NSString;



@interface _SBMutableDirectToAirPlayPolicyState : SBDirectToAirPlayPolicyState

@property (copy, nonatomic) NSSet *allForegroundBundleIDs;
@property (copy, nonatomic) NSSet *allPlayingBundleIDs;
@property (nonatomic) BOOL currentRouteIsWired;
@property (copy, nonatomic) NSSet *foregroundEligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundIneligibleBundleIDs;
@property (copy, nonatomic) NSSet *foregroundPlayingBundleIDs;
@property (copy, nonatomic) NSSet *foregroundReadyBundleIDs;
@property (nonatomic) BOOL playingAppIsActivelyPlaying;
@property (nonatomic) NSUInteger policyStateSerialNumber;
@property (copy, nonatomic) NSString *routeName;
@property (nonatomic) BOOL suppressReadyStateForLock;
@property (nonatomic) BOOL suppressStateChangesForObscured;




@end


#endif