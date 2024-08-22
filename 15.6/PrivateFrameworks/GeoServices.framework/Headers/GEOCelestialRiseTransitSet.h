// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOCELESTIALRISETRANSITSET_H
#define GEOCELESTIALRISETRANSITSET_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface GEOCelestialRiseTransitSet : NSObject {
    NSDate *_rise;
    NSDate *_transit;
    NSDate *_set;
}


@property (readonly, nonatomic) BOOL isTransitAboveHorizon;
@property (readonly, nonatomic) CGFloat julianDay; // ivar: _julianDay
@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) CAARiseTransitSetDetails riseTransitSet; // ivar: _riseTransitSet
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) NSDate *transit;


-(CGFloat)_oldestEventInJulianDay;
-(id)_dateFromOffset:(CGFloat)arg0 ;
-(id)description;
-(id)initWithJulianDay:(CGFloat)arg0 riseTransitSet:(struct CAARiseTransitSetDetails )arg1 ;
-(int)_numberOfEvents;


@end


#endif