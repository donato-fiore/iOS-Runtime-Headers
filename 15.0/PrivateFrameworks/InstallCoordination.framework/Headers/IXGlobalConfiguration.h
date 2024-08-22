// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IXGLOBALCONFIGURATION_H
#define IXGLOBALCONFIGURATION_H

@class NSURL;

#import <Foundation/Foundation.h>


@interface IXGlobalConfiguration : NSObject {
    os_unfair_lock_s _dynamicPropertyLock;
}


@property (readonly, nonatomic) unsigned int daemonGID; // ivar: _daemonGID
@property (readonly, nonatomic) unsigned int daemonUID; // ivar: _daemonUID
@property (readonly, nonatomic) NSURL *daemonUserHome; // ivar: _daemonUserHome
@property (readonly, nonatomic) NSURL *dataStorageHome; // ivar: _dataStorageHome
@property (readonly, nonatomic) NSURL *frameworkURL;
@property (readonly, nonatomic) NSURL *rootPath; // ivar: _rootPath
@property (readonly, nonatomic) NSURL *userVolumeURL;


+(id)sharedInstance;
-(id)_dataStorageHomeURLWithError:(*id)arg0 ;
-(id)dataDirectoryAbortingOnError;
-(id)dataDirectoryWithError:(*id)arg0 ;
-(id)init;
-(id)promiseStagingRootDirectoryAbortingOnError;
-(id)promiseStagingRootDirectoryWithError:(*id)arg0 ;
-(id)remoteInstallationStagingDirectory:(*id)arg0 ;
-(id)removabilityDirectoryAbortingOnError;
-(id)removabilityDirectoryWithError:(*id)arg0 ;
-(void)createDirectories;


@end


#endif