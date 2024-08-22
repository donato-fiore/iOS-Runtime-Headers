// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSLEEPDATAPROVIDERCURRENTVALUE_H
#define HKSLEEPDATAPROVIDERCURRENTVALUE_H

@class NSNumber, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKSleepDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSNumber *_timeIntervalSlept;
}


@property (readonly, nonatomic) NSInteger categoryValue; // ivar: _categoryValue
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dataProviderValueWithSleepQueryResult:(id)arg0 ;
-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithTimeInterval:(CGFloat)arg0 categoryValue:(NSInteger)arg1 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;


@end


#endif