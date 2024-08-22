// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STUSAGEREPORTGRAPHSEGMENT_H
#define STUSAGEREPORTGRAPHSEGMENT_H

@class NSNumber, UIColor;

#import <Foundation/Foundation.h>


@interface STUsageReportGraphSegment : NSObject

@property (copy, nonatomic) NSNumber *amount; // ivar: _amount
@property (nonatomic) CGFloat amountAsPercentageOfDataPointTotal; // ivar: _amountAsPercentageOfDataPointTotal
@property (retain, nonatomic) UIColor *color; // ivar: _color


-(id)initWithAmount:(id)arg0 amountAsPercentageOfDataPointTotal:(CGFloat)arg1 color:(id)arg2 ;


@end


#endif