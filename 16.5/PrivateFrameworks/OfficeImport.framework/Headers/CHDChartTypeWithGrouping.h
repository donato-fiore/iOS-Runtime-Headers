// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHDCHARTTYPEWITHGROUPING_H
#define CHDCHARTTYPEWITHGROUPING_H



#import "CHDChartType.h"

@interface CHDChartTypeWithGrouping : CHDChartType {
    int mGrouping;
}




-(BOOL)isGroupingStacked;
-(id)chdGroupingString;
-(id)initWithChart:(id)arg0 ;
-(int)grouping;
-(void)setGrouping:(int)arg0 ;


@end


#endif