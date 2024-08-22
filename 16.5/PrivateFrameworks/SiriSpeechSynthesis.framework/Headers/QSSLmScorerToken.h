// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSLMSCORERTOKEN_H
#define QSSLMSCORERTOKEN_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSLmScorerToken : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LmScorerToken _root;
}


@property (readonly, nonatomic) CGFloat log10_score;
@property (readonly, nonatomic) int ngram_used;
@property (readonly, nonatomic) NSString *token_str;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LmScorerToken *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LmScorerToken *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::LmScorerToken> )addObjectToBuffer:(*void)arg0 ;


@end


#endif