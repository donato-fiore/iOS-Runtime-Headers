// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXGIZMOINSTALLINGAPPINSTALLCOORDINATOR_H
#define IXGIZMOINSTALLINGAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance;


#import "IXAppInstallCoordinator.h"

@interface IXGizmoInstallingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithAppAssetPromise, IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAppAssetPromise;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)modifiesLocalLaunchServicesDatabase;
+(NSUInteger)intent;
-(BOOL)setTargetGizmoPairingID:(id)arg0 error:(*id)arg1 ;
-(id)targetGizmoPairingIDWithError:(*id)arg0 ;
-(id)validInstallTypes;


@end


#endif