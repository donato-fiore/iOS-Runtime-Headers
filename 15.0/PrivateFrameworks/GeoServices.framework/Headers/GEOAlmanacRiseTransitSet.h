// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEOALMANACRISETRANSITSET_H
#define GEOALMANACRISETRANSITSET_H

@class NSDate;

#import <Foundation/Foundation.h>


@interface GEOAlmanacRiseTransitSet : NSObject {
    _GEORiseTransitSetEvent _rise;
    _GEORiseTransitSetEvent _transit;
    _GEORiseTransitSetEvent _set;
}


@property (readonly, nonatomic) _GEORiseTransitSetEvent firstItem;
@property (readonly, nonatomic) BOOL isIdeal;
@property (readonly, nonatomic) _GEORiseTransitSetEvent lastItem;
@property (readonly, nonatomic) NSDate *rise;
@property (readonly, nonatomic) NSDate *set;
@property (readonly, nonatomic) NSDate *transit;


-(id)description;
-(id)initWithRise:(struct _GEORiseTransitSetEvent *)arg0 transit:(struct _GEORiseTransitSetEvent *)arg1 set:(struct _GEORiseTransitSetEvent *)arg2 ;


@end


#endif