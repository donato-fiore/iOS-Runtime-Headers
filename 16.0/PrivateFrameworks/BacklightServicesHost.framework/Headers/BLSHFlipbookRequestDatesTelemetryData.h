// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLSHFLIPBOOKREQUESTDATESTELEMETRYDATA_H
#define BLSHFLIPBOOKREQUESTDATESTELEMETRYDATA_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface BLSHFlipbookRequestDatesTelemetryData : NSObject

@property (readonly, nonatomic) CGFloat averageInterval; // ivar: _averageInterval
@property (readonly, nonatomic) CGFloat completionDuration; // ivar: _completionDuration
@property (readonly, nonatomic) BOOL didReset; // ivar: _didReset
@property (readonly, nonatomic) unsigned int environmentCount;
@property (readonly, nonatomic) NSArray *environmentIdentifiers; // ivar: _environmentIdentifiers
@property (readonly, nonatomic) NSString *firstEnvironmentIdentifier;
@property (readonly, nonatomic) CGFloat longestInterval; // ivar: _longestInterval
@property (readonly, nonatomic) CGFloat shortestInterval; // ivar: _shortestInterval
@property (readonly, nonatomic) NSUInteger timedOutCount; // ivar: _timedOutCount
@property (readonly, nonatomic) CGFloat timestamp; // ivar: _timestamp


-(id)description;
-(id)initWithTimestamp:(CGFloat)arg0 environmentIdentifiers:(id)arg1 shortestInterval:(CGFloat)arg2 averageInterval:(CGFloat)arg3 longestInterval:(CGFloat)arg4 completionDuration:(CGFloat)arg5 didReset:(BOOL)arg6 timedOutCount:(unsigned int)arg7 ;


@end


#endif