// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPCPLAYBACKHISTORYRECORDCHANGEREQUESTOPERATION_H
#define MPCPLAYBACKHISTORYRECORDCHANGEREQUESTOPERATION_H

@class MPAsyncOperation, NSOperationQueue;


#import "MPCPlaybackHistoryRecordChangeRequest.h"

@interface MPCPlaybackHistoryRecordChangeRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) MPCPlaybackHistoryRecordChangeRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)_finishChangeRequestOperationWithError:(id)arg0 ;
-(void)execute;


@end


#endif