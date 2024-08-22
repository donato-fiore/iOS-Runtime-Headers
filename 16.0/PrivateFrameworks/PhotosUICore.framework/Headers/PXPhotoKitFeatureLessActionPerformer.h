// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITFEATURELESSACTIONPERFORMER_H
#define PXPHOTOKITFEATURELESSACTIONPERFORMER_H

@protocol PXSuggestLessPeopleHelperDelegate;


#import "PXPhotoKitAssetActionPerformer.h"
#import "PXSuggestLessPeopleHelper.h"

@interface PXPhotoKitFeatureLessActionPerformer : PXPhotoKitAssetActionPerformer <PXSuggestLessPeopleHelperDelegate>

 {
    PXSuggestLessPeopleHelper *_suggestLessPeopleHelper;
}




+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 person:(id)arg2 ;
+(id)_facesInCurrentAsset:(id)arg0 ;
+(id)_personFromFace:(id)arg0 asset:(id)arg1 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 actionManager:(id)arg1 ;
+(id)systemImageNameForActionManager:(id)arg0 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)suggestLessPeopleHelper:(id)arg0 presentViewController:(id)arg1 ;
-(id)_personFromFace:(id)arg0 ;
-(void)performUserInteractionTask;


@end


#endif