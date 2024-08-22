// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSRECOGNITIONPROGRESS_H
#define QSSRECOGNITIONPROGRESS_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>


@interface QSSRecognitionProgress : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *RecognitionProgress _root;
}


@property (readonly, nonatomic) int processed_audio_duration_ms;
@property (readonly, nonatomic) NSString *speech_id;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionProgress *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct RecognitionProgress *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::RecognitionProgress> )addObjectToBuffer:(*void)arg0 ;


@end


#endif