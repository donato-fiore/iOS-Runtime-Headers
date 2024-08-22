// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUSTORYASSETPICKERHELPER_H
#define PUSTORYASSETPICKERHELPER_H

@class PHAssetCollection, NSString, PXLoadingStatusManager, UIViewController, NSSet;
@protocol PUAssetPickerCoordinatorActionHandler, PXDisplayAssetCollection, PUStoryAssetPickerHelperDelegate;

#import <Foundation/Foundation.h>

#import "PUAssetPickerCoordinator.h"

@interface PUStoryAssetPickerHelper : NSObject <PUAssetPickerCoordinatorActionHandler>



@property (readonly, nonatomic) PHAssetCollection *assetCollection; // ivar: _assetCollection
@property (readonly, nonatomic) NSObject<PXDisplayAssetCollection> *containerCollection; // ivar: _containerCollection
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUStoryAssetPickerHelperDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) PXLoadingStatusManager *loadingStatusManager; // ivar: _loadingStatusManager
@property (readonly, nonatomic) PUAssetPickerCoordinator *pickerCoordinator; // ivar: _pickerCoordinator
@property (readonly, nonatomic) UIViewController *pickerViewController;
@property (readonly, nonatomic) NSSet *preselectedOIDs; // ivar: _preselectedOIDs
@property (readonly) Class superclass;


-(id)initWithContainerAssetCollection:(id)arg0 preselectedAssets:(id)arg1 ;
-(void)coordinator:(id)arg0 didFinishPicking:(id)arg1 downscalingTargetDimension:(id)arg2 ;


@end


#endif