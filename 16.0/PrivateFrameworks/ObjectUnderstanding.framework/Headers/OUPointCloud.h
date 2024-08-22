// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OUPOINTCLOUD_H
#define OUPOINTCLOUD_H

@class NSString;
@protocol OUPointCloud;

#import <Foundation/Foundation.h>


@interface OUPointCloud : NSObject <OUPointCloud>

 {
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> points;
    vector<unsigned char __attribute__((ext_vector_type(4))), std::allocator<unsigned char __attribute__((ext_vector_type(4)))>> semLabels;
    vector<unsigned short __attribute__((ext_vector_type(4))), std::allocator<unsigned short __attribute__((ext_vector_type(4)))>> semVotes;
    vector<float __attribute__((ext_vector_type(3))), std::allocator<float __attribute__((ext_vector_type(3)))>> colors;
    unordered_map<std::string, unsigned int __attribute__((ext_vector_type(2))), std::hash<std::string>, std::equal_to<std::string>, std::allocator<std::pair<const std::string, unsigned int __attribute__((ext_vector_type(2)))>>> pointRangeOfKeyframes;
}


@property ? colors;
@property (readonly, nonatomic) NSUInteger count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property ? points;
@property ? semanticLabels;
@property ? semanticVotes;
@property (readonly) Class superclass;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCount:(NSUInteger)arg0 pointssemanticLabelssemanticVotes;
-(id)initWithCount:(NSUInteger)arg0 pointssemanticLabelssemanticVotescolors;
-(id)initWithDictionary:(id)arg0 ;
-(void)append:(NSUInteger)arg0 pointssemanticLabelssemanticVotes;
-(void)append:(NSUInteger)arg0 pointssemanticLabelssemanticVotescolors;
-(void)resample:(NSUInteger)arg0 ;


@end


#endif