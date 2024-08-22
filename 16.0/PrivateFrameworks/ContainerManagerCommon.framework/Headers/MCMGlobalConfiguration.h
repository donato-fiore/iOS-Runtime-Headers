// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMGLOBALCONFIGURATION_H
#define MCMGLOBALCONFIGURATION_H

@class NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "MCMPOSIXUser.h"
#import "MCMContainerClassPathCache.h"
#import "MCMLibraryRepair.h"
#import "MCMManagedPathRegistry.h"

@interface MCMGlobalConfiguration : NSObject {
    NSURL *_homeDirectory;
    NSURL *_cachesDirectory;
}


@property (readonly, nonatomic) NSArray *appUserDataItemNames;
@property (readonly, nonatomic) unsigned int bundleContainerMode; // ivar: _bundleContainerMode
@property (readonly, nonatomic) MCMPOSIXUser *bundleContainerOwner; // ivar: _bundleContainerOwner
@property (readonly, nonatomic) MCMContainerClassPathCache *classPathCache; // ivar: _classPathCache
@property (readonly, nonatomic) MCMPOSIXUser *currentUser; // ivar: _currentUser
@property (readonly, nonatomic) MCMPOSIXUser *defaultUser; // ivar: _defaultUser
@property (readonly, nonatomic) NSArray *excludedFromAppUserData;
@property (nonatomic) BOOL isInternalImage; // ivar: _isInternalImage
@property (readonly, nonatomic) BOOL kernelUpcallEnabled; // ivar: _kernelUpcallEnabled
@property (readonly, nonatomic) MCMLibraryRepair *libraryRepair; // ivar: _libraryRepair
@property (readonly, nonatomic) MCMManagedPathRegistry *managedPathRegistry; // ivar: _managedPathRegistry
@property (readonly, nonatomic) unsigned int runmode; // ivar: _runmode
@property (readonly, nonatomic) NSURL *sharedContainersDirectory; // ivar: _sharedContainersDirectory
@property (readonly, nonatomic) unsigned int systemContainerMode; // ivar: _systemContainerMode
@property (readonly, nonatomic) MCMPOSIXUser *systemContainerOwner; // ivar: _systemContainerOwner
@property (readonly, nonatomic) unsigned int userContainerMode; // ivar: _userContainerMode


-(BOOL)isGlobalBundleContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isGlobalContainerClass:(NSUInteger)arg0 ;
-(BOOL)isGlobalSystemContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isPerUserBundleContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isUnsupportedBundleContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isUnsupportedSystemContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isUserBundleContainerWithContainerClass:(NSUInteger)arg0 ;
-(BOOL)isUserSystemContainerWithContainerClass:(NSUInteger)arg0 ;
-(id)initWithRunMode:(unsigned int)arg0 userContainerMode:(unsigned int)arg1 bundleContainerMode:(unsigned int)arg2 bundleContainerOwner:(id)arg3 systemContainerMode:(unsigned int)arg4 systemContainerOwner:(id)arg5 defaultUser:(id)arg6 kernelUpcallEnabled:(BOOL)arg7 ;
-(unsigned int)dispositionForContainerClass:(NSUInteger)arg0 ;
-(unsigned int)dispositionForContainerClass:(NSUInteger)arg0 forUser:(id)arg1 ;
-(void)signpostFirstContainerClass:(NSUInteger)arg0 ;


@end


#endif