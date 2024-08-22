// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CWFAUTOJOINRETRYINTERVAL_H
#define CWFAUTOJOINRETRYINTERVAL_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CWFAutoJoinRetryInterval : NSObject <NSCopying>



@property (nonatomic) BOOL BSSChannelsOnly; // ivar: _BSSChannelsOnly
@property (nonatomic) BOOL allowAutoHotspotFallback; // ivar: _allowAutoHotspotFallback
@property (nonatomic) BOOL alwaysIncludeRemainingNon2GHzChannels; // ivar: _alwaysIncludeRemainingNon2GHzChannels
@property (nonatomic) NSUInteger count; // ivar: _count
@property (nonatomic) NSUInteger dwellTime; // ivar: _dwellTime
@property (nonatomic) BOOL includeAdjacent5GHzChannel; // ivar: _includeAdjacent5GHzChannel
@property (nonatomic) NSUInteger interval; // ivar: _interval
@property (nonatomic) NSUInteger maxBSSChannelAge; // ivar: _maxBSSChannelAge
@property (nonatomic) NSUInteger maxBSSChannelCount; // ivar: _maxBSSChannelCount
@property (nonatomic) BOOL passiveScan; // ivar: _passiveScan


-(id)autoJoinRetryInterval:(NSUInteger)arg0 count:(NSUInteger)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;


@end


#endif