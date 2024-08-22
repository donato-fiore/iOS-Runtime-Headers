// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXDEMOTINGAPPINSTALLCOORDINATOR_H
#define IXDEMOTINGAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance;


#import "IXAppInstallCoordinator.h"

@interface IXDemotingAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithInstallOptions, IXCoordinatorWithImportance>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasInstallOptions;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)intent;
-(id)validInstallTypes;


@end


#endif