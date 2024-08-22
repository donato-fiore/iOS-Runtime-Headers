// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSERRORBLAMERREQUEST_H
#define QSSERRORBLAMERREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "QSSStartSpeechRequest.h"
#import "QSSUserAcousticProfile.h"
#import "QSSUserLanguageProfile.h"

@interface QSSErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying>

 {
    NSMutableDictionary *_storage;
    NSData *_data;
    *ErrorBlamerRequest _root;
}


@property (readonly, nonatomic) NSArray *audio_packets;
@property (readonly, nonatomic) NSArray *contextual_text;
@property (readonly, nonatomic) CGFloat latitude;
@property (readonly, nonatomic) NSString *left_context;
@property (readonly, nonatomic) CGFloat longitude;
@property (readonly, nonatomic) NSString *ref_transcript;
@property (readonly, nonatomic) NSString *right_context;
@property (readonly, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorBlamerRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorBlamerRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ErrorBlamerRequest> )addObjectToBuffer:(*void)arg0 ;


@end


#endif