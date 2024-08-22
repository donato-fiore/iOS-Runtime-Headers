// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MPMODELLIBRARYHASPURCHASESREQUESTOPERATION_H
#define MPMODELLIBRARYHASPURCHASESREQUESTOPERATION_H



#import "MPAsyncOperation.h"
#import "MPModelLibraryHasPurchasesRequest.h"

@interface MPModelLibraryHasPurchasesRequestOperation : MPAsyncOperation

@property (copy, nonatomic) MPModelLibraryHasPurchasesRequest *request; // ivar: _request
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


-(void)execute;


@end


#endif