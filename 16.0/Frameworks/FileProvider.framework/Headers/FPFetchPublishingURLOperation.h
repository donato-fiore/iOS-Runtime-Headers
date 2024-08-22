// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPFETCHPUBLISHINGURLOPERATION_H
#define FPFETCHPUBLISHINGURLOPERATION_H

@class NSOperationQueue, NSURL, NSProgress, NSString, NSSet;
@protocol NSFilePresenter;


#import "FPActionOperation.h"
#import "FPItem.h"

@interface FPFetchPublishingURLOperation : FPActionOperation <NSFilePresenter>

 {
    FPItem *_item;
    BOOL _isFilePresenter;
    NSOperationQueue *_operationQueue;
    NSURL *_itemURL;
    NSProgress *_remoteCancellableProgress;
    NSProgress *_itemUploadProgress;
}


@property (copy, nonatomic) id *_t_filePresenterStarted; // ivar: __t_filePresenterStarted
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) id *fetchCompletionBlock; // ivar: _fetchCompletionBlock
@property (readonly) NSUInteger hash;
@property (readonly) NSSet *observedPresentedItemUbiquityAttributes;
@property (readonly, retain) NSOperationQueue *presentedItemOperationQueue;
@property (readonly, copy) NSURL *presentedItemURL;
@property (readonly, copy) NSURL *primaryPresentedItemURL;
@property (readonly) Class superclass;


-(id)initWithItem:(id)arg0 ;
-(void)_setupFilePresenterAndWaitForUpload;
-(void)_tryFetchingSharingURL;
-(void)accommodatePresentedItemDeletionWithCompletionHandler:(id)arg0 ;
-(void)actionMain;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)presentedItemDidChangeUbiquityAttributes:(id)arg0 ;
-(void)presentedItemDidMoveToURL:(id)arg0 ;


@end


#endif