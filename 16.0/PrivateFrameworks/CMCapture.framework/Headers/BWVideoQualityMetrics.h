// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BWVIDEOQUALITYMETRICS_H
#define BWVIDEOQUALITYMETRICS_H


#import <Foundation/Foundation.h>


@interface BWVideoQualityMetrics : NSObject {
    NSInteger _totalLux;
    int _frames;
}


@property (readonly, nonatomic) unsigned int qualityScoringVersion;


+(CGFloat)_luxThreshold;
+(CGFloat)_luxTransition;
+(id)filterMetadata:(id)arg0 ;
+(void)initialize;
-(CGFloat)_computeLuxScore;
-(CGFloat)computeQualityScore;
-(void)processMetadata:(id)arg0 ;
-(void)reset;


@end


#endif