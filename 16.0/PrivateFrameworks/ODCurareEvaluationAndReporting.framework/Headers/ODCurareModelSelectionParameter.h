// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ODCURAREMODELSELECTIONPARAMETER_H
#define ODCURAREMODELSELECTIONPARAMETER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ODCurareModelSelectionParameter : NSObject

@property (retain, nonatomic) NSString *metricName; // ivar: _metricName
@property (nonatomic) CGFloat percentageIncrease; // ivar: _percentageIncrease


-(id)initWithMetricName:(id)arg0 percentageIncrease:(CGFloat)arg1 ;


@end


#endif