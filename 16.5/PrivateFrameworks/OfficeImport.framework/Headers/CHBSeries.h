// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHBSERIES_H
#define CHBSERIES_H


#import <Foundation/Foundation.h>


@interface CHBSeries : NSObject



+(Class)chdSeriesClassWithState:(id)arg0 ;
+(id)chdSeriesWithState:(id)arg0 ;
+(id)readFrom:(*void)arg0 state:(id)arg1 ;
+(void)readXlChartSeriesFormat:(*void)arg0 chdSeries:(id)arg1 state:(id)arg2 ;
+(void)resolveSeriesStyle:(id)arg0 state:(id)arg1 ;


@end


#endif