// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTFINISHAUDIO_H
#define FTFINISHAUDIO_H

@class NSMutableDictionary, NSData, NSArray;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface FTFinishAudio : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *FinishAudio _root;
}


@property (readonly, nonatomic) NSArray *features_at_endpoint;
@property (readonly, nonatomic) int packet_count;
@property (readonly, nonatomic) NSArray *server_feature_latency_distribution;
@property (readonly, nonatomic) float total_audio_recorded_seconds;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinishAudio *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct FinishAudio *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::FinishAudio> )addObjectToBuffer:(*void)arg0 ;


@end


#endif