// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITEDITACTIONPERFORMER_H
#define PUPHOTOKITEDITACTIONPERFORMER_H

@class UIViewController;


#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitEditActionPerformer : PUPhotoKitActionPerformer {
    UIViewController *_presentedAlertViewController;
}




+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(void)_beginEditingCurrentAsset;
-(void)_presentEditorForAsset:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif