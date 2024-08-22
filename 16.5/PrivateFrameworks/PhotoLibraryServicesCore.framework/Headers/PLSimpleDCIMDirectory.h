// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLSIMPLEDCIMDIRECTORY_H
#define PLSIMPLEDCIMDIRECTORY_H

@class NSString, NSFileManager, NSMutableIndexSet, NSURL;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLSimpleDCIMDirectory : NSObject {
    NSString *_subDirSuffix;
    NSUInteger _directoryLimit;
    NSFileManager *_fileManager;
    NSMutableIndexSet *_availableFileNameNumbers;
    NSURL *_currentSubDirectory;
    NSUInteger _currentSubDirectoryNumber;
    NSString *_userInfoPath;
    BOOL _hasLoadedUserInfo;
    NSObject<OS_dispatch_queue> *_isolation;
}


@property (readonly, retain, nonatomic) NSURL *currentSubDirectory;
@property (readonly) NSURL *directoryURL; // ivar: _baseURL
@property BOOL representsCameraRoll; // ivar: _representsCameraRoll


+(id)cameraRollPlistName;
+(id)cloudPlistName;
+(id)migrateOldPlistToNewPlist:(id)arg0 ;
-(BOOL)_ensureDirectoryExists:(id)arg0 ;
-(id)availableFileNameNumbersInDirNumber:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithDirectoryURL:(id)arg0 subDirectorySuffix:(id)arg1 perDirectoryLimit:(NSUInteger)arg2 userInfoPath:(id)arg3 ;
-(id)nextAvailableFileURLWithExtension:(id)arg0 ;
-(id)subDirURLForNumber:(NSUInteger)arg0 create:(BOOL)arg1 didCreate:(*BOOL)arg2 ;
-(struct _NSRange )fileNameNumberRangeForDirNumber:(NSUInteger)arg0 ;
-(void)_loadUserInfoLastDirectoryNumber:(*id)arg0 lastFileNumber:(*id)arg1 ;
-(void)_saveUserInfo;
-(void)reset;


@end


#endif