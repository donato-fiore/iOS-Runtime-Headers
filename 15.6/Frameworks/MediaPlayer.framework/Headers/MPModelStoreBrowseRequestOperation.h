// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPMODELSTOREBROWSEREQUESTOPERATION_H
#define MPMODELSTOREBROWSEREQUESTOPERATION_H

@class NSOperation, NSOperationQueue, NSMapTable;
@protocol OS_dispatch_group;


#import "MPStoreModelRequestOperation.h"

@interface MPModelStoreBrowseRequestOperation : MPStoreModelRequestOperation {
    BOOL _didInitializeTimeoutIntervalAdditions;
    BOOL _errorReportingDisabled;
    NSOperation *_individualPendingNestedRequestOperation;
    NSObject<OS_dispatch_group> *_nestedRequestOperationsGroup;
    NSOperationQueue *_nestedRequestsOperationQueue;
    NSUInteger _requestType;
    NSMapTable *_sectionsToPendingNestedRequestOperations;
    CGFloat _timeoutIntervalAdditions;
}




-(CGFloat)adjustTimeoutInterval:(CGFloat)arg0 ;
-(id)_nestedRequestsOperationQueue;
-(id)configurationForLoadingModelDataWithStoreURLBag:(id)arg0 error:(*id)arg1 ;
-(void)_produceCarPlayResponseWithParser:(id)arg0 withNestedRequestsForEmptyBrickSectionsInOperationQueue:(id)arg1 completion:(id)arg2 ;
-(void)_produceRegularResponseWithParser:(id)arg0 completion:(id)arg1 ;
-(void)_produceResponseWithParser:(id)arg0 results:(id)arg1 changeDetails:(id)arg2 completion:(id)arg3 ;
-(void)cancel;
-(void)execute;
-(void)produceResponseWithLoadedOutput:(id)arg0 completion:(id)arg1 ;


@end


#endif