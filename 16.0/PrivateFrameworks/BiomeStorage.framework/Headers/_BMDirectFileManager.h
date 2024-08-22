// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _BMDIRECTFILEMANAGER_H
#define _BMDIRECTFILEMANAGER_H

@class NSString;
@protocol BMFileManagerImpl;


#import "BMFileManager.h"
#import "BMFileHandle.h"

@interface _BMDirectFileManager : BMFileManager <BMFileManagerImpl>

 {
    NSString *_directory;
    int _extraFlags;
    int _protection;
    os_unfair_lock_s _setUpLock;
    BMFileHandle *_directoryHandle;
}




-(BOOL)_removeDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)_removeFileAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceFileAtPath:(id)arg0 withFileHandle:(id)arg1 error:(*id)arg2 ;
-(BOOL)setUpWithError:(*id)arg0 ;
-(id)_fileHandleForFileAtPath:(id)arg0 flags:(int)arg1 protection:(int)arg2 error:(*id)arg3 ;
-(id)_memoryMappingForFileAtPath:(id)arg0 flags:(int)arg1 error:(*id)arg2 ;
-(id)initWithDirectory:(id)arg0 cachingOptions:(NSInteger)arg1 extraFlags:(int)arg2 protection:(int)arg3 ;
-(id)temporaryFileHandleWithProtection:(int)arg0 error:(*id)arg1 ;
-(int)_openTemporaryDirectory;


@end


#endif