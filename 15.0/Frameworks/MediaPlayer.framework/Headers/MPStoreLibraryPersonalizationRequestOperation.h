// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPSTORELIBRARYPERSONALIZATIONREQUESTOPERATION_H
#define MPSTORELIBRARYPERSONALIZATIONREQUESTOPERATION_H

@class NSOperationQueue;


#import "MPAsyncOperation.h"
#import "MPStoreLibraryPersonalizationRequest.h"

@interface MPStoreLibraryPersonalizationRequestOperation : MPAsyncOperation {
    NSOperationQueue *_operationQueue;
}


@property (copy, nonatomic) MPStoreLibraryPersonalizationRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


+(id)personalizedResponseForContentDescriptor:(id)arg0 requestedProperties:(id)arg1 ;
-(void)cancel;
-(void)execute;


@end


#endif