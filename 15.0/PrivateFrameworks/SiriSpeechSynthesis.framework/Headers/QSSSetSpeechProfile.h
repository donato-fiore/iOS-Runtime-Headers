// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSSETSPEECHPROFILE_H
#define QSSSETSPEECHPROFILE_H

@class NSMutableDictionary, NSData, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSUserAcousticProfile.h"
#import "QSSUserLanguageProfile.h"

@interface QSSSetSpeechProfile : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *SetSpeechProfile _root;
}


@property (readonly, nonatomic) NSString *language;
@property (readonly, nonatomic) NSString *session_id;
@property (readonly, nonatomic) NSString *speech_id;
@property (readonly, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetSpeechProfile *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct SetSpeechProfile *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::SetSpeechProfile> )addObjectToBuffer:(*void)arg0 ;


@end


#endif