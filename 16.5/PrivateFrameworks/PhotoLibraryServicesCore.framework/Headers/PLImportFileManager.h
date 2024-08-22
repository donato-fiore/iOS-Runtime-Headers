// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLIMPORTFILEMANAGER_H
#define PLIMPORTFILEMANAGER_H


#import <Foundation/Foundation.h>

#import "PLPhotoLibraryPathManager.h"

@interface PLImportFileManager : NSObject {
    PLPhotoLibraryPathManager *_pathManager;
}




+(BOOL)isCameraDirectoryFolderName:(id)arg0 ;
+(BOOL)isImportDirectoryFolderName:(id)arg0 ;
-(BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg0 ;
-(id)_DCIMFolderNameWithNumber:(NSInteger)arg0 ;
-(id)_dcimDirectory;
-(id)init;
-(id)initWithPathManager:(id)arg0 ;
-(id)nextAvailableFilePathInDirectory:(id)arg0 withExtension:(id)arg1 ;
-(id)urlForNewDCIMFolderWithFolderNumber:(*NSInteger)arg0 ;


@end


#endif