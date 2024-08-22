// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H
#define FTMUTABLEBATCHTRANSLATIONSTREAMINGREQUEST_H



#import "FTBatchTranslationStreamingRequest.h"
#import "FTBatchTranslationFeedbackRequest.h"
#import "FTBatchTranslationRequest.h"

@interface FTMutableBatchTranslationStreamingRequest : FTBatchTranslationStreamingRequest

@property (copy, nonatomic) FTBatchTranslationFeedbackRequest *contentAsFTBatchTranslationFeedbackRequest;
@property (copy, nonatomic) FTBatchTranslationRequest *contentAsFTBatchTranslationRequest;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif