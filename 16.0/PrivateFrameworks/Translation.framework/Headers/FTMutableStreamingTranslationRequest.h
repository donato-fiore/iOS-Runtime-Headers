// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLESTREAMINGTRANSLATIONREQUEST_H
#define FTMUTABLESTREAMINGTRANSLATIONREQUEST_H

@class NSString;


#import "FTStreamingTranslationRequest.h"

@interface FTMutableStreamingTranslationRequest : FTStreamingTranslationRequest

@property (copy, nonatomic) NSString *app_id;
@property (nonatomic) BOOL disable_log;
@property (nonatomic) BOOL final_message;
@property (nonatomic) NSInteger opt_in_status;
@property (copy, nonatomic) NSString *request_id;
@property (copy, nonatomic) NSString *sequence_id;
@property (copy, nonatomic) NSString *source_language;
@property (copy, nonatomic) NSString *speech_id;
@property (copy, nonatomic) NSString *target_language;
@property (copy, nonatomic) NSString *task;
@property (copy, nonatomic) NSString *translation_text;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif