// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIMEDIAITEMENTITYTYPESFETCHCONTROLLER_H
#define VUIMEDIAITEMENTITYTYPESFETCHCONTROLLER_H

@protocol VUIMediaItemEntityTypesFetchControllerDelegate;


#import "VUIMediaLibraryFetchController.h"
#import "VUIMediaItemEntityTypesFetchResponse.h"

@interface VUIMediaItemEntityTypesFetchController : VUIMediaLibraryFetchController

@property (weak, nonatomic) NSObject<VUIMediaItemEntityTypesFetchControllerDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) VUIMediaItemEntityTypesFetchResponse *response; // ivar: _response


-(BOOL)_updateResponseWithResult:(id)arg0 replaceContentsOnNilChanges:(BOOL)arg1 ;
-(id)_fetchOperationForFetchReason:(NSInteger)arg0 ;
-(id)initWithMediaLibrary:(id)arg0 ;
-(void)_didCompleteFetchOperation:(id)arg0 ;
-(void)_handleContentsChangeFetchControllerOperationDidCompleteWithResult:(id)arg0 error:(id)arg1 ;
-(void)_handleInitialFetchControllerOperationDidCompleteWithResult:(id)arg0 error:(id)arg1 ;
-(void)_notifyDelegateWithBlock:(id)arg0 ;
-(void)_notifyFetchDidCompleteWithResult:(id)arg0 ;
-(void)_notifyFetchDidFailWithError:(id)arg0 ;
-(void)cancelFetch;


@end


#endif