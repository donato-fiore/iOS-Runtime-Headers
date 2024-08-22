// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTGRAPHEMETOPHONEMEREQUEST_H
#define FTGRAPHEMETOPHONEMEREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTContextWithPronHints.h"

@interface FTGraphemeToPhonemeRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *GraphemeToPhonemeRequest _root;
}


@property (readonly, nonatomic) FTContextWithPronHints *context_with_pron_hints;
@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *orthography;
@property (readonly, nonatomic) NSString *session_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct GraphemeToPhonemeRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct GraphemeToPhonemeRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::GraphemeToPhonemeRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif