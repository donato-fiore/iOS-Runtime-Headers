// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTTEXTTOSPEECHSPEECHFEATURERESPONSE_H
#define FTTEXTTOSPEECHSPEECHFEATURERESPONSE_H

@class NSMutableDictionary, NSData, NSString, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextToSpeechSpeechFeatureResponse : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechSpeechFeatureResponse _root;
}


@property (readonly, nonatomic) int error_code;
@property (readonly, nonatomic) NSString *error_str;
@property (readonly, nonatomic) NSArray *features;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)features_objectAtIndex:(NSUInteger)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureResponse *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureResponse *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureResponse> )addObjectToBuffer:(*void)arg0 ;
-(void)features_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif