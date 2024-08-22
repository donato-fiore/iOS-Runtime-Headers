// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKAFIBBURDENDATAPROVIDERCURRENTVALUE_H
#define HKAFIBBURDENDATAPROVIDERCURRENTVALUE_H

@class NSNumber, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKAFibBurdenDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSNumber *_maxValue;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithMaxValue:(id)arg0 date:(id)arg1 ;


@end


#endif