// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSSPEECHTRANSLATIONSERVERENDPOINTFEATURES_H
#define QSSSPEECHTRANSLATIONSERVERENDPOINTFEATURES_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSServerEndpointFeatures.h"

@interface QSSSpeechTranslationServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SpeechTranslationServerEndpointFeatures _root;
}


@property (readonly, nonatomic) NSString *conversation_id;
@property (readonly, nonatomic) NSString *request_id;
@property (readonly, nonatomic) QSSServerEndpointFeatures *server_endpoint_features;
@property (readonly, nonatomic) NSString *source_locale;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationServerEndpointFeatures *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SpeechTranslationServerEndpointFeatures *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SpeechTranslationServerEndpointFeatures> )addObjectToBuffer:(*void)arg0 ;


@end


#endif