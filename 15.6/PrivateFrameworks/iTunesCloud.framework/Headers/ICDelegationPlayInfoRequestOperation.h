// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICDELEGATIONPLAYINFOREQUESTOPERATION_H
#define ICDELEGATIONPLAYINFOREQUESTOPERATION_H



#import "ICAsyncOperation.h"
#import "ICDelegationPlayInfoRequestOperation.h"
#import "ICDelegationPlayInfoRequest.h"
#import "ICStoreRequestContext.h"

@interface ICDelegationPlayInfoRequestOperation : ICAsyncOperation {
    ICDelegationPlayInfoRequestOperation *_strongSelf;
}


@property (copy, nonatomic) ICDelegationPlayInfoRequest *playInfoRequest; // ivar: _playInfoRequest
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler
@property (retain, nonatomic) ICStoreRequestContext *storeRequestContext; // ivar: _storeRequestContext


-(void)_finishWithResult:(BOOL)arg0 tokens:(id)arg1 error:(id)arg2 ;
-(void)execute;
-(void)finishWithError:(id)arg0 ;
-(void)finishWithResponse:(id)arg0 requestDate:(id)arg1 error:(id)arg2 ;


@end


#endif