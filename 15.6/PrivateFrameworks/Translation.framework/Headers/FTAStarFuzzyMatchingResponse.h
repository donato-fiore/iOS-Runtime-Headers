// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTASTARFUZZYMATCHINGRESPONSE_H
#define FTASTARFUZZYMATCHINGRESPONSE_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTAStarFuzzyMatchingResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AStarFuzzyMatchingResponse _root;
}


@property (readonly, nonatomic) unsigned int expanded_path;
@property (readonly, nonatomic) unsigned int latency;
@property (readonly, nonatomic) NSArray *results;
@property (readonly, nonatomic) int return_code;
@property (readonly, nonatomic) NSString *return_str;
@property (readonly, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingResponse> )addObjectToBuffer:(*void)arg0 ;


@end


#endif