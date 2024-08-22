// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHDPLOTAREA_H
#define CHDPLOTAREA_H


#import <Foundation/Foundation.h>

#import "CHDChartTypesCollection.h"
#import "CHDAxesCollection.h"
#import "OADGraphicProperties.h"

@interface CHDPlotArea : NSObject {
    CHDChartTypesCollection *mChartTypes;
    CHDAxesCollection *mAxes;
    OADGraphicProperties *mGraphicProperties;
    BOOL mCategoryAxesReversed;
    BOOL mCategoryAxesReversedOverridden;
    BOOL mContainsVolumeStockType;
}




-(BOOL)containsVolumeStockType;
-(BOOL)hasSecondaryAxis;
-(BOOL)hasSecondaryYAxisDeleted;
-(BOOL)isCategoryAxesReversed:(BOOL)arg0 ;
-(id)axes;
-(id)chartTypes;
-(id)description;
-(id)graphicProperties;
-(id)initWithChart:(id)arg0 ;
-(void)markSecondaryAxes;
-(void)setContainsVolumeStockType:(BOOL)arg0 ;
-(void)setGraphicProperties:(id)arg0 ;


@end


#endif