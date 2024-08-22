// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MIFILEMANAGER_H
#define MIFILEMANAGER_H


#import <Foundation/Foundation.h>


@interface MIFileManager : NSObject



+(id)_sanitizeFilePathForVarOrTmpSymlink:(id)arg0 ;
+(id)defaultManager;
-(BOOL)_bulkSetPropertiesForPath:(char *)arg0 existingFD:(int)arg1 UID:(unsigned int)arg2 GID:(unsigned int)arg3 mode:(unsigned short)arg4 flags:(unsigned int)arg5 dataProtectionClass:(int)arg6 removeACL:(BOOL)arg7 error:(*id)arg8 ;
-(BOOL)_copyItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 alwaysClone:(BOOL)arg3 ignoreErrors:(BOOL)arg4 error:(*id)arg5 ;
-(BOOL)_itemIsType:(unsigned short)arg0 withDescription:(id)arg1 atURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)_markEAFlag:(char *)arg0 forAppIdentifier:(id)arg1 insecurelyCachedOnBundle:(id)arg2 error:(*id)arg3 ;
-(BOOL)_moveItemAtURL:(id)arg0 toURL:(id)arg1 failIfSrcMissing:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)_removeACLAtPath:(char *)arg0 isDir:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)_setData:(id)arg0 forExtendedAttributeNamed:(id)arg1 onURL:(id)arg2 orFD:(int)arg3 error:(*id)arg4 ;
-(BOOL)_stageURLByCopying:(id)arg0 toItemName:(id)arg1 inStagingDir:(id)arg2 stagingMode:(int)arg3 settingUID:(unsigned int)arg4 gid:(unsigned int)arg5 hasSymlink:(*BOOL)arg6 error:(*id)arg7 ;
-(BOOL)_validateSymlink:(id)arg0 withStartingDepth:(unsigned int)arg1 andEndingDepth:(*unsigned int)arg2 ;
-(BOOL)bulkSetPropertiesForPath:(char *)arg0 UID:(unsigned int)arg1 GID:(unsigned int)arg2 mode:(unsigned short)arg3 flags:(unsigned int)arg4 dataProtectionClass:(int)arg5 removeACL:(BOOL)arg6 error:(*id)arg7 ;
-(BOOL)bulkSetPropertiesForPath:(char *)arg0 withOpenFD:(int)arg1 UID:(unsigned int)arg2 GID:(unsigned int)arg3 mode:(unsigned short)arg4 flags:(unsigned int)arg5 dataProtectionClass:(int)arg6 removeACL:(BOOL)arg7 error:(*id)arg8 ;
-(BOOL)bundleAtURLIsPlaceholder:(id)arg0 ;
-(BOOL)captureStoreDataFromDirectory:(id)arg0 toDirectory:(id)arg1 doCopy:(BOOL)arg2 failureIsFatal:(BOOL)arg3 withError:(*id)arg4 ;
-(BOOL)clearPlaceholderStatusForBundle:(id)arg0 withError:(*id)arg1 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 alwaysClone:(BOOL)arg2 error:(*id)arg3 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemIgnoringErrorsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 class:(int)arg3 error:(*id)arg4 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 mode:(unsigned short)arg2 error:(*id)arg3 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg0 withDestinationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)dataProtectionClassOfItemAtURL:(id)arg0 class:(*int)arg1 error:(*id)arg2 ;
-(BOOL)itemDoesNotExistAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 ;
-(BOOL)itemExistsAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)itemIsDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)itemIsFileAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)itemIsSymlinkAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)markBundleAsPlaceholder:(id)arg0 withError:(*id)arg1 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemIfExistsAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemAtURL:(id)arg0 keepParent:(BOOL)arg1 error:(*id)arg2 ;
-(BOOL)secureRenameFromSourceURL:(id)arg0 toDestinationURL:(id)arg1 destinationStatus:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)setAppClipAppIdentifier:(id)arg0 insecurelyCachedOnBundle:(id)arg1 error:(*id)arg2 ;
-(BOOL)setData:(id)arg0 forExtendedAttributeNamed:(id)arg1 onFD:(int)arg2 fdLocation:(id)arg3 error:(*id)arg4 ;
-(BOOL)setData:(id)arg0 forExtendedAttributeNamed:(id)arg1 onURL:(id)arg2 error:(*id)arg3 ;
// -(BOOL)setDataProtectionClassOfItemAtURL:(id)arg0 toClass:(int)arg1 ifPredicate:(id)arg2 error:(unk)arg3  ;
-(BOOL)setInstallType:(id)arg0 inExtendedAttributeOnBundle:(id)arg1 error:(*id)arg2 ;
-(BOOL)setModificationDateToNowForURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setOwnerOfURL:(id)arg0 toUID:(unsigned int)arg1 gid:(unsigned int)arg2 error:(*id)arg3 ;
-(BOOL)setPermissionsForURL:(id)arg0 toMode:(unsigned short)arg1 error:(*id)arg2 ;
-(BOOL)setValidatedByFreeProfileAppIdentifier:(id)arg0 insecurelyCachedOnBundle:(id)arg1 error:(*id)arg2 ;
-(BOOL)stageURL:(id)arg0 toItemName:(id)arg1 inStagingDir:(id)arg2 stagingMode:(int)arg3 settingUID:(unsigned int)arg4 gid:(unsigned int)arg5 hasSymlink:(*BOOL)arg6 error:(*id)arg7 ;
-(BOOL)stageURLByMoving:(id)arg0 toItemName:(id)arg1 inStagingDir:(id)arg2 settingUID:(unsigned int)arg3 gid:(unsigned int)arg4 dataProtectionClass:(int)arg5 hasSymlink:(*BOOL)arg6 error:(*id)arg7 ;
-(BOOL)standardizeOwnershipAtURL:(id)arg0 toUID:(unsigned int)arg1 GID:(unsigned int)arg2 removeACLs:(BOOL)arg3 setProtectionClass:(BOOL)arg4 foundSymlink:(*BOOL)arg5 error:(*id)arg6 ;
-(BOOL)validateSymlinksInURLDoNotEscapeURL:(id)arg0 error:(*id)arg1 ;
-(NSUInteger)diskUsageForURL:(id)arg0 ;
-(id)_dataForExtendedAttributeNamed:(id)arg0 length:(NSUInteger)arg1 onURL:(id)arg2 orFD:(int)arg3 error:(*id)arg4 ;
-(id)_insecureCachedAppIdentifierIfMarkedWithEAFlag:(char *)arg0 bundleURL:(id)arg1 allowPlaceholders:(BOOL)arg2 error:(*id)arg3 ;
-(id)_realPathForURL:(id)arg0 allowNonExistentPathComponents:(BOOL)arg1 ;
-(id)_realPathWhatExistsInPath:(id)arg0 ;
-(id)aclTextFromURL:(id)arg0 error:(*id)arg1 ;
-(id)createTemporaryDirectoryInDirectoryURL:(id)arg0 error:(*id)arg1 ;
-(id)dataForExtendedAttributeNamed:(id)arg0 length:(NSUInteger)arg1 fromFD:(int)arg2 fdLocation:(id)arg3 error:(*id)arg4 ;
-(id)dataForExtendedAttributeNamed:(id)arg0 length:(NSUInteger)arg1 fromURL:(id)arg2 error:(*id)arg3 ;
-(id)debugDescriptionForItemAtURL:(id)arg0 ;
-(id)destinationOfSymbolicLinkAtURL:(id)arg0 error:(*id)arg1 ;
-(id)enumerateURLsForItemsInDirectoryAtURL:(id)arg0 ignoreSymlinks:(BOOL)arg1 withBlock:(id)arg2 ;
-(id)extendedAttributesFromURL:(id)arg0 error:(*id)arg1 ;
-(id)insecureCachedAppIdentifierIfAppClipForBundle:(id)arg0 error:(*id)arg1 ;
-(id)insecureCachedAppIdentifierIfValidatedByFreeProfileForBundle:(id)arg0 error:(*id)arg1 ;
-(id)installTypeFromExtendedAttributeOnBundle:(id)arg0 error:(*id)arg1 ;
-(id)modificationDateForURL:(id)arg0 error:(*id)arg1 ;
-(id)realPathForURL:(id)arg0 ifChildOfURL:(id)arg1 ;
-(id)traverseDirectoryAtURL:(id)arg0 withBlock:(id)arg1 ;
-(id)upToFirstFourBytesFromURL:(id)arg0 error:(*id)arg1 ;
-(id)urlsForItemsInDirectoryAtURL:(id)arg0 ignoringSymlinks:(BOOL)arg1 error:(*id)arg2 ;


@end


#endif