// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FSNODE_H
#define FSNODE_H

@class NSURL;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "FSNode.h"

@interface FSNode : NSObject <NSCopying, NSSecureCoding>

 {
    NSURL *_url;
    NSUInteger _cacheExpiration;
    BOOL _isDirectory;
    BOOL _hasReferringAliasNode;
    BOOL _canUseFileCache;
    BOOL _isInitialized;
}


@property (readonly, nonatomic) NSURL *URL;
@property (readonly, nonatomic, getter=isAliasFile) BOOL aliasFile;
@property (readonly, nonatomic, getter=isBusyDirectory) BOOL busyDirectory;
@property (readonly, nonatomic, getter=isDirectory) BOOL directory;
@property (readonly, nonatomic, getter=isExecutable) BOOL executable;
@property (readonly, nonatomic) BOOL hasHiddenExtension;
@property (readonly, nonatomic) BOOL hasPackageBit;
@property (readonly, nonatomic, getter=isHidden) BOOL hidden;
@property (readonly, nonatomic, getter=isMountTrigger) BOOL mountTrigger;
@property (readonly, nonatomic, getter=isOnDiskImage) BOOL onDiskImage;
@property (readonly, nonatomic, getter=isOnLocalVolume) BOOL onLocalVolume;
@property (readonly, nonatomic) FSNode *referringAliasNode;
@property (readonly, nonatomic, getter=isRegularFile) BOOL regularFile;
@property (readonly, nonatomic, getter=isResolvable) BOOL resolvable;
@property (readonly, nonatomic, getter=isSideFault) BOOL sideFault;
@property (readonly, nonatomic, getter=isSymbolicLink) BOOL symbolicLink;
@property (readonly, nonatomic, getter=isVolume) BOOL volume;


+(BOOL)canAccessURL:(id)arg0 fromSandboxWithAuditToken:(struct ? *)arg1 operation:(char *)arg2 ;
+(BOOL)canReadMetadataOfURL:(id)arg0 fromSandboxWithAuditToken:(struct ? *)arg1 ;
+(BOOL)canReadURL:(id)arg0 fromSandboxWithAuditToken:(struct ? *)arg1 ;
+(BOOL)canWriteURL:(id)arg0 fromSandboxWithAuditToken:(struct ? *)arg1 ;
+(BOOL)getFileSystemRepresentation:(char)arg0 forBookmarkData:(id)arg1 ;
+(BOOL)getVolumeIdentifier:(*NSUInteger)arg0 forBookmarkData:(id)arg1 error:(*id)arg2 ;
+(BOOL)isBookmarkDataFull:(id)arg0 ;
+(BOOL)supportsSecureCoding;
+(id)_resolvedNodeFromAliasFile:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
+(id)_resolvedURLFromAliasFile:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
+(id)nameForBookmarkData:(id)arg0 error:(*id)arg1 ;
+(id)pathForBookmarkData:(id)arg0 error:(*id)arg1 ;
+(id)rootVolumeNode;
+(id)systemDataVolumeNode;
+(unsigned char)compareBookmarkData:(id)arg0 toBookmarkData:(id)arg1 ;
-(BOOL)canReadFromSandboxWithAuditToken:(struct ? *)arg0 ;
-(BOOL)canReadMetadataFromSandboxWithAuditToken:(struct ? *)arg0 ;
-(BOOL)canWriteFromSandboxWithAuditToken:(struct ? *)arg0 ;
-(BOOL)checkResourceIsReachableAndReturnError:(*id)arg0 ;
-(BOOL)getContentModificationDate:(*CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)getCreationDate:(*CGFloat)arg0 error:(*id)arg1 ;
-(BOOL)getDeviceNumber:(*int)arg0 error:(*id)arg1 ;
-(BOOL)getFileIdentifier:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)getFileSystemRepresentation:(char)arg0 error:(*id)arg1 ;
-(BOOL)getFinderInfo:(*unk)arg0 error:(unsigned char)arg1 ;
-(BOOL)getHFSType:(*unsigned int)arg0 creator:(*unsigned int)arg1 error:(*id)arg2 ;
-(BOOL)getInodeNumber:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)getIsDirectory_NoIO:(*BOOL)arg0 ;
-(BOOL)getLength:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)getOwnerUID:(*unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)getResourceValue:(*id)arg0 forKey:(id)arg1 options:(unsigned char)arg2 error:(*id)arg3 ;
-(BOOL)getTemporaryResourceValue:(*id)arg0 forKey:(id)arg1 ;
-(BOOL)getVolumeIdentifier:(*NSUInteger)arg0 error:(*id)arg1 ;
-(BOOL)getWriterBundleIdentifier:(*id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)setExtendedAttribute:(id)arg0 name:(id)arg1 options:(int)arg2 error:(*id)arg3 ;
-(BOOL)setFinderInfo:(*unk)arg0 error:(unsigned char)arg1 ;
-(BOOL)setResourceValue:(id)arg0 forKey:(id)arg1 options:(unsigned char)arg2 error:(*id)arg3 ;
-(NSUInteger)hash;
-(id)bookmarkDataRelativeToNode:(id)arg0 error:(*id)arg1 ;
-(id)bookmarkDataWithOptions:(NSUInteger)arg0 relativeToNode:(id)arg1 error:(*id)arg2 ;
-(id)bundleIdentifierWithContext:(struct LSContext *)arg0 error:(*id)arg1 ;
-(id)bundleIdentifierWithError:(*id)arg0 ;
-(id)bundleInfoDictionaryWithError:(*id)arg0 ;
-(id)canonical:(BOOL)arg0 pathWithError:(*id)arg1 ;
-(id)canonicalPathWithError:(*id)arg0 ;
-(id)childNodeWithRelativePath:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)diskImageURLWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(id)extendedAttributeWithName:(id)arg0 options:(int)arg1 error:(*id)arg2 ;
-(id)extensionWithError:(*id)arg0 ;
-(id)initByResolvingBookmarkData:(id)arg0 options:(NSUInteger)arg1 relativeToNode:(id)arg2 bookmarkDataIsStale:(*BOOL)arg3 error:(*id)arg4 ;
-(id)initByResolvingBookmarkData:(id)arg0 relativeToNode:(id)arg1 bookmarkDataIsStale:(*BOOL)arg2 error:(*id)arg3 ;
-(id)initTemporaryNodeOnVolume:(id)arg0 flags:(unsigned int)arg1 fileDescriptor:(*int)arg2 error:(*id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithConfigurationString:(int)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithDirectory:(NSUInteger)arg0 inDomain:(NSUInteger)arg1 lastPathComponent:(id)arg2 createIntermediateDirectories:(BOOL)arg3 flags:(unsigned int)arg4 error:(*id)arg5 ;
-(id)initWithFileSystemRepresentation:(char *)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithPath:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)initWithURL:(id)arg0 flags:(unsigned int)arg1 error:(*id)arg2 ;
-(id)nameWithError:(*id)arg0 ;
-(id)pathWithError:(*id)arg0 ;
-(id)redactedDescription;
-(id)resolvedNodeWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(id)sideFaultResourceValuesReturningError:(*id)arg0 ;
-(id)temporaryDirectoryNodeWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(id)volumeNodeWithFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(struct __CFBundle *)copyCFBundleWithError:(*id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)prepareForReuse;
-(void)removeCachedResourceValueForKey:(id)arg0 ;
-(void)setTemporaryResourceValue:(id)arg0 forKey:(id)arg1 ;


@end


#endif