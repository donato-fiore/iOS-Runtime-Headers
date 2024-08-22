// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IXRESTORINGDEMOTEDAPPINSTALLCOORDINATOR_H
#define IXRESTORINGDEMOTEDAPPINSTALLCOORDINATOR_H

@class NSString;
@protocol IXCoordinatorWithUserDataPromise, IXCoordinatorWithImportance;


#import "IXAppInstallCoordinator.h"

@interface IXRestoringDemotedAppInstallCoordinator : IXAppInstallCoordinator <IXCoordinatorWithUserDataPromise, IXCoordinatorWithImportance>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasUserDataPromise;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)intent;
-(id)validInstallTypes;


@end


#endif