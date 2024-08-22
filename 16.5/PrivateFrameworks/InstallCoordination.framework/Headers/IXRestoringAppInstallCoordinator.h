// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXRESTORINGAPPINSTALLCOORDINATOR_H
#define IXRESTORINGAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithUserDataPromise, IXCoordinatorWithRemovabilityState;


#import "IXAppInstallCoordinator.h"

@interface IXRestoringAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithUserDataPromise, IXCoordinatorWithRemovabilityState>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)intent;
-(id)validInstallTypes;


@end


#endif