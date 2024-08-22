// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEBATCHTRANSLATIONSTREAMINGRESPONSE_H
#define FTMUTABLEBATCHTRANSLATIONSTREAMINGRESPONSE_H



#import "FTBatchTranslationStreamingResponse.h"
#import "FTBatchTranslationResponse.h"
#import "FTFinalBlazarResponse.h"

@interface FTMutableBatchTranslationStreamingResponse : FTBatchTranslationStreamingResponse

@property (copy, nonatomic) FTBatchTranslationResponse *contentAsFTBatchTranslationResponse;
@property (copy, nonatomic) FTFinalBlazarResponse *contentAsFTFinalBlazarResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif