// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSTEXTTOSPEECHFEATURE_H
#define OPTTSTEXTTOSPEECHFEATURE_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface OPTTSTextToSpeechFeature : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechFeature _root;
}


@property (readonly, nonatomic) NSArray *neural_phoneme_sequence;
@property (readonly, nonatomic) NSArray *normalized_text;
@property (readonly, nonatomic) NSArray *phoneme_sequence;
@property (readonly, nonatomic) NSArray *prompts;
@property (readonly, nonatomic) NSArray *replacement;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechFeature *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechFeature *)arg1 verify:(BOOL)arg2 ;
-(id)neural_phoneme_sequence_objectAtIndex:(NSUInteger)arg0 ;
-(id)normalized_text_objectAtIndex:(NSUInteger)arg0 ;
-(id)phoneme_sequence_objectAtIndex:(NSUInteger)arg0 ;
-(id)prompts_objectAtIndex:(NSUInteger)arg0 ;
-(id)replacement_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechFeature> )addObjectToBuffer:(*void)arg0 ;
-(void)neural_phoneme_sequence_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)normalized_text_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)phoneme_sequence_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)prompts_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)replacement_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif