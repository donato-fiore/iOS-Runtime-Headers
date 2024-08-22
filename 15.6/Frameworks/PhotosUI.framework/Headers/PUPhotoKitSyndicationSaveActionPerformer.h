// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUPHOTOKITSYNDICATIONSAVEACTIONPERFORMER_H
#define PUPHOTOKITSYNDICATIONSAVEACTIONPERFORMER_H

@class NSString;
@protocol PXAssetsSharingHelperDelegate;


#import "PUPhotoKitActionPerformer.h"

@interface PUPhotoKitSyndicationSaveActionPerformer : PUPhotoKitActionPerformer <PXAssetsSharingHelperDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)canPerformOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
+(BOOL)shouldEnableOnAsset:(id)arg0 inAssetCollection:(id)arg1 ;
-(BOOL)assetsSharingHelper:(id)arg0 dismissViewController:(id)arg1 completionHandler:(id)arg2 ;
-(BOOL)assetsSharingHelper:(id)arg0 presentViewController:(id)arg1 ;
-(void)performBackgroundTask;
-(void)performUserInteractionTask;


@end


#endif