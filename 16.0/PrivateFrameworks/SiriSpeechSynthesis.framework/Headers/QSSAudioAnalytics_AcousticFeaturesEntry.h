// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H
#define QSSAUDIOANALYTICS_ACOUSTICFEATURESENTRY_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSAcousticFeature.h"

@interface QSSAudioAnalytics_AcousticFeaturesEntry : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *AcousticFeaturesEntry _root;
}


@property (readonly, nonatomic) NSString *key;
@property (readonly, nonatomic) QSSAcousticFeature *value;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AcousticFeaturesEntry *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct AcousticFeaturesEntry *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::AudioAnalytics_::AcousticFeaturesEntry> )addObjectToBuffer:(*void)arg0 ;


@end


#endif