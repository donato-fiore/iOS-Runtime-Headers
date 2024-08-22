// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDACTIONPERFORMER_H
#define PXSHAREDLIBRARYSHARINGSUGGESTIONSFEEDACTIONPERFORMER_H

@class NSString;
@protocol PXFeedActionPerformer;

#import <Foundation/Foundation.h>

#import "PXPhotoKitAssetCollectionActionManager.h"

@interface PXSharedLibrarySharingSuggestionsFeedActionPerformer : NSObject <PXFeedActionPerformer>

 {
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)handlePrimaryActionOnItemAtIndexPath:(struct PXSimpleIndexPath )arg0 inDataSource:(id)arg1 fromViewController:(id)arg2 ;
// -(BOOL)navigateToObjectReference:(id)arg0 originalSource:(id)arg1 fromViewController:(id)arg2 animated:(BOOL)arg3 willPresentHandler:(id)arg4 completionHandler:(unk)arg5  ;
-(id)_photosViewConfigurationForSuggestion:(id)arg0 ;
-(id)contextMenuForObjectReference:(id)arg0 inDataSource:(id)arg1 suggestedActions:(id)arg2 fromViewController:(id)arg3 ;
-(id)createSeeAllViewControllerForPhotoLibrary:(id)arg0 ;
-(void)_configureCommonOptions:(id)arg0 ;


@end


#endif