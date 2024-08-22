// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFAUTOJOINCONTEXT_H
#define CWFAUTOJOINCONTEXT_H

@class NSArray, NSOrderedSet;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"

@interface CWFAutoJoinContext : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *ANQPElementIDList; // ivar: _ANQPElementIDList
@property (nonatomic) BOOL BSSChannelsOnly; // ivar: _BSSChannelsOnly
@property (copy, nonatomic) NSArray *SSIDList; // ivar: _SSIDList
@property (nonatomic) BOOL allowDeferredCandidates; // ivar: _allowDeferredCandidates
@property (nonatomic) BOOL allowStandalone6GHz; // ivar: _allowStandalone6GHz
@property (nonatomic) BOOL alwaysIncludeRemainingNon2GHzChannels; // ivar: _alwaysIncludeRemainingNon2GHzChannels
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters; // ivar: _autoJoinParameters
@property (nonatomic) BOOL cacheOnly; // ivar: _cacheOnly
@property (nonatomic) NSUInteger dwellTime; // ivar: _dwellTime
@property (nonatomic) BOOL includeAdjacent5GHzChannel; // ivar: _includeAdjacent5GHzChannel
@property (copy, nonatomic) NSOrderedSet *knownNetworks; // ivar: _knownNetworks
@property (nonatomic) NSUInteger maxANQPCacheAge; // ivar: _maxANQPCacheAge
@property (nonatomic) NSUInteger maxBSSChannelAge; // ivar: _maxBSSChannelAge
@property (nonatomic) NSUInteger maxBSSChannelCount; // ivar: _maxBSSChannelCount
@property (nonatomic) CGFloat maxBSSLocationDistance; // ivar: _maxBSSLocationDistance
@property (nonatomic) NSUInteger maxHiddenKnownNetworkSSIDAge; // ivar: _maxHiddenKnownNetworkSSIDAge
@property (nonatomic) NSUInteger maxScanCacheAge; // ivar: _maxScanCacheAge
@property (nonatomic) NSUInteger maxScanChannelCount; // ivar: _maxScanChannelCount
@property (nonatomic) NSUInteger maxScanCycles; // ivar: _maxScanCycles
@property (nonatomic) NSUInteger maxScanSSIDCount; // ivar: _maxScanSSIDCount
@property (nonatomic) CGFloat minBSSLocationAccuracy; // ivar: _minBSSLocationAccuracy
@property (nonatomic) NSInteger minRSSI; // ivar: _minRSSI
@property (nonatomic) BOOL passiveScan; // ivar: _passiveScan
@property (copy, nonatomic) NSArray *recentChannelList; // ivar: _recentChannelList
@property (copy, nonatomic) NSArray *remainingChannelList; // ivar: _remainingChannelList


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAutoJoinContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif