// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPXPHOTOKITCOMPOSITEVIDEOACTIONPERFORMER_H
#define PUPXPHOTOKITCOMPOSITEVIDEOACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer, NSString;
@protocol PXActivityActionDelegate;


#import "PUCompositeVideoActivity.h"

@interface PUPXPhotoKitCompositeVideoActionPerformer : PXPhotoKitAssetActionPerformer <PXActivityActionDelegate>

 {
    PUCompositeVideoActivity *_compositeVideoActivity;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)createPreviewActionWithTitle:(id)arg0 image:(id)arg1 handler:(id)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(void)activity:(id)arg0 didFinishWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)performUserInteractionTask;


@end


#endif