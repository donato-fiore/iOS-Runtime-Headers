// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTTEXTNORMALIZATIONREQUEST_H
#define FTTEXTNORMALIZATIONREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTTextNormalizationRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextNormalizationRequest _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) int nbest_variants_max;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextNormalizationRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextNormalizationRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextNormalizationRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif