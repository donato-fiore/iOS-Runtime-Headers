// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXUPDATINGAPPINSTALLCOORDINATOR_H
#define IXUPDATINGAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance, IXCoordinatorWithRemovabilityState, IXCoordinatorWithPostProcessingPromises, IXCoordinatorWithEssentialAssetPromises;


#import "IXAppInstallCoordinator.h"

@interface IXUpdatingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithInitialODRAssetPromises, IXCoordinatorWithDeviceSecurityPromise, IXCoordinatorWithImportance, IXCoordinatorWithRemovabilityState, IXCoordinatorWithPostProcessingPromises, IXCoordinatorWithEssentialAssetPromises>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInitialODRAssetPromises;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)intent;
-(id)validInstallTypes;


@end


#endif