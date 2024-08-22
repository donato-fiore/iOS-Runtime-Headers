// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef IXFILEMANAGER_H
#define IXFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface IXFileManager : NSObject



+(id)defaultManager;
-(BOOL)_copyItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_moveItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_removeACLAtPath:(char *)arg0 isDir:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_traverseDirectory:(id)arg0 error:(*id)arg1 withBlock:(id)arg2 ;
-(BOOL)_validateSymlink:(id)arg0 withStartingDepth:(unsigned int)arg1 andEndingDepth:(*unsigned int)arg2 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 class:(int)arg3 error:(*id)arg4 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg0 withDestinationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg0 class:(*int)arg1 error:(*id)arg2 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)itemExistsAtURL:(id)arg0 isDirectory:(*BOOL)arg1 error:(*id)arg2 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemAtURL:(id)arg0 keepParent:(BOOL)arg1 error:(*id)arg2 ;
// -(BOOL)setDataProtectionClassOfItemAtURL:(id)arg0 toClass:(int)arg1 ifPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)setPermissionsOfItemAtURL:(id)arg0 toMode:(unsigned short)arg1 error:(*id)arg2 ;
-(NSUInteger)_diskUsageForDirectoryURL:(id)arg0 ;
-(NSUInteger)diskUsageForURL:(id)arg0 ;
-(id)_realPathForURL:(id)arg0 allowNonExistentPathComponents:(BOOL)arg1 ;
-(id)_realPathWhatExistsInPath:(id)arg0 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(id)debugDescriptionOfItemAtURL:(id)arg0 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg0 error:(*id)arg1 ;
-(id)realPathForURL:(id)arg0 ifChildOfURL:(id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg0 ignoringSymlinks:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif