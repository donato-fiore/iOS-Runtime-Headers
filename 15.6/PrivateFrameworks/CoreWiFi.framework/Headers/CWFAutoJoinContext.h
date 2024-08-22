// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CWFAUTOJOINCONTEXT_H
#define CWFAUTOJOINCONTEXT_H

@class NSArray, NSUUID;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "CWFAutoJoinParameters.h"

@interface CWFAutoJoinContext : NSObject <NSCopying>



@property (copy, nonatomic) NSArray *ANQPElementIDList; // ivar: _ANQPElementIDList
@property (copy, nonatomic) NSArray *SSIDList; // ivar: _SSIDList
@property (copy, nonatomic) CWFAutoJoinParameters *autoJoinParameters; // ivar: _autoJoinParameters
@property (copy, nonatomic) NSUUID *autoJoinUUID; // ivar: _autoJoinUUID
@property (nonatomic) BOOL cacheOnly; // ivar: _cacheOnly
@property (copy, nonatomic) NSArray *channelList; // ivar: _channelList
@property (nonatomic) NSUInteger dwellTime; // ivar: _dwellTime
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


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif