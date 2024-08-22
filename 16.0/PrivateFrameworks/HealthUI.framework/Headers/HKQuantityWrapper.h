// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKQUANTITYWRAPPER_H
#define HKQUANTITYWRAPPER_H

@class NSDateInterval, HKQuantity;

#import <Foundation/Foundation.h>


@interface HKQuantityWrapper : NSObject

@property (retain) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (retain) HKQuantity *quantity; // ivar: _quantity


-(id)initWithQuantity:(id)arg0 dateInterval:(id)arg1 ;


@end


#endif