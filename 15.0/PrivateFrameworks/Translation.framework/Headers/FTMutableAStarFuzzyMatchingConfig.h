// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEASTARFUZZYMATCHINGCONFIG_H
#define FTMUTABLEASTARFUZZYMATCHINGCONFIG_H

@class NSString;


#import "FTAStarFuzzyMatchingConfig.h"

@interface FTMutableAStarFuzzyMatchingConfig : FTAStarFuzzyMatchingConfig

@property (nonatomic) unsigned int abs_pruning_threshold;
@property (copy, nonatomic) NSString *delimiter;
@property (nonatomic) BOOL enable_completion;
@property (nonatomic) BOOL enable_word_boundary;
@property (nonatomic) unsigned int max_expand_paths;
@property (nonatomic) unsigned int max_latency;
@property (nonatomic) unsigned int max_path_num_at_boundary;
@property (nonatomic) unsigned int max_results;
@property (nonatomic) unsigned int max_tm_score;
@property (nonatomic) float parabolic_error_bias;
@property (nonatomic) float parabolic_error_center;
@property (nonatomic) unsigned int parabolic_error_min;
@property (nonatomic) float parabolic_error_wide;
@property (nonatomic) unsigned int rel_pruning_threshold;
@property (nonatomic) unsigned int word_penalty;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif