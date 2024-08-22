// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTNORMALIZEDTOKEN_H
#define FTNORMALIZEDTOKEN_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTNormalizedToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *NormalizedToken _root;
}


@property (readonly, nonatomic) NSArray *nbest_variants;
@property (readonly, nonatomic) NSString *original_token;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NormalizedToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct NormalizedToken *)arg1 verify:(BOOL)arg2 ;
-(id)nbest_variants_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::NormalizedToken> )addObjectToBuffer:(*void)arg0 ;
-(void)nbest_variants_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif