// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPHOTOKITASSETCOLLECTIONCONTENTSYNDICATIONREMOVESUGGESTIONACTIONPERFORMER_H
#define PXPHOTOKITASSETCOLLECTIONCONTENTSYNDICATIONREMOVESUGGESTIONACTIONPERFORMER_H



#import "PXPhotoKitAssetCollectionActionPerformer.h"

@interface PXPhotoKitAssetCollectionContentSyndicationRemoveSuggestionActionPerformer : PXPhotoKitAssetCollectionActionPerformer

@property (nonatomic) BOOL shouldSkipUserConfirmation; // ivar: _shouldSkipUserConfirmation


+(BOOL)canPerformOnAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
+(id)_mediaSpecificMessageForKeyPrefix:(id)arg0 forAssets:(id)arg1 ;
+(id)createBarButtonItemForAssetCollectionReference:(id)arg0 withTarget:(id)arg1 action:(SEL)arg2 ;
+(id)localizedTitleForUseCase:(NSUInteger)arg0 assetCollectionReference:(id)arg1 withInputs:(id)arg2 ;
+(id)systemImageNameForAssetCollectionReference:(id)arg0 withInputs:(id)arg1 ;
-(id)_assetsFromAssetCollection;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif