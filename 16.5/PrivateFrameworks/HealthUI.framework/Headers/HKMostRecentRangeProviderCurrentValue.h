// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKMOSTRECENTRANGEPROVIDERCURRENTVALUE_H
#define HKMOSTRECENTRANGEPROVIDERCURRENTVALUE_H

@class HKQuantity, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKMostRecentRangeProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    HKQuantity *_minimumValue;
    HKQuantity *_maximumValue;
    BOOL _isSingleValue;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg0 unitController:(id)arg1 font:(id)arg2 ;
-(id)initWithMinimumValue:(id)arg0 maximumValue:(id)arg1 date:(id)arg2 ;


@end


#endif