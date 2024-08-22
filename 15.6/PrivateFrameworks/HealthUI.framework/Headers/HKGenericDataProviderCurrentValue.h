// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKGENERICDATAPROVIDERCURRENTVALUE_H
#define HKGENERICDATAPROVIDERCURRENTVALUE_H

@class NSNumber, NSDate, NSString;
@protocol HKDataProviderValue;

#import <Foundation/Foundation.h>


@interface HKGenericDataProviderCurrentValue : NSObject <HKDataProviderValue>

 {
    NSNumber *_value;
}


@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)attributedStringWithDisplayType:(id)arg0 unitController:(id)arg1 valueFont:(id)arg2 unitFont:(id)arg3 dateCache:(id)arg4 ;
-(id)initWithValue:(id)arg0 ;
-(id)lastUpdatedDescriptionWithDateCache:(id)arg0 ;


@end


#endif