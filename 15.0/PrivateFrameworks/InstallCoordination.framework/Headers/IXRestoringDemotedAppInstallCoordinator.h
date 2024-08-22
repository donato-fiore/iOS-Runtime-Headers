// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


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


+(BOOL)enumerateCoordinatorsWithError:(*id)arg0 usingBlock:(id)arg1 ;
+(id)coordinatorForAppWithBundleID:(id)arg0 withClientID:(NSUInteger)arg1 createIfNotExisting:(BOOL)arg2 created:(*BOOL)arg3 error:(*id)arg4 ;
+(id)existingCoordinatorForAppWithBundleID:(id)arg0 error:(*id)arg1 ;
+(void)enumerateCoordinatorsUsingBlock:(id)arg0 ;
-(id)validInstallTypes;


@end


#endif