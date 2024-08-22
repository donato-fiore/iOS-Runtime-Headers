// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEMULTIUSERSTARTSPEECHREQUEST_H
#define FTMUTABLEMULTIUSERSTARTSPEECHREQUEST_H

@class NSString, NSArray;


#import "FTMultiUserStartSpeechRequest.h"
#import "FTStartSpeechRequest.h"

@interface FTMutableMultiUserStartSpeechRequest : FTMultiUserStartSpeechRequest

@property (copy, nonatomic) NSString *primary_speech_id;
@property (copy, nonatomic) FTStartSpeechRequest *start_speech_request;
@property (copy, nonatomic) NSArray *user_parameters;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif