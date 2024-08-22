// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTNORMALIZEDTOKENVARIANT_H
#define FTNORMALIZEDTOKENVARIANT_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTNormalizedTokenVariant : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *NormalizedTokenVariant _root;
}


@property (readonly, nonatomic) NSArray *normalized_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NormalizedTokenVariant *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NormalizedTokenVariant *)arg1 verify:(BOOL)arg2 ;
-(id)normalized_tokens_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::NormalizedTokenVariant> )addObjectToBuffer:(*void)arg0 ;
-(void)normalized_tokens_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif