// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOROUTEPRELOADERSTATISTICS_H
#define GEOROUTEPRELOADERSTATISTICS_H

@class NSDateInterval;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORoutePreloaderStatistics : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) NSUInteger tilesMissed; // ivar: _tilesMissed
@property (nonatomic) NSUInteger tilesPreloaded; // ivar: _tilesPreloaded
@property (nonatomic) NSUInteger tilesUsed; // ivar: _tilesUsed
@property (nonatomic) NSInteger transportType; // ivar: _transportType


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 transportType:(NSInteger)arg1 tilesPreloaded:(NSUInteger)arg2 tilesUsed:(NSUInteger)arg3 tilesMissed:(NSUInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif