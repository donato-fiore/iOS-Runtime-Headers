// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SBDIRECTTOAIRPLAYPOLICYSTATE_H
#define _SBDIRECTTOAIRPLAYPOLICYSTATE_H

@class NSSet, NSString;

#import <Foundation/Foundation.h>


@interface _SBDirectToAirPlayPolicyState : NSObject

@property (readonly, copy, nonatomic) NSSet *allForegroundBundleIDs; // ivar: _allForegroundBundleIDs
@property (readonly, copy, nonatomic) NSSet *allPlayingBundleIDs; // ivar: _allPlayingBundleIDs
@property (readonly, nonatomic) BOOL anyAppIsPlaying;
@property (readonly, nonatomic) BOOL anyEligibleAppIsForeground;
@property (readonly, nonatomic) BOOL anyIneligibleAppIsForeground;
@property (readonly, nonatomic) BOOL anyPlayingAppIsForeground;
@property (readonly, nonatomic) BOOL anyReadyAppIsForeground;
@property (readonly, nonatomic) BOOL currentRouteIsWired; // ivar: _currentRouteIsWired
@property (readonly, copy, nonatomic) NSSet *foregroundEligibleBundleIDs; // ivar: _foregroundEligibleBundleIDs
@property (readonly, copy, nonatomic) NSSet *foregroundIneligibleBundleIDs; // ivar: _foregroundIneligibleBundleIDs
@property (readonly, copy, nonatomic) NSSet *foregroundPlayingBundleIDs; // ivar: _foregroundPlayingBundleIDs
@property (readonly, copy, nonatomic) NSSet *foregroundReadyBundleIDs; // ivar: _foregroundReadyBundleIDs
@property (readonly, nonatomic) BOOL playingAppIsActivelyPlaying; // ivar: _playingAppIsActivelyPlaying
@property (readonly, nonatomic) NSUInteger policyStateSerialNumber; // ivar: _policyStateSerialNumber
@property (readonly, copy, nonatomic) NSString *routeName; // ivar: _routeName
@property (readonly, nonatomic) BOOL suppressReadyStateForLock; // ivar: _suppressReadyStateForLock
@property (readonly, nonatomic) BOOL suppressStateChangesForObscured; // ivar: _suppressStateChangesForObscured


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;


@end


#endif