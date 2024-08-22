// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NSFILEMANAGER_H
#define NSFILEMANAGER_H

@class NSURL;
@protocol NSFileManagerDelegate, NSObject><NSCopying><NSCoding;

#import <Foundation/Foundation.h>

#import "NSValue.h"
#import "NSString.h"

@interface NSFileManager : NSObject {
    id *_delegate;
    NSValue *_weakDelegateValue;
}


@property (readonly, copy) NSString *currentDirectoryPath;
@property NSObject<NSFileManagerDelegate> *delegate;
@property (readonly, copy) NSURL *homeDirectoryForCurrentUser;
@property (readonly, copy) NSURL *temporaryDirectory;
@property (readonly, copy) NSObject<NSObject><NSCopying><NSCoding> *ubiquityIdentityToken;


+(id)defaultManager;
-(BOOL)_processCanAccessUbiquityIdentityToken;
-(BOOL)_processHasUbiquityContainerEntitlement;
-(BOOL)_processUsesCloudServices;
-(BOOL)_web_changeFileAttributes_nowarn:(id)arg0 atPath:(id)arg1 ;
-(BOOL)_web_changeFinderAttributes:(id)arg0 forFileAtPath:(id)arg1 ;
-(BOOL)_web_createDirectoryAtPathWithIntermediateDirectories:(id)arg0 attributes:(id)arg1 ;
-(BOOL)_web_createFileAtPath:(id)arg0 contents:(id)arg1 attributes:(id)arg2 ;
-(BOOL)_web_createFileAtPathWithIntermediateDirectories:(id)arg0 contents:(id)arg1 attributes:(id)arg2 directoryAttributes:(id)arg3 ;
-(BOOL)_web_createIntermediateDirectoriesForPath_nowarn:(id)arg0 attributes:(id)arg1 ;
-(BOOL)_web_fileExistsAtPath_nowarn:(id)arg0 isDirectory:(*BOOL)arg1 traverseLink:(BOOL)arg2 ;
-(BOOL)_web_removeFileOnlyAtPath:(id)arg0 ;
-(BOOL)changeCurrentDirectoryPath:(id)arg0 ;
-(BOOL)changeFileAttributes:(id)arg0 atPath:(id)arg1 ;
-(BOOL)contentsEqualAtPath:(id)arg0 andPath:(id)arg1 ;
-(BOOL)copyItemAtPath:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemAtPath:(id)arg0 toPath:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)createDirectoryAtPath:(id)arg0 attributes:(id)arg1 ;
-(BOOL)createDirectoryAtPath:(id)arg0 withIntermediateDirectories:(BOOL)arg1 attributes:(id)arg2 error:(*id)arg3 ;
-(BOOL)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 attributes:(id)arg2 error:(*id)arg3 ;
-(BOOL)createFileAtPath:(id)arg0 contents:(id)arg1 attributes:(id)arg2 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg0 pathContent:(id)arg1 ;
-(BOOL)createSymbolicLinkAtPath:(id)arg0 withDestinationPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)createSymbolicLinkAtURL:(id)arg0 withDestinationURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)directoryCanBeCreatedAtPath:(id)arg0 ;
-(BOOL)evictUbiquitousItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)fileExistsAtPath:(id)arg0 ;
-(BOOL)fileExistsAtPath:(id)arg0 isDirectory:(*BOOL)arg1 ;
-(BOOL)filesystemItemCopyOperation:(id)arg0 shouldCopyItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)filesystemItemCopyOperation:(id)arg0 shouldProceedAfterError:(id)arg1 copyingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemLinkOperation:(id)arg0 shouldLinkItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)filesystemItemLinkOperation:(id)arg0 shouldProceedAfterError:(id)arg1 linkingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)filesystemItemMoveOperation:(id)arg0 shouldMoveItemAtPath:(id)arg1 toPath:(id)arg2 ;
-(BOOL)filesystemItemMoveOperation:(id)arg0 shouldProceedAfterError:(id)arg1 movingItemAtPath:(id)arg2 toPath:(id)arg3 ;
-(BOOL)getFileSystemRepresentation:(char *)arg0 maxLength:(NSUInteger)arg1 withPath:(id)arg2 ;
-(BOOL)getRelationship:(*NSInteger)arg0 ofDirectory:(NSUInteger)arg1 inDomain:(NSUInteger)arg2 toItemAtURL:(id)arg3 error:(*id)arg4 ;
-(BOOL)getRelationship:(*NSInteger)arg0 ofDirectoryAtURL:(id)arg1 toItemAtURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)isDeletableFileAtPath:(id)arg0 ;
-(BOOL)isExecutableFileAtPath:(id)arg0 ;
-(BOOL)isReadableFileAtPath:(id)arg0 ;
-(BOOL)isUbiquitousItemAtURL:(id)arg0 ;
-(BOOL)isWritableFileAtPath:(id)arg0 ;
-(BOOL)linkItemAtPath:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)linkItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemAtPath:(id)arg0 toPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(BOOL)removeExtendedAttributeForKey:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeFileAtPath:(id)arg0 handler:(id)arg1 ;
-(BOOL)removeItemAtPath:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)replaceItemAtURL:(id)arg0 withItemAtURL:(id)arg1 backupItemName:(id)arg2 options:(NSUInteger)arg3 resultingItemURL:(*id)arg4 error:(*id)arg5 ;
-(BOOL)setAttributes:(id)arg0 ofItemAtPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)setExtendedAttribute:(id)arg0 forKey:(id)arg1 atPath:(id)arg2 error:(*id)arg3 ;
-(BOOL)setUbiquitous:(BOOL)arg0 itemAtURL:(id)arg1 destinationURL:(id)arg2 error:(*id)arg3 ;
-(BOOL)startDownloadingUbiquitousItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)trashItemAtURL:(id)arg0 resultingItemURL:(*id)arg1 error:(*id)arg2 ;
-(char *)fileSystemRepresentationWithPath:(id)arg0 ;
-(id)URLForDirectory:(NSUInteger)arg0 inDomain:(NSUInteger)arg1 appropriateForURL:(id)arg2 create:(BOOL)arg3 error:(*id)arg4 ;
-(id)URLForPublishingUbiquitousItemAtURL:(id)arg0 expirationDate:(*id)arg1 error:(*id)arg2 ;
-(id)URLForUbiquityContainerIdentifier:(id)arg0 ;
-(id)URLsForDirectory:(NSUInteger)arg0 inDomains:(NSUInteger)arg1 ;
-(id)_URLForReplacingItemAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_URLForTrashingItemAtURL:(id)arg0 create:(BOOL)arg1 error:(*id)arg2 ;
-(id)_attributesOfItemAtPath:(id)arg0 filterResourceFork:(BOOL)arg1 error:(*id)arg2 ;
-(id)_attributesOfItemAtURL:(id)arg0 filterResourceFork:(BOOL)arg1 error:(*id)arg2 ;
-(id)_displayPathForPath:(id)arg0 ;
-(id)_safeDelegate;
-(id)_web_carbonPathForPath_nowarn:(id)arg0 ;
-(id)_web_pathWithUniqueFilenameForPath:(id)arg0 ;
-(id)_web_startupVolumeName_nowarn;
-(id)_web_visibleItemsInDirectoryAtPath:(id)arg0 ;
-(id)attributesOfFileSystemForPath:(id)arg0 error:(*id)arg1 ;
-(id)attributesOfItemAtPath:(id)arg0 error:(*id)arg1 ;
-(id)componentsToDisplayForPath:(id)arg0 ;
-(id)containerURLForSecurityApplicationGroupIdentifier:(id)arg0 ;
-(id)contentsAtPath:(id)arg0 ;
-(id)contentsOfDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(id)contentsOfDirectoryAtURL:(id)arg0 includingPropertiesForKeys:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)destinationOfSymbolicLinkAtPath:(id)arg0 error:(*id)arg1 ;
-(id)directoryContentsAtPath:(id)arg0 ;
-(id)directoryContentsAtPath:(id)arg0 matchingExtension:(id)arg1 options:(NSInteger)arg2 keepExtension:(BOOL)arg3 ;
-(id)directoryContentsAtPath:(id)arg0 matchingExtension:(id)arg1 options:(NSInteger)arg2 keepExtension:(BOOL)arg3 error:(*id)arg4 ;
-(id)displayNameAtPath:(id)arg0 ;
-(id)enumeratorAtPath:(id)arg0 ;
-(id)enumeratorAtURL:(id)arg0 includingPropertiesForKeys:(id)arg1 options:(NSUInteger)arg2 errorHandler:(id)arg3 ;
-(id)extendedAttributeForKey:(id)arg0 atPath:(id)arg1 error:(*id)arg2 ;
-(id)extendedAttributesAtPath:(id)arg0 error:(*id)arg1 ;
-(id)fileAttributesAtPath:(id)arg0 traverseLink:(BOOL)arg1 ;
-(id)fileSystemAttributesAtPath:(id)arg0 ;
-(id)mountedVolumeURLsIncludingResourceValuesForKeys:(id)arg0 options:(NSUInteger)arg1 ;
-(id)pathContentOfSymbolicLinkAtPath:(id)arg0 ;
-(id)stringWithFileSystemRepresentation:(char *)arg0 length:(NSUInteger)arg1 ;
-(id)subpathsAtPath:(id)arg0 ;
-(id)subpathsOfDirectoryAtPath:(id)arg0 error:(*id)arg1 ;
-(void)_performRemoveFileAtPath:(id)arg0 ;
-(void)_web_backgroundRemoveFileAtPath:(id)arg0 ;
-(void)_web_backgroundRemoveLeftoverFiles:(id)arg0 ;
-(void)_web_noteFileChangedAtPath_nowarn:(id)arg0 ;
-(void)dealloc;
-(void)getFileProviderMessageInterfacesForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)getFileProviderServicesForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;
-(void)synchronouslyGetFileProviderServiceWithName:(id)arg0 forItemAtURL:(id)arg1 completionHandler:(id)arg2 ;
-(void)synchronouslyGetFileProviderServicesForItemAtURL:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif