// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPXPHOTOKITACTIONPERFORMERADAPTER_H
#define PUPXPHOTOKITACTIONPERFORMERADAPTER_H

@class PXPhotoKitAssetActionPerformer, NSString;
@protocol PXActionPerformerDelegate;


#import "PUPhotoKitActionPerformer.h"

@interface PUPXPhotoKitActionPerformerAdapter : PUPhotoKitActionPerformer <PXActionPerformerDelegate>

 {
    PXPhotoKitAssetActionPerformer *_pxActionPerformer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *pxActionType;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(Class)pxActionPerformerClass;
-(BOOL)actionPerformer:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)actionPerformer:(id)arg0 presentViewController:(id)arg1 ;
-(id)hostViewControllerForActionPerformer:(id)arg0 ;
-(id)initWithActionType:(NSUInteger)arg0 assets:(id)arg1 orAssetsByAssetCollection:(id)arg2 ;
-(id)undoManagerForActionPerformer:(id)arg0 ;
-(void)_configureActionPerformer:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif