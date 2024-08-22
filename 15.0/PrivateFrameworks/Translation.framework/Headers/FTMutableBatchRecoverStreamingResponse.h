// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FTMUTABLEBATCHRECOVERSTREAMINGRESPONSE_H
#define FTMUTABLEBATCHRECOVERSTREAMINGRESPONSE_H



#import "FTBatchRecoverStreamingResponse.h"
#import "FTBatchRecoverFinalResponse.h"
#import "FTPronGuessResponse.h"

@interface FTMutableBatchRecoverStreamingResponse : FTBatchRecoverStreamingResponse

@property (copy, nonatomic) FTBatchRecoverFinalResponse *contentAsFTBatchRecoverFinalResponse;
@property (copy, nonatomic) FTPronGuessResponse *contentAsFTPronGuessResponse;
@property (nonatomic) NSInteger content_type;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif