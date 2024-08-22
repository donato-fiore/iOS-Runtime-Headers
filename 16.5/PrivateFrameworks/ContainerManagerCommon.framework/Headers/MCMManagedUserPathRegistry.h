// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MCMMANAGEDUSERPATHREGISTRY_H
#define MCMMANAGEDUSERPATHREGISTRY_H



#import "MCMManagedPathRegistry.h"
#import "MCMManagedPath.h"
#import "MCMUserIdentity.h"

@interface MCMManagedUserPathRegistry : MCMManagedPathRegistry

@property (readonly, nonatomic) MCMManagedPath *containermanagerUserDeleteOperations; // ivar: _containermanagerUserDeleteOperations
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserLibrary; // ivar: _containermanagerUserLibrary
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserPendingUpdates; // ivar: _containermanagerUserPendingUpdates
@property (readonly, nonatomic) MCMManagedPath *containermanagerUserReplaceOperations; // ivar: _containermanagerUserReplaceOperations
@property (readonly, nonatomic) MCMManagedPath *userHome; // ivar: _userHome
@property (readonly, nonatomic) MCMUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) MCMManagedPath *userLibrary; // ivar: _userLibrary


-(id)initWithUserIdentity:(id)arg0 daemonUser:(id)arg1 ;
-(void)_initPathPropertiesWithUserHomeDirectoryURL:(id)arg0 clientUser:(id)arg1 ;


@end


#endif