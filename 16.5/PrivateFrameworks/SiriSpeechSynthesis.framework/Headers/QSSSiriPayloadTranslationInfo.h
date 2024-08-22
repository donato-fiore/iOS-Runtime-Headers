// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSSIRIPAYLOADTRANSLATIONINFO_H
#define QSSSIRIPAYLOADTRANSLATIONINFO_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSRecognitionSausage.h"

@interface QSSSiriPayloadTranslationInfo : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SiriPayloadTranslationInfo _root;
}


@property (readonly, nonatomic) NSString *post_itn_payload;
@property (readonly, nonatomic) NSString *pre_itn_payload;
@property (readonly, nonatomic) QSSRecognitionSausage *pre_sausage_payload;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SiriPayloadTranslationInfo *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SiriPayloadTranslationInfo *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SiriPayloadTranslationInfo> )addObjectToBuffer:(*void)arg0 ;


@end


#endif