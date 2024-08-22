// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H
#define FTBATCHTRANSLATIONRESPONSE_TRANSLATEDSENTENCE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTSpan.h"

@interface FTBatchTranslationResponse_TranslatedSentence : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TranslatedSentence _root;
}


@property (readonly, nonatomic) NSString *engine_input;
@property (readonly, nonatomic) NSArray *n_best_choices;
@property (readonly, nonatomic) FTSpan *source_span;
@property (readonly, nonatomic) FTSpan *target_span;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslatedSentence *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TranslatedSentence *)arg1 verify:(BOOL)arg2 ;
-(id)n_best_choices_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::BatchTranslationResponse_::TranslatedSentence> )addObjectToBuffer:(*void)arg0 ;
-(void)n_best_choices_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif