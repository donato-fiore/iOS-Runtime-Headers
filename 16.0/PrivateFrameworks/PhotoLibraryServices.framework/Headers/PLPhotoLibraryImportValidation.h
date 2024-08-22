// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYIMPORTVALIDATION_H
#define PLPHOTOLIBRARYIMPORTVALIDATION_H

@class NSFileManager, PLPhotoLibraryPathManager;

#import <Foundation/Foundation.h>

#import "PLLibraryServicesManager.h"

@interface PLPhotoLibraryImportValidation : NSObject {
    PLLibraryServicesManager *_libraryServicesManager;
    NSFileManager *_fm;
    PLPhotoLibraryPathManager *_pm;
}




-(BOOL)checkLegacyLibraryRequiresRepairWithError:(*id)arg0 ;
-(BOOL)checkLegacyLibraryVersionStatusWithError:(*id)arg0 ;
-(BOOL)checkLibraryCPLStatusWithError:(*id)arg0 ;
-(BOOL)checkLibraryVersionStatusWithError:(*id)arg0 ;
-(BOOL)isLibraryValidForImportWithError:(*id)arg0 ;
-(id)initWithLibraryManager:(id)arg0 ;


@end


#endif