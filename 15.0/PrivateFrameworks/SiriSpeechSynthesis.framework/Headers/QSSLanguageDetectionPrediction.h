// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSLANGUAGEDETECTIONPREDICTION_H
#define QSSLANGUAGEDETECTIONPREDICTION_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSLanguageDetectionPrediction : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *LanguageDetectionPrediction _root;
}


@property (readonly, nonatomic) float confidence;
@property (readonly, nonatomic) BOOL is_low_confidence;
@property (readonly, nonatomic) NSString *locale;
@property (readonly, nonatomic) float threshold;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetectionPrediction *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct LanguageDetectionPrediction *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::LanguageDetectionPrediction> )addObjectToBuffer:(*void)arg0 ;


@end


#endif