// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EBESCHERSHAPE_H
#define EBESCHERSHAPE_H

@class NSData;


#import "ESDObject.h"
#import "CHDChart.h"

@interface EBEscherShape : ESDObject {
    NSData *mChartData;
    BOOL mShowLegend;
    CHDChart *mChart;
}




-(BOOL)showLegend;
-(id)chart;
-(id)chartData;
-(void)setChart:(id)arg0 ;
-(void)setChartData:(id)arg0 ;
-(void)setShowLegend:(BOOL)arg0 ;


@end


#endif