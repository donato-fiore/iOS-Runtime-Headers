// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OADPERCENTTEXTSPACING_H
#define OADPERCENTTEXTSPACING_H



#import "OADTextSpacing.h"

@interface OADPercentTextSpacing : OADTextSpacing {
    float mPercent;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(float)percent;
-(id)initWithPercent:(float)arg0 ;


@end


#endif