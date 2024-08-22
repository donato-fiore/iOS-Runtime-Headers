// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTOKENPRONS_H
#define FTTOKENPRONS_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTokenProns : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TokenProns _root;
}


@property (readonly, nonatomic) NSArray *normalized_prons;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSArray *prons;
@property (readonly, nonatomic) NSArray *sanitized_sequences;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TokenProns *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TokenProns *)arg1 verify:(BOOL)arg2 ;
-(id)normalized_prons_objectAtIndex:(NSUInteger)arg0 ;
-(id)prons_objectAtIndex:(NSUInteger)arg0 ;
-(id)sanitized_sequences_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TokenProns> )addObjectToBuffer:(*void)arg0 ;
-(void)normalized_prons_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)prons_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)sanitized_sequences_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif