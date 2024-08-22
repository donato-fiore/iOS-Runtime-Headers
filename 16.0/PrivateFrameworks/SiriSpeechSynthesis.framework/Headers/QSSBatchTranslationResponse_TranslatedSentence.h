// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H
#define QSSBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSSpan.h"

@interface QSSBatchTranslationResponse_TranslatedSentence : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslatedSentence _root;
}


@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) NSArray *n_best_choices;
@property (readonly, nonatomic) QSSSpan *source_span;
@property (readonly, nonatomic) QSSSpan *target_span;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslatedSentence *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslatedSentence *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> )addObjectToBuffer:(*void)arg0 ;


@end


#endif