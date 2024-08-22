// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXSCOREDISTRIBUTION_H
#define ATXSCOREDISTRIBUTION_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXScoreDistribution : NSObject {
    NSMutableArray *_scores;
    CGFloat _sum;
}


@property (readonly, nonatomic) CGFloat max; // ivar: _max
@property (readonly, nonatomic) CGFloat mean;
@property (readonly, nonatomic) CGFloat min; // ivar: _min
@property (readonly, nonatomic) CGFloat standardDeviation;


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXDeviceLevelMetricsScoreDistribution:(id)arg0 ;
-(NSUInteger)hash;
-(id)init;
-(void)enumerateAsHistogramWithNumberOfBins:(NSUInteger)arg0 binHandler:(id)arg1 ;
-(void)recordScore:(CGFloat)arg0 ;


@end


#endif