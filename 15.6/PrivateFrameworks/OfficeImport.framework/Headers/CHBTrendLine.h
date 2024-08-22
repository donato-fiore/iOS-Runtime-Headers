// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHBTRENDLINE_H
#define CHBTRENDLINE_H


#import <Foundation/Foundation.h>


@interface CHBTrendLine : NSObject



+(?)readTrendlineGraphicProperties:(?)arg0 forStyleIndexstate;
+(int)edTrendLineTypeFrom:(int)arg0 order:(int)arg1 ;
+(int)xlTrendLineRegressionTypeFrom:(int)arg0 ;
+(void)readFrom:(*void)arg0 toSeries:(id)arg1 state:(id)arg2 ;


@end


#endif