// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTSIRITRANSLATIONINFO_H
#define FTSIRITRANSLATIONINFO_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTRecognitionSausage.h"

@interface FTSiriTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SiriTranslationInfo _root;
}


@property (readonly, nonatomic) NSArray *itn_alignments;
@property (readonly, nonatomic) NSString *post_itn_recognition;
@property (readonly, nonatomic) NSArray *post_itn_tokens;
@property (readonly, nonatomic) NSArray *raw_nbest_choices;
@property (readonly, nonatomic) FTRecognitionSausage *raw_sausage;
@property (readonly, nonatomic) NSArray *translation_phrase;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SiriTranslationInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SiriTranslationInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SiriTranslationInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif