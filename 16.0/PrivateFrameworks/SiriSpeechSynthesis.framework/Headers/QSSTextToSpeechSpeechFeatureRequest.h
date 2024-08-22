// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSTEXTTOSPEECHSPEECHFEATUREREQUEST_H
#define QSSTEXTTOSPEECHSPEECHFEATUREREQUEST_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSTextToSpeechSpeechFeatureModelIdentifier.h"
#import "QSSTextToSpeechSpeechFeatureInputText.h"
#import "QSSTextToSpeechSpeechFeatureInputWave.h"

@interface QSSTextToSpeechSpeechFeatureRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechSpeechFeatureRequest _root;
}


@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureModelIdentifier *model_id;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureInputText *text;
@property (readonly, nonatomic) QSSTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechSpeechFeatureRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechSpeechFeatureRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif