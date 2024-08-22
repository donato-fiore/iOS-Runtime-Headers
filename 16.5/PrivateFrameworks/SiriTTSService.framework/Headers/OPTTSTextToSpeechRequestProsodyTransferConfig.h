// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OPTTSTEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H
#define OPTTSTEXTTOSPEECHREQUESTPROSODYTRANSFERCONFIG_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "OPTTSTextToSpeechUserVoiceProfile.h"
#import "OPTTSTextToSpeechSpeechFeatureInputWave.h"

@interface OPTTSTextToSpeechRequestProsodyTransferConfig : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *TextToSpeechRequestProsodyTransferConfig _root;
}


@property (readonly, nonatomic) OPTTSTextToSpeechUserVoiceProfile *user_voice_profile;
@property (readonly, nonatomic) NSString *user_voice_profile_url;
@property (readonly, nonatomic) OPTTSTextToSpeechSpeechFeatureInputWave *wave_data;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestProsodyTransferConfig *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct TextToSpeechRequestProsodyTransferConfig *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::TextToSpeechRequestProsodyTransferConfig> )addObjectToBuffer:(*void)arg0 ;


@end


#endif