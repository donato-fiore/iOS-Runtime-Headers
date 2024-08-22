// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTERRORBLAMERREQUEST_H
#define FTERRORBLAMERREQUEST_H

@class NSMutableDictionary, NSData, NSArray, NSString;
@protocol FLTBFBufferAccessor, NSCopying;

#import <Foundation/Foundation.h>

#import "FTStartSpeechRequest.h"
#import "FTUserAcousticProfile.h"
#import "FTUserLanguageProfile.h"

@interface FTErrorBlamerRequest : NSObject <FLTBFBufferAccessor, NSCopying>

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
@property (readonly, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (readonly, nonatomic) FTUserAcousticProfile *user_acoustic_profile;
@property (readonly, nonatomic) FTUserLanguageProfile *user_language_profile;


-(id)audio_packets_objectAtIndex:(NSUInteger)arg0 ;
-(id)contextual_text_objectAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)flatbuffData;
-(id)initAndVerifyWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorBlamerRequest *)arg1 ;
-(id)initWithFlatbuffData:(id)arg0 root:(struct ErrorBlamerRequest *)arg1 verify:(BOOL)arg2 ;
-(struct Offset<siri::speech::schema_fb::ErrorBlamerRequest> )addObjectToBuffer:(*void)arg0 ;
-(void)audio_packets_enumerateObjectsUsingBlock:(id)arg0 ;
-(void)contextual_text_enumerateObjectsUsingBlock:(id)arg0 ;


@end


#endif