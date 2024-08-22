// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PLLOCATIONOFINTEREST_H
#define PLLOCATIONOFINTEREST_H

@class NSUUID, NSMutableArray;

#import <Foundation/Foundation.h>

#import "PLLocationOfInterestLocation.h"

@interface PLLocationOfInterest : NSObject

@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) PLLocationOfInterestLocation *mapItemLocation; // ivar: _mapItemLocation
@property (readonly, nonatomic) PLLocationOfInterestLocation *routineLocation; // ivar: _routineLocation
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, nonatomic) CGFloat typeRadius; // ivar: _typeRadius
@property (retain, nonatomic) NSMutableArray *visits; // ivar: _visits


-(BOOL)isEqual:(id)arg0 ;
-(CGFloat)centerDistanceFromLocation:(id)arg0 ;
-(CGFloat)distanceFromLocation:(id)arg0 ;
-(NSUInteger)hash;
-(id)description;
-(id)initWithIdentifier:(id)arg0 locationOfInterestType:(NSInteger)arg1 typeRadius:(CGFloat)arg2 routineLocation:(id)arg3 mapItemLocation:(id)arg4 ;
-(void)addVisit:(id)arg0 ;
-(void)removeVisit:(id)arg0 ;


@end


#endif