// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSSPEECHTRANSLATIONINFO_H
#define QSSSPEECHTRANSLATIONINFO_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSRecognitionSausage.h"

@interface QSSSpeechTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationInfo _root;
}


@property (readonly, nonatomic) NSArray *raw_nbest_choices;
@property (readonly, nonatomic) QSSRecognitionSausage *raw_sausage;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif