// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKAUDIOEXPOSUREDATAPROVIDERCURRENTVALUE_H
#define HKAUDIOEXPOSUREDATAPROVIDERCURRENTVALUE_H

@class HKQuantity, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKAudioExposureDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSUInteger _classification;
    HKQuantity *_leqQuantity;
    CGFloat _secondsListened;
    NSInteger _daysAggregated;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_attributedSymbolForClassification:(NSUInteger)arg0 font:(id)arg1 ;
-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)attributedSupplementaryStringWithDisplayType:(id)arg0 unitController:(id)arg1 font:(id)arg2 ;
-(id)initWithLEQQuantity:(id)arg0 secondsListened:(CGFloat)arg1 daysAggregated:(NSInteger)arg2 date:(id)arg3 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;
-(id)lastUpdatedShortDescriptionWithDateCache:(id)arg0 ;
-(id)stringWithDisplayType:(id)arg0 unitController:(id)arg1 ;


@end


#endif