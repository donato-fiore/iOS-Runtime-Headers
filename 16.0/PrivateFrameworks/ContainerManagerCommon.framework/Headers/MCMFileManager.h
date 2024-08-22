// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MCMFILEMANAGER_H
#define MCMFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface MCMFileManager : NSObject {
    *unk _mkstemp_dprotected_np;
}




+(id)defaultManager;
-(BOOL)_CreateSystemUserACEInACL:(struct _acl **)arg0 withPermissions:(int)arg1 andFlags:(int)arg2 withError:(*id)arg3 ;
-(BOOL)_copyItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_enumeratePOSIX1eACLEntriesAtURL:(id)arg0 error:(*id)arg1 usingBlock:(id)arg2 ;
-(BOOL)_moveItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_traverseDirectory:(id)arg0 error:(*id)arg1 withBlock:(id)arg2 ;
-(BOOL)_validateSymlink:(id)arg0 withStartingDepth:(unsigned int)arg1 andEndingDepth:(*unsigned int)arg2 ;
-(BOOL)checkFileSystemAtURL:(id)arg0 isCaseSensitive:(*BOOL)arg1 canAtomicSwap:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)checkFileSystemAtURL:(id)arg0 supportsPerFileKeys:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)compareVolumeForURL:(id)arg0 versusURL:(id)arg1 isSameVolume:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 class:(int)arg3 error:(*id)arg4 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 owner:(id)arg3 class:(int)arg4 error:(*id)arg5 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 owner:(id)arg3 class:(int)arg4 fsNode:(*id)arg5 error:(*id)arg6 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 owner:(id)arg3 error:(*id)arg4 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg0 class:(*int)arg1 error:(*id)arg2 ;
-(BOOL)fixUserPermissionsAtURL:(id)arg0 limitToTopLevelURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)itemAtURL:(id)arg0 exists:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)itemAtURL:(id)arg0 exists:(*BOOL)arg1 isDirectory:(*BOOL)arg2 error:(*id)arg3 ;
-(BOOL)itemAtURL:(id)arg0 followSymlinks:(BOOL)arg1 exists:(*BOOL)arg2 isDirectory:(*BOOL)arg3 error:(*id)arg4 ;
-(BOOL)itemAtURL:(id)arg0 followSymlinks:(BOOL)arg1 exists:(*BOOL)arg2 isDirectory:(*BOOL)arg3 fsNode:(*id)arg4 error:(*id)arg5 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 isDirectory:(*BOOL)arg1 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeExclusionFromBackupFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
// -(BOOL)setDataProtectionClassOfItemAtURL:(id)arg0 toClass:(int)arg1 ifPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)setTopLevelSystemContainerACLAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)standardizeACLsAtURL:(id)arg0 isSystemContainer:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)standardizeACLsForSystemContainerAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)standardizeAllSystemContainerACLsAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)standardizeOwnershipAtURL:(id)arg0 toPOSIXUser:(id)arg1 error:(*id)arg2 ;
-(BOOL)stripACLFromURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)symbolicallyLinkURL:(id)arg0 toSymlinkTarget:(id)arg1 error:(*id)arg2 ;
-(BOOL)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 mode:(unsigned short)arg3 error:(*id)arg4 ;
-(NSUInteger)dataWritingOptionsForFileAtURL:(id)arg0 ;
-(NSUInteger)diskUsageForURL:(id)arg0 ;
-(NSUInteger)fastDiskUsageForURL:(id)arg0 ;
-(id)_realPathForURL:(id)arg0 allowNonExistentPathComponents:(BOOL)arg1 ;
-(id)_realPathWhatExistsInPath:(id)arg0 ;
-(id)copyDescriptionOfURL:(id)arg0 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg0 withNamePrefix:(id)arg1 error:(*id)arg2 ;
-(id)fsNodeOfURL:(id)arg0 followSymlinks:(BOOL)arg1 error:(*id)arg2 ;
-(id)fsSanitizedStringFromString:(id)arg0 ;
-(id)init;
-(id)readDataFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)readDataFromURL:(id)arg0 options:(NSUInteger)arg1 fsNode:(*id)arg2 error:(*id)arg3 ;
-(id)realPathForURL:(id)arg0 ifChildOfURL:(id)arg1 ;
-(id)realPathForURL:(id)arg0 isDirectory:(BOOL)arg1 error:(*id)arg2 ;
-(id)targetOfSymbolicLinkAtURL:(id)arg0 error:(*id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(struct _acl *)_CopySystemContainerACLWithNumACEs:(int)arg0 isDir:(BOOL)arg1 inheritOnly:(BOOL)arg2 withError:(*id)arg3 ;
-(struct _acl *)_CopyTopLevelSystemContainerACLWithError:(*id)arg0 ;
-(void)printDirectoryStructureAtURL:(id)arg0 ;


@end


#endif