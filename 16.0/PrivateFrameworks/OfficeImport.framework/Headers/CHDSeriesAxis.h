// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CHDSERIESAXIS_H
#define CHDSERIESAXIS_H



#import "CHDAxis.h"

@interface CHDSeriesAxis : CHDAxis {
    int mLabelFrequency;
}




-(id)initWithResources:(id)arg0 ;
-(int)labelFrequency;
-(void)setLabelFrequency:(int)arg0 ;


@end


#endif