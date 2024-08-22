// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef QSSMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H
#define QSSMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H



#import "QSSBatchTranslationStreamingRequest.h"
#import "QSSBatchTranslationFeedbackRequest.h"
#import "QSSBatchTranslationLoggingRequest.h"
#import "QSSBatchTranslationRequest.h"
#import "QSSTranslationSupportedLanguagesRequest.h"

@interface QSSMutableBatchTranslationStreamingRequest : QSSBatchTranslationStreamingRequest

@property (copy, nonatomic) QSSBatchTranslationFeedbackRequest *contentAsQSSBatchTranslationFeedbackRequest;
@property (copy, nonatomic) QSSBatchTranslationLoggingRequest *contentAsQSSBatchTranslationLoggingRequest;
@property (copy, nonatomic) QSSBatchTranslationRequest *contentAsQSSBatchTranslationRequest;
@property (copy, nonatomic) QSSTranslationSupportedLanguagesRequest *contentAsQSSTranslationSupportedLanguagesRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif