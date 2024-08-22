// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKPOPULATIONNORMSAXISLABEL_H
#define HKPOPULATIONNORMSAXISLABEL_H

@class NSNumber, NSString;

#import <Foundation/Foundation.h>


@interface HKPopulationNormsAxisLabel : NSObject

@property (readonly, copy, nonatomic) NSNumber *rangeEnd; // ivar: _rangeEnd
@property (copy, nonatomic) NSNumber *rangeStart; // ivar: _rangeStart
@property (readonly, nonatomic) NSString *separatorString;


-(id)initWithRangeStart:(id)arg0 end:(id)arg1 ;
-(id)initWithValue:(id)arg0 ;
-(id)stringRepresentation;


@end


#endif