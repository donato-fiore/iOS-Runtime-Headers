// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTTSREQUESTFEATUREFLAGS_H
#define QSSTTSREQUESTFEATUREFLAGS_H

@class NSMutableDictionary, NSData;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSTTSRequestFeatureFlags : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TTSRequestFeatureFlags _root;
}


@property (readonly, nonatomic) BOOL cache_only;
@property (readonly, nonatomic) BOOL disable_prompts;
@property (readonly, nonatomic) BOOL fe_feature;
@property (readonly, nonatomic) BOOL fe_feature_only;
@property (readonly, nonatomic) NSInteger phoneset_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSRequestFeatureFlags *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TTSRequestFeatureFlags *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TTSRequestFeatureFlags> )addObjectToBuffer:(*void)arg0 ;


@end


#endif