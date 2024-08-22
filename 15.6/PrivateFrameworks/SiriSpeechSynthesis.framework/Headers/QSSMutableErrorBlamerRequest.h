// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef QSSMUTABLEERRORBLAMERREQUEST_H
#define QSSMUTABLEERRORBLAMERREQUEST_H

@class NSArray, NSString;


#import "QSSErrorBlamerRequest.h"
#import "QSSStartSpeechRequest.h"
#import "QSSUserAcousticProfile.h"
#import "QSSUserLanguageProfile.h"

@interface QSSMutableErrorBlamerRequest : QSSErrorBlamerRequest

@property (copy, nonatomic) NSArray *audio_packets;
@property (copy, nonatomic) NSArray *contextual_text;
@property (nonatomic) CGFloat latitude;
@property (copy, nonatomic) NSString *left_context;
@property (nonatomic) CGFloat longitude;
@property (copy, nonatomic) NSString *ref_transcript;
@property (copy, nonatomic) NSString *right_context;
@property (copy, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) QSSUserAcousticProfile *user_acoustic_profile;
@property (copy, nonatomic) QSSUserLanguageProfile *user_language_profile;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif