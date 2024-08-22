// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHRESPONSEDEVDATA_H
#define QSSTEXTTOSPEECHRESPONSEDEVDATA_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSQSSVersionInfo.h"

@interface QSSTextToSpeechResponseDevData : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechResponseDevData _root;
}


@property (readonly, nonatomic) BOOL has_click;
@property (readonly, nonatomic) NSString *log;
@property (readonly, nonatomic) QSSQSSVersionInfo *server_info;
@property (readonly, nonatomic) NSString *worker_process_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponseDevData *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechResponseDevData *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechResponseDevData> )addObjectToBuffer:(*void)arg0 ;


@end


#endif