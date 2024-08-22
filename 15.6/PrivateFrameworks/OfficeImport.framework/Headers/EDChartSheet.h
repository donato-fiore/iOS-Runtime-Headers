// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EDCHARTSHEET_H
#define EDCHARTSHEET_H



#import "EDSheet.h"
#import "CHDChart.h"

@interface EDChartSheet : EDSheet {
    CHDChart *mMainChart;
    BOOL mIsBoundsSet;
    CGRect mBounds;
}




-(BOOL)areBoundsSet;
-(id)mainChart;
-(struct CGRect )bounds;
-(void)addDrawable:(id)arg0 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setMainChart:(id)arg0 ;
-(void)teardown;


@end


#endif