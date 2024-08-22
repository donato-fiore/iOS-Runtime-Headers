// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMLIBRARYREPAIRFORUSER_H
#define MCMLIBRARYREPAIRFORUSER_H



#import "MCMLibraryRepair.h"
#import "MCMManagedUserPathRegistry.h"

@interface MCMLibraryRepairForUser : MCMLibraryRepair

@property (readonly, nonatomic) MCMManagedUserPathRegistry *userRegistry; // ivar: _userRegistry


-(BOOL)_canRepairLocally;
-(BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)arg0 containerPath:(id)arg1 containerIdentifier:(id)arg2 error:(*id)arg3 duringBlock:(id)arg4 ;
-(BOOL)fixAndRetryIfPermissionsErrorWithURL:(id)arg0 containerRootURL:(id)arg1 error:(*id)arg2 duringBlock:(id)arg3 ;
-(BOOL)performRepairForContainerPath:(id)arg0 containerIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)_managedPathFromContainerClassPath:(id)arg0 registry:(id)arg1 ;
-(id)_managedPathsForGenericRepair;
-(id)_setByAddingContainerClassPathsToSet:(id)arg0 registry:(id)arg1 ;
-(id)initWithManagedUserPathRegistry:(id)arg0 ;


@end


#endif