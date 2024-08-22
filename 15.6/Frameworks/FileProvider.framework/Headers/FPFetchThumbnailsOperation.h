// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FPFETCHTHUMBNAILSOPERATION_H
#define FPFETCHTHUMBNAILSOPERATION_H

@class NSArray, NSOperationQueue, NSMutableArray, NSString;
@protocol FPOperationProgressDelegate;


#import "FPOperation.h"
#import "FPItemManager.h"

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate>

 {
    NSArray *_items;
    CGSize _desiredSize;
    CGFloat _screenScale;
    FPItemManager *_itemManager;
    NSOperationQueue *_subOperationQueue;
    NSMutableArray *_subOperations;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *perThumbnailCompletionBlock; // ivar: _perThumbnailCompletionBlock
@property (readonly) Class superclass;
@property (copy, nonatomic) id *thumbnailsFetchCompletionBlock; // ivar: _thumbnailsFetchCompletionBlock


-(id)init;
-(id)initWithItems:(id)arg0 desiredSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 itemManager:(id)arg3 ;
-(void)_perItemCompletionBlockFor:(id)arg0 thumbnail:(id)arg1 contentType:(id)arg2 error:(id)arg3 ;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)operation:(id)arg0 didReceiveProgressInfo:(id)arg1 error:(id)arg2 ;


@end


#endif