// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKBLOODPRESSUREDATAPROVIDERCURRENTVALUE_H
#define HKBLOODPRESSUREDATAPROVIDERCURRENTVALUE_H

@class NSDate, HKQuantity, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKBloodPressureDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSDate *_date;
    HKQuantity *_systolicValue;
    HKQuantity *_diastolicValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_quantityForType:(id)arg0 correlation:(id)arg1 ;
-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)date;
-(id)initWithCorrelation:(id)arg0 ;
-(id)initWithSystolicValue:(id)arg0 diastolicValue:(id)arg1 date:(id)arg2 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;


@end


#endif