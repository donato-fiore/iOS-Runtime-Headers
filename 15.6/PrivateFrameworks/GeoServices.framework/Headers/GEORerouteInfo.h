// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOREROUTEINFO_H
#define GEOREROUTEINFO_H

@class NSDate;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GEORerouteInfo : NSObject <NSSecureCoding>

 {
    CGFloat _distancePenalty;
    CGFloat _throttledReroutesPenalty;
}


@property (nonatomic) CGFloat distanceFromDestination; // ivar: _distanceFromDestination
@property (readonly, nonatomic) CGFloat penalty; // ivar: _penalty
@property (retain, nonatomic) NSDate *time; // ivar: _time


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)updateWithCurrentTime:(id)arg0 location:(id)arg1 isMostRecentReroute:(BOOL)arg2 destinationCoordinate:(struct ? )arg3 numThrottledReroutes:(NSUInteger)arg4 ;


@end


#endif