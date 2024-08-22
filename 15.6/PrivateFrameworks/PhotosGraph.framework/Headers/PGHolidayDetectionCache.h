// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PGHOLIDAYDETECTIONCACHE_H
#define PGHOLIDAYDETECTIONCACHE_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface PGHolidayDetectionCache : NSObject

@property (readonly, nonatomic) NSArray *holidayDateNodes; // ivar: _holidayDateNodes
@property (readonly, nonatomic) NSArray *negativelyClassifiedMomentNodes; // ivar: _negativelyClassifiedMomentNodes
@property (readonly, nonatomic) NSArray *positivelyClassifiedMomentNodes; // ivar: _positivelyClassifiedMomentNodes


-(id)init;
-(void)addHolidayWithDateNode:(id)arg0 ;
-(void)addNegativelyClassifiedMomentNode:(id)arg0 ;
-(void)addPositivelyClassifiedMomentNode:(id)arg0 ;


@end


#endif