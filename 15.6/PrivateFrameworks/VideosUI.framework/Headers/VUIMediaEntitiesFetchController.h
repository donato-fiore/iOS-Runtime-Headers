// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAENTITIESFETCHCONTROLLER_H
#define VUIMEDIAENTITIESFETCHCONTROLLER_H

@class NSArray;
@protocol VUIMediaEntitiesFetchControllerDelegate;


#import "VUIMediaLibraryFetchController.h"
#import "VUIMediaEntityFetchResponse.h"

@interface VUIMediaEntitiesFetchController : VUIMediaLibraryFetchController

@property (weak, nonatomic) NSObject<VUIMediaEntitiesFetchControllerDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSArray *requests; // ivar: _requests
@property (readonly, nonatomic) VUIMediaEntityFetchResponse *response; // ivar: _response
@property (copy, nonatomic) NSArray *responses; // ivar: _responses


-(BOOL)_updateResponseWithResult:(id)arg0 replaceContentsOnNilChanges:(BOOL)arg1 ;
-(id)_fetchOperationForFetchReason:(NSInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 fetchRequests:(id)arg1 ;
-(void)_didCompleteFetchOperation:(id)arg0 ;
-(void)_handleContentsChangeFetchControllerOperationDidComplete:(id)arg0 ;
-(void)_handleManualFetchControllerOperationDidComplete:(id)arg0 ;
-(void)_notifyDelegateWithBlock:(id)arg0 ;
-(void)_notifyFetchRequests:(id)arg0 didCompleteWithResult:(id)arg1 ;
-(void)_notifyFetchRequests:(id)arg0 didFailWithError:(id)arg1 ;
-(void)cancelFetch;


@end


#endif