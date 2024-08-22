// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QSSMUTABLEBATCHRECOVERSTREAMINGRESPONSE_H
#define QSSMUTABLEBATCHRECOVERSTREAMINGRESPONSE_H



#import "QSSBatchRecoverStreamingResponse.h"
#import "QSSBatchRecoverFinalResponse.h"
#import "QSSPronGuessResponse.h"

@interface QSSMutableBatchRecoverStreamingResponse : QSSBatchRecoverStreamingResponse

@property (copy, nonatomic) QSSBatchRecoverFinalResponse *contentAsQSSBatchRecoverFinalResponse;
@property (copy, nonatomic) QSSPronGuessResponse *contentAsQSSPronGuessResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif