// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKGENERICQUANTITYDATAPROVIDERCURRENTVALUE_H
#define HKGENERICQUANTITYDATAPROVIDERCURRENTVALUE_H

@class HKQuantity, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKGenericQuantityDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    HKQuantity *_quantity;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithQuantity:(id)arg0 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;
-(id)stringWithDisplayType:(id)arg0 unitController:(id)arg1 ;


@end


#endif