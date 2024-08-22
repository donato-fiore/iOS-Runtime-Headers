// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUPXPHOTOKITUNIFIEDDESTRUCTIVEACTIONPERFORMER_H
#define PUPXPHOTOKITUNIFIEDDESTRUCTIVEACTIONPERFORMER_H

@class PXPhotoKitAssetActionPerformer;



@interface PUPXPhotoKitUnifiedDestructiveActionPerformer : PXPhotoKitAssetActionPerformer



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(BOOL)canPerformOnSubsetOfSelection;
+(id)_containedPerformerClasses;
+(id)createBarButtonItemWithTarget:(id)arg0 action:(SEL)arg1 actionManager:(id)arg2 ;
-(BOOL)_isDestructiveAction:(Class)arg0 ;
-(void)_handleActionPick:(id)arg0 forPerformerClass:(Class)arg1 ;
-(void)performUserInteractionTask;


@end


#endif