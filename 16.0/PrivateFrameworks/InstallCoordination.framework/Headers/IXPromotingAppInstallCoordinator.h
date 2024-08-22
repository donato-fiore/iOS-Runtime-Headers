// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXPROMOTINGAPPINSTALLCOORDINATOR_H
#define IXPROMOTINGAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance;


#import "IXAppInstallCoordinator.h"

@interface IXPromotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)intent;
-(id)validInstallTypes;


@end


#endif