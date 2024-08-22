// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLPHOTOLIBRARYOPENER_H
#define PLPHOTOLIBRARYOPENER_H


#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLPhotoLibraryOpener : NSObject {
    BOOL _reportInProgressUpgrades;
}


@property (readonly) PLLibraryServicesManager *libraryServicesManager; // ivar: _libraryServicesManager


+(BOOL)canAutomaticallyCreateLibrary;
-(BOOL)createPhotoLibraryDatabaseWithOptions:(id)arg0 error:(*id)arg1 ;
-(BOOL)lightweightPermissionCheckWithError:(*id)arg0 ;
-(BOOL)lightweightPermissionCheckWithPath:(id)arg0 isDir:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)openPhotoLibraryDatabaseWithAutoUpgrade:(BOOL)arg0 autoCreate:(BOOL)arg1 error:(*id)arg2 ;
-(id)initWithLibraryServicesManager:(id)arg0 reportInProgressUpgrades:(BOOL)arg1 ;


@end


#endif