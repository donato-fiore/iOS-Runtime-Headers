// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKJULIANINDEXEDSEVENDAYQUANTITYSERIESAXISLABEL_H
#define HKJULIANINDEXEDSEVENDAYQUANTITYSERIESAXISLABEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface HKJulianIndexedSevenDayQuantitySeriesAxisLabel : NSObject

@property (readonly, nonatomic) CGFloat location; // ivar: _location
@property (readonly, nonatomic) NSString *text; // ivar: _text
@property (readonly, nonatomic) NSInteger type; // ivar: _type


-(id)initWithText:(id)arg0 location:(CGFloat)arg1 ;
-(id)initWithText:(id)arg0 location:(CGFloat)arg1 type:(NSInteger)arg2 ;


@end


#endif