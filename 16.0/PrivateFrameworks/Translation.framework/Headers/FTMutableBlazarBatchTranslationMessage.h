// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FTMUTABLEBLAZARBATCHTRANSLATIONMESSAGE_H
#define FTMUTABLEBLAZARBATCHTRANSLATIONMESSAGE_H

@protocol FLTBFBufferAccessor><NSCopying;


#import "FTBlazarBatchTranslationMessage.h"
#import "FTBatchTranslationFeedbackRequest.h"
#import "FTBatchTranslationLoggingRequest.h"
#import "FTBatchTranslationRequest.h"
#import "FTBatchTranslationResponse.h"
#import "FTFinalBlazarResponse.h"

@interface FTMutableBlazarBatchTranslationMessage : FTBlazarBatchTranslationMessage

@property (copy, nonatomic) NSObject<FLTBFBufferAccessor><NSCopying> *session_message;
@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *session_messageAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationLoggingRequest *session_messageAsFTBatchTranslationLoggingRequest;
@property (copy, nonatomic) FTBatchTranslationRequest *session_messageAsFTBatchTranslationRequest;
@property (copy, nonatomic) FTBatchTranslationResponse *session_messageAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *session_messageAsFTFinalBlazarResponse;
@property (nonatomic) NSInteger session_message_type;


+(Class)session_message_mutableClassForType:(NSInteger)arg0 ;
+(NSInteger)session_message_typeForMutableObject:(id)arg0 ;
+(NSInteger)session_message_typeForObject:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif