// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMMANAGEDPATHREGISTRY_H
#define MCMMANAGEDPATHREGISTRY_H

@class NSSet;

#import <Foundation/Foundation.h>

#import "MCMManagedPath.h"
#import "MCMPOSIXUser.h"

@interface MCMManagedPathRegistry : NSObject

@property (readonly, nonatomic) MCMManagedPath *caches; // ivar: _caches
@property (readonly, nonatomic) MCMManagedPath *containermanagerCaches; // ivar: _containermanagerCaches
@property (readonly, nonatomic) MCMManagedPath *containermanagerCachesIntermediate; // ivar: _containermanagerCachesIntermediate
@property (readonly, nonatomic) MCMManagedPath *containermanagerDeathrow; // ivar: _containermanagerDeathrow
@property (readonly, nonatomic) MCMManagedPath *containermanagerDeleteOperations; // ivar: _containermanagerDeleteOperations
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibrary; // ivar: _containermanagerLibrary
@property (readonly, nonatomic) MCMManagedPath *containermanagerLibraryIntermediate; // ivar: _containermanagerLibraryIntermediate
@property (readonly, nonatomic) MCMManagedPath *containermanagerLogs; // ivar: _containermanagerLogs
@property (readonly, nonatomic) MCMManagedPath *containermanagerPendingUpdates; // ivar: _containermanagerPendingUpdates
@property (readonly, nonatomic) MCMManagedPath *containermanagerReplaceOperations; // ivar: _containermanagerReplaceOperations
@property (readonly, nonatomic) MCMPOSIXUser *daemonUser; // ivar: _daemonUser
@property (readonly, nonatomic) MCMManagedPath *home; // ivar: _home
@property (readonly, nonatomic) MCMManagedPath *library; // ivar: _library
@property (readonly, nonatomic) MCMManagedPath *logs; // ivar: _logs
@property (readonly, nonatomic) NSSet *paths; // ivar: _paths
@property (readonly, nonatomic) BOOL privileged; // ivar: _privileged


-(id)initWithDaemonUser:(id)arg0 privileged:(BOOL)arg1 ;
-(id)managedPathForURL:(id)arg0 ;
-(id)orderedPathsFromPaths:(id)arg0 ;
-(void)_addPaths:(id)arg0 ;
-(void)_initPathPropertiesWithDaemonUser:(id)arg0 ;


@end


#endif