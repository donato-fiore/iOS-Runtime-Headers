// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QSSMUTABLEBATCHTRANSLATIONSTREAMINGRESPONSE_H
#define QSSMUTABLEBATCHTRANSLATIONSTREAMINGRESPONSE_H



#import "QSSBatchTranslationStreamingResponse.h"
#import "QSSBatchTranslationResponse.h"
#import "QSSFinalBlazarResponse.h"

@interface QSSMutableBatchTranslationStreamingResponse : QSSBatchTranslationStreamingResponse

@property (copy, nonatomic) QSSBatchTranslationResponse *contentAsQSSBatchTranslationResponse;
@property (copy, nonatomic) QSSFinalBlazarResponse *contentAsQSSFinalBlazarResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif