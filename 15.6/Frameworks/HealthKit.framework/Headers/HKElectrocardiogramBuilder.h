// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKELECTROCARDIOGRAMBUILDER_H
#define HKELECTROCARDIOGRAMBUILDER_H

@class NSDate;

#import <Foundation/Foundation.h>

#import "HKQuantity.h"

@interface HKElectrocardiogramBuilder : NSObject {
    map<binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead, std::less<binarysample::ElectrocardiogramLead_Name>, std::allocator<std::pair<const binarysample::ElectrocardiogramLead_Name, binarysample::ElectrocardiogramLead>>> _leads;
    HKQuantity *_averageHeartRate;
    NSUInteger _classification;
}


@property (copy, nonatomic) HKQuantity *frequency; // ivar: _frequency
@property (copy, nonatomic) NSDate *startDate; // ivar: _startDate


-(id)finishWithDevice:(id)arg0 metadata:(id)arg1 ;
-(id)initWithStartDate:(id)arg0 frequency:(id)arg1 ;
-(void)addAverageHeartRate:(id)arg0 ;
-(void)addClassification:(NSUInteger)arg0 ;
-(void)addValue:(float)arg0 lead:(NSInteger)arg1 ;


@end


#endif