// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBKSYNCRESPONSE_H
#define SBKSYNCRESPONSE_H



#import "SBKResponse.h"
#import "SBKSyncResponseData.h"

@interface SBKSyncResponse : SBKResponse

@property (readonly, nonatomic) SBKSyncResponseData *syncResponseData; // ivar: _syncResponseData


+(id)responseWithResponse:(id)arg0 transaction:(id)arg1 ;
-(void)deserializeResponseBodyWithTransaction:(id)arg0 ;


@end


#endif