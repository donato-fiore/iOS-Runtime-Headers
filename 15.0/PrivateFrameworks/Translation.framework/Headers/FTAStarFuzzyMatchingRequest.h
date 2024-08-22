// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTASTARFUZZYMATCHINGREQUEST_H
#define FTASTARFUZZYMATCHINGREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTAStarFuzzyMatchingConfig.h"

@interface FTAStarFuzzyMatchingRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AStarFuzzyMatchingRequest _root;
}


@property (readonly, nonatomic) FTAStarFuzzyMatchingConfig *config;
@property (readonly, nonatomic) NSString *matcher_id;
@property (readonly, nonatomic) NSString *query;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *target;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AStarFuzzyMatchingRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AStarFuzzyMatchingRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif