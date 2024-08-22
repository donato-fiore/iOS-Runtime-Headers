// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BATCHUPDATERESPONSE_UPDATERESPONSEDATA_H
#define BATCHUPDATERESPONSE_UPDATERESPONSEDATA_H



#import "GPBMessage.h"
#import "InsertResponse.h"
#import "MarkForDeletionResponse.h"
#import "OptInOutResponse.h"

@interface BatchUpdateResponse_UpdateResponseData : GPBMessage

@property (retain, nonatomic) InsertResponse *insertResponse;
@property (retain, nonatomic) MarkForDeletionResponse *markForDeletionResponse;
@property (retain, nonatomic) OptInOutResponse *optInOutResponse;
@property (readonly, nonatomic) int responseDataOneOfCase;


+(id)descriptor;


@end


#endif