// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTEXTTOSPEECHSPEECHFEATUREINPUTWORD_H
#define FTTEXTTOSPEECHSPEECHFEATUREINPUTWORD_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechSpeechFeatureInputWord : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechSpeechFeatureInputWord _root;
}


@property (readonly, nonatomic) NSArray *phonemes;
@property (readonly, nonatomic) NSString *word;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureInputWord *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureInputWord *)arg1 verify:(BOOL)arg2 ;
-(id)phonemes_objectAtIndex:(NSUInteger)arg0 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureInputWord> )addObjectToBuffer:(*void)arg0 ;
-(void)phonemes_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif