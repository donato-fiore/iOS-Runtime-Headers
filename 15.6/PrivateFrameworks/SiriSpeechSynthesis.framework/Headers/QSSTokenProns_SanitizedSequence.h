// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSTOKENPRONS_SANITIZEDSEQUENCE_H
#define QSSTOKENPRONS_SANITIZEDSEQUENCE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTokenProns_SanitizedSequence : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SanitizedSequence _root;
}


@property (readonly, nonatomic) NSArray *sanitized_tokens;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SanitizedSequence *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SanitizedSequence *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TokenProns_::SanitizedSequence> )addObjectToBuffer:(*void)arg0 ;


@end


#endif