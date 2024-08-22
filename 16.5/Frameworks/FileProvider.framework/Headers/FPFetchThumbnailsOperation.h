// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPFETCHTHUMBNAILSOPERATION_H
#define FPFETCHTHUMBNAILSOPERATION_H

@class NSMutableDictionary, NSMutableArray, NSOperationQueue, NSString;
@protocol FPOperationProgressDelegate;


#import "FPOperation.h"
#import "FPItemManager.h"

@interface FPFetchThumbnailsOperation : FPOperation <FPOperationProgressDelegate>

 {
    NSMutableDictionary *_dictionary;
    NSMutableArray *_appLibraryItems;
    NSMutableArray *_placeHoldersItems;
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
@property (copy, nonatomic) id *perThumbnailWithVersionCompletionBlock; // ivar: _perThumbnailWithVersionCompletionBlock
@property (readonly) Class superclass;
@property (copy, nonatomic) id *thumbnailsFetchCompletionBlock; // ivar: _thumbnailsFetchCompletionBlock


-(id)init;
-(id)initWithItem:(id)arg0 versions:(id)arg1 desiredSize:(struct CGSize )arg2 screenScale:(CGFloat)arg3 itemManager:(id)arg4 ;
-(id)initWithItems:(id)arg0 desiredSize:(struct CGSize )arg1 screenScale:(CGFloat)arg2 itemManager:(id)arg3 ;
-(void)_perItemCompletionBlockFor:(id)arg0 version:(id)arg1 thumbnailURL:(id)arg2 thumbnailData:(id)arg3 contentType:(id)arg4 metadata:(id)arg5 error:(id)arg6 ;
-(void)cancel;
-(void)finishWithResult:(id)arg0 error:(id)arg1 ;
-(void)main;
-(void)operation:(id)arg0 didReceiveProgressInfo:(id)arg1 error:(id)arg2 ;


@end


#endif