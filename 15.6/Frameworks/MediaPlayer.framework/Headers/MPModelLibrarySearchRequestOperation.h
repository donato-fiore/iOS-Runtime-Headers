// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELLIBRARYSEARCHREQUESTOPERATION_H
#define MPMODELLIBRARYSEARCHREQUESTOPERATION_H

@protocol OS_dispatch_queue;


#import "MPAsyncOperation.h"
#import "MPModelLibrarySearchRequest.h"

@interface MPModelLibrarySearchRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessSerialQueue;
    ? _runningQuery;
}


@property (copy, nonatomic) MPModelLibrarySearchRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(id)init;
-(void)cancel;
-(void)execute;


@end


#endif