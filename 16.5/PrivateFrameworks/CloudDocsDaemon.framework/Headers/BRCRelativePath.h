// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BRCRELATIVEPATH_H
#define BRCRELATIVEPATH_H

@class NSSet, NSString, BRFileObjectID, NSNumber, NSURL, NSData;

#import <Foundation/Foundation.h>

#import "BRCRelativePath.h"
#import "BRCBookmark.h"
#import "BRCGenerationID.h"
#import "BRCAppLibrary.h"
#import "BRCAccountSession.h"

@interface BRCRelativePath : NSObject {
    NSSet *_roots;
    NSString *_absolutePath;
    NSString *_relativePath;
    BRCRelativePath *_basePath;
    BRCBookmark *_bookmark;
    NSString *_symlinkContent;
    BRCGenerationID *_generationID;
    int _deviceID;
    unsigned char _finderInfo;
    NSUInteger _fileID;
    unsigned short _mode;
    unsigned int _nlink;
    timespec _birthtime;
    timespec _mtime;
    NSInteger _size;
    NSUInteger _parentFileID;
    unsigned int _documentID;
    unsigned int _fsGenerationID;
    unsigned int _flags;
    BOOL _isExcluded;
    BOOL _isInPackage;
    BOOL _isBundle;
    BOOL _isPackageRoot;
    BOOL _readFault;
    BOOL _hasFinderTags;
    BOOL _isBusy;
    BOOL _hasFinderInfoAliasBit;
    BOOL _isBRAlias;
    BOOL _qtnResolved;
    BOOL _xattrsResolved;
    BOOL _sharedBookmarkResolved;
    BOOL _openedProtected;
    BOOL _unresolvableDueToProtection;
    BOOL _itemSyncPausedByBundleIDResolved;
    BOOL _itemSyncPausedExpireTSResolved;
    int _fd;
    uint8_t _openRefCount;
    brc_mutex _mutex;
}


@property (readonly, nonatomic) NSString *absolutePath;
@property (retain, nonatomic) BRCAppLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic) NSInteger birthTime;
@property (readonly, nonatomic) BRCBookmark *bookmark;
@property (readonly, nonatomic) int deviceID;
@property (readonly, nonatomic) unsigned int documentID;
@property (readonly, nonatomic) BOOL exists;
@property (readonly, nonatomic) NSString *faultDisplayName;
@property (readonly, nonatomic) NSUInteger fileID;
@property (readonly, nonatomic) BRFileObjectID *fileObjectID;
@property (readonly, nonatomic) unsigned int fileType;
@property (readonly, nonatomic) NSString *filename;
@property (readonly, nonatomic) unsigned int fsGenerationID;
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) unsigned int hardlinkCount;
@property (readonly, nonatomic) BOOL hasFinderTags;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isBundle;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isExcluded;
@property (readonly, nonatomic) BOOL isExecutable;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isFinderAlias;
@property (readonly, nonatomic) BOOL isHiddenExtension;
@property (readonly, nonatomic) BOOL isHiddenFile;
@property (readonly, nonatomic) BOOL isInPackage;
@property (readonly, nonatomic) BOOL isPackageRoot;
@property (readonly, nonatomic) BOOL isRoot;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isUnixDir;
@property (readonly, nonatomic) BOOL isUnresolvableDueToProtection;
@property (readonly, nonatomic) BOOL isWritable;
@property (nonatomic) unsigned char itemScope; // ivar: _itemScope
@property (readonly, nonatomic) NSString *itemSyncPausedByBundleID; // ivar: _itemSyncPausedByBundleID
@property (readonly, nonatomic) NSNumber *itemSyncPausedExpireTS; // ivar: _itemSyncPausedExpireTS
@property (readonly, nonatomic) NSString *logicalName;
@property (readonly, nonatomic) NSInteger modificationTime;
@property (readonly, nonatomic) NSUInteger parentFileID;
@property (readonly, nonatomic) BRFileObjectID *parentFileObjectID;
@property (readonly) NSUInteger parentHash;
@property (readonly, nonatomic) NSString *pathRelativeToPackageRoot;
@property (readonly, nonatomic) NSString *pathRelativeToRoot;
@property (readonly, nonatomic) NSURL *physicalURL;
@property (readonly, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (readonly, nonatomic) BRCRelativePath *root;
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) NSString *sharedItemBookmark; // ivar: _sharedItemBookmark
@property (readonly, nonatomic) NSInteger size;
@property (readonly, nonatomic) NSString *symlinkContent;
@property (nonatomic) unsigned short type; // ivar: _type
@property (readonly, nonatomic) NSData *xattrs; // ivar: _xattrs


+(int)locateByFileID:(NSUInteger)arg0 session:(id)arg1 ;
-(BOOL)_fixupRelativePath;
-(BOOL)_resolveAndKeepOpenMustExist:(BOOL)arg0 allowResolveInPkg:(BOOL)arg1 error:(*int)arg2 ;
-(BOOL)_resolveRootWhenExists:(BOOL)arg0 ;
-(BOOL)_shouldKeepBasePathOpen;
-(BOOL)_shouldKeepBasePathOpenWithoutOpenedFD;
-(BOOL)flock:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRelativePath:(id)arg0 ;
-(BOOL)isResolved;
// -(BOOL)performOnOpenFileDescriptor:(id)arg0 error:(unk)arg1  ;
// -(BOOL)performOnOpenParentFileDescriptor:(id)arg0 error:(unk)arg1  ;
-(BOOL)resolveAndKeepOpenMustExist:(BOOL)arg0 allowResolveInPkg:(BOOL)arg1 error:(*int)arg2 ;
-(BOOL)resolveAndKeepOpenMustExist:(BOOL)arg0 error:(*int)arg1 ;
-(BOOL)resolveMustExist:(BOOL)arg0 error:(*int)arg1 ;
-(id)_initWithPath:(id)arg0 relativeToRoot:(id)arg1 ;
-(id)basePath;
-(id)description;
-(id)init;
-(id)initWithAbsolutePath:(id)arg0 session:(id)arg1 ;
-(id)initWithFileID:(NSUInteger)arg0 root:(id)arg1 session:(id)arg2 ;
-(id)initWithFileID:(NSUInteger)arg0 session:(id)arg1 ;
-(id)initWithPath:(id)arg0 appLibrary:(id)arg1 ;
-(id)initWithRootPath:(id)arg0 session:(id)arg1 ;
-(id)logicalURL;
-(id)logicalURLWithLogicalName:(id)arg0 ;
-(id)pathOfPackageRoot;
-(id)pathWithChildAtPath:(id)arg0 ;
-(id)refreshFromPathMustExist:(BOOL)arg0 ;
-(id)relativePath;
-(int)_resolveBasePath:(BOOL)arg0 ;
-(int)_resolvePathTypeAndContainer;
-(int)_resolveSymlinkRelativeTo:(int)arg0 path:(id)arg1 ;
-(int)_resolveWhenDoesntExist;
-(int)_resolveWhenExists;
-(void)_close;
-(void)close;
-(void)dealloc;
-(void)refreshPathTypeAndContainer;


@end


#endif