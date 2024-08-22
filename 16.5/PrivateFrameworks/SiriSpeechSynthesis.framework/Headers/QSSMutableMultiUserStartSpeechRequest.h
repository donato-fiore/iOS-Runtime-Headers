// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEMULTIUSERSTARTSPEECHREQUEST_H
#define QSSMUTABLEMULTIUSERSTARTSPEECHREQUEST_H

@class NSString, NSArray;


#import "QSSMultiUserStartSpeechRequest.h"
#import "QSSStartSpeechRequest.h"

@interface QSSMutableMultiUserStartSpeechRequest : QSSMultiUserStartSpeechRequest

@property (copy, nonatomic) NSString *primary_speech_id;
@property (copy, nonatomic) QSSStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *user_parameters;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif