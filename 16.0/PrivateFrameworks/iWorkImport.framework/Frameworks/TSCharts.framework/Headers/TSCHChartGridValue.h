// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCHCHARTGRIDVALUE_H
#define TSCHCHARTGRIDVALUE_H


#import <Foundation/Foundation.h>


@interface TSCHChartGridValue : NSObject



+(id)NSDateConvertedFromGridValue:(id)arg0 ;
+(id)NSDateFromGridValue:(id)arg0 ;
+(id)dateValueWithDouble:(CGFloat)arg0 ;
+(id)dateValueWithNSDate:(id)arg0 ;
+(id)durationValueWithDouble:(CGFloat)arg0 ;
+(id)instanceWithArchive:(*void)arg0 ;
+(id)numberValueWithDouble:(CGFloat)arg0 ;
+(void)saveGridValue:(id)arg0 toArchive:(*void)arg1 ;
-(id)initWithArchive:(*void)arg0 ;


@end


#endif