// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSFREQUENCYANALYSIS_H
#define TSFREQUENCYANALYSIS_H


#import <Foundation/Foundation.h>


@interface TSFrequencyAnalysis : NSObject

@property (nonatomic) CGFloat averageFrequency; // ivar: _averageFrequency
@property (nonatomic) CGFloat averagePeriod; // ivar: _averagePeriod
@property (nonatomic) CGFloat averageTimeError; // ivar: _averageTimeError
@property (nonatomic) CGFloat highestFrequency; // ivar: _highestFrequency
@property (nonatomic) CGFloat lowestFrequency; // ivar: _lowestFrequency


-(id)initWithTimeErrorValues:(id)arg0 ;


@end


#endif