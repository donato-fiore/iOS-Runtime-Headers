// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSSERVERENDPOINTFEATURES_H
#define QSSSERVERENDPOINTFEATURES_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSServerEndpointFeatures : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ServerEndpointFeatures _root;
}


@property (readonly, nonatomic) CGFloat eos_likelihood;
@property (readonly, nonatomic) int num_of_words;
@property (readonly, nonatomic) NSArray *pause_counts;
@property (readonly, nonatomic) int processed_audio_duration_ms;
@property (readonly, nonatomic) CGFloat silence_posterior;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) NSString *task_name;
@property (readonly, nonatomic) int trailing_silence_duration;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServerEndpointFeatures *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ServerEndpointFeatures *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ServerEndpointFeatures> )addObjectToBuffer:(*void)arg0 ;


@end


#endif