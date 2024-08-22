// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MPSTORESOCIALREQUESTOPERATION_H
#define MPSTORESOCIALREQUESTOPERATION_H

@class ICStoreURLRequest;
@protocol OS_dispatch_queue, MPStoreSocialRequestOperationDataSource;


#import "MPAsyncOperation.h"

@interface MPStoreSocialRequestOperation : MPAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_request;
}


@property (readonly, nonatomic) NSObject<MPStoreSocialRequestOperationDataSource> *dataSource; // ivar: _dataSource
@property (copy, nonatomic) id *responseHandler; // ivar: _responseHandler


+(id)_stringRepresentationForHTTPBodyType:(NSInteger)arg0 ;
+(id)_stringRepresentationForHTTPMethod:(NSInteger)arg0 ;
+(id)_urlStringForKey:(id)arg0 inBag:(id)arg1 ;
-(id)_requestURLFromBag:(id)arg0 ;
-(id)initWithDataSource:(id)arg0 ;
-(void)cancel;
-(void)execute;


@end


#endif