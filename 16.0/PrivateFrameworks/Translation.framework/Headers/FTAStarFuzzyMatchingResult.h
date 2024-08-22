// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTASTARFUZZYMATCHINGRESULT_H
#define FTASTARFUZZYMATCHINGRESULT_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAStarFuzzyMatchingResult : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AStarFuzzyMatchingResult _root;
}


@property (readonly, nonatomic) NSString *debug_information;
@property (readonly, nonatomic) NSArray *match_ids;
@property (readonly, nonatomic) NSString *matched_result;
@property (readonly, nonatomic) int tm_score;
@property (readonly, nonatomic) NSInteger total_score;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingResult *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingResult *)arg1 verify:(BOOL)arg2 ;
-(id)match_ids_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResult> )addObjectToBuffer:(*void)arg0 ;
-(void)match_ids_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif