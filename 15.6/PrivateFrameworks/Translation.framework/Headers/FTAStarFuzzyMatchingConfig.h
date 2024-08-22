// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTASTARFUZZYMATCHINGCONFIG_H
#define FTASTARFUZZYMATCHINGCONFIG_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAStarFuzzyMatchingConfig : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AStarFuzzyMatchingConfig _root;
}


@property (readonly, nonatomic) unsigned int abs_pruning_threshold;
@property (readonly, nonatomic) NSString *delimiter;
@property (readonly, nonatomic) BOOL enable_completion;
@property (readonly, nonatomic) BOOL enable_word_boundary;
@property (readonly, nonatomic) unsigned int max_expand_paths;
@property (readonly, nonatomic) unsigned int max_latency;
@property (readonly, nonatomic) unsigned int max_path_num_at_boundary;
@property (readonly, nonatomic) unsigned int max_results;
@property (readonly, nonatomic) unsigned int max_tm_score;
@property (readonly, nonatomic) float parabolic_error_bias;
@property (readonly, nonatomic) float parabolic_error_center;
@property (readonly, nonatomic) unsigned int parabolic_error_min;
@property (readonly, nonatomic) float parabolic_error_wide;
@property (readonly, nonatomic) unsigned int rel_pruning_threshold;
@property (readonly, nonatomic) unsigned int word_penalty;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingConfig *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingConfig *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingConfig> )addObjectToBuffer:(*void)arg0 ;


@end


#endif