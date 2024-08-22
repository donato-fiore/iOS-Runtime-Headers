// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CWFAUTOJOINCONTEXT_H
#define CWFAUTOJOINCONTEXT_H

@class NSArray, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"

@interface CWFAutoJoinContext : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *ANQPElementIDList; // ivar: _ANQPElementIDList
@property (nonatomic) BOOL BSSChannelsOnly; // ivar: _BSSChannelsOnly
@property (copy, nonatomic) NSArray *SSIDList; // ivar: _SSIDList
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters; // ivar: _autoJoinParameters
@property (copy, nonatomic) NSUUID *autoJoinUUID; // ivar: _autoJoinUUID
@property (nonatomic) BOOL cacheOnly; // ivar: _cacheOnly
@property (nonatomic) NSUInteger dwellTime; // ivar: _dwellTime
@property (nonatomic) BOOL includeAdjacent5GHzChannel; // ivar: _includeAdjacent5GHzChannel
@property (copy, nonatomic) NSArray *knownNetworks; // ivar: _knownNetworks
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


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif