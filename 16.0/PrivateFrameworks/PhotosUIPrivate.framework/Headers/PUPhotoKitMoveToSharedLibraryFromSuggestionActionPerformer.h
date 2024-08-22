// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUPHOTOKITMOVETOSHAREDLIBRARYFROMSUGGESTIONACTIONPERFORMER_H
#define PUPHOTOKITMOVETOSHAREDLIBRARYFROMSUGGESTIONACTIONPERFORMER_H



#import "PUPXPhotoKitActionPerformerAdapter.h"

@interface PUPhotoKitMoveToSharedLibraryFromSuggestionActionPerformer : PUPXPhotoKitActionPerformerAdapter



+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(Class)pxActionPerformerClass;
-(id)pxActionType;
-(void)completeUserInteractionTaskWithSuccess:(BOOL)arg0 error:(id)arg1 ;


@end


#endif