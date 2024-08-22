// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDCATEGORYAXIS_H
#define CHDCATEGORYAXIS_H



#import "CHDAxis.h"

@interface CHDCategoryAxis : CHDAxis {
    BOOL mAutomatic;
    BOOL mNoMultipleLevelLabel;
    int mLabelAlignment;
    NSInteger mLabelFrequency;
    BOOL mLabelFrequencyAutomatic;
    BOOL mShowSeriesNames;
}




-(BOOL)isAutomatic;
-(BOOL)isLabelFrequencyAutomatic;
-(BOOL)isNoMultipleLabellevel;
-(BOOL)showSeriesLabels;
-(NSInteger)labelFrequency;
-(id)initWithResources:(id)arg0 ;
-(int)labelAlignment;
-(void)adjustAxisPositionForHorizontalChart;
-(void)setAutomatic:(BOOL)arg0 ;
-(void)setLabelAlignment:(int)arg0 ;
-(void)setLabelFrequency:(NSInteger)arg0 ;
-(void)setNoMultipleLevelLabel:(BOOL)arg0 ;
-(void)setShowSeriesLabels:(BOOL)arg0 ;


@end


#endif