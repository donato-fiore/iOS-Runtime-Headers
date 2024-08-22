// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCARDIOFITNESSDATAPROVIDERCURRENTVALUE_H
#define HKCARDIOFITNESSDATAPROVIDERCURRENTVALUE_H

@class HKQuantity, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKCardioFitnessDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    HKQuantity *_vo2maxQuantity;
    NSInteger _biologicalSex;
    NSInteger _ageInYears;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithVO2MaxQuantity:(id)arg0 biologicalSex:(NSInteger)arg1 age:(NSInteger)arg2 date:(id)arg3 ;


@end


#endif