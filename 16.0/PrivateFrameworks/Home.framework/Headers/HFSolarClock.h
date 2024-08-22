// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HFSOLARCLOCK_H
#define HFSOLARCLOCK_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface HFSolarClock : NSObject

@property (readonly, nonatomic) NSArray *solarCoordinates; // ivar: _solarCoordinates


-(NSUInteger)bestFitCoordinateIndexForLatitude:(CGFloat)arg0 forLongitude:(CGFloat)arg1 forData:(id)arg2 ;
-(id)_sortedCoordinatesArrayWithReferenceToCoordinate:(id)arg0 ;
-(id)initWithSolarCoordinates:(id)arg0 ;


@end


#endif