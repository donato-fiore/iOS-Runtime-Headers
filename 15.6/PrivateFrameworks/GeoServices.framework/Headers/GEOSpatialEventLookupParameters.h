// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOSPATIALEVENTLOOKUPPARAMETERS_H
#define GEOSPATIALEVENTLOOKUPPARAMETERS_H

@class NSArray, NSDateInterval;

#import <Foundation/Foundation.h>


@interface GEOSpatialEventLookupParameters : NSObject

@property (readonly, nonatomic) NSArray *categories; // ivar: _categories
@property (readonly, nonatomic) ? coordinate; // ivar: _coordinate
@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (readonly, nonatomic) int maxResultCount; // ivar: _maxResultCount
@property (readonly, nonatomic) CGFloat radius; // ivar: _radius


-(id)init;
-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 categories:(id)arg2 dateInterval:(id)arg3 ;
-(id)initWithCoordinate:(struct ? )arg0 radius:(CGFloat)arg1 categories:(id)arg2 dateInterval:(id)arg3 maxResultCount:(int)arg4 ;


@end


#endif