// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPHOTOKITSYNDICATIONSAVEACTIONPERFORMER_H
#define PUPHOTOKITSYNDICATIONSAVEACTIONPERFORMER_H



#import "PUPXPhotoKitActionPerformerAdapter.h"

@interface PUPhotoKitSyndicationSaveActionPerformer : PUPXPhotoKitActionPerformerAdapter



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(Class)pxActionPerformerClass;
-(id)pxActionType;


@end


#endif