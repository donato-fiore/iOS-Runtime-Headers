// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BRCIMPORTOBJECT_H
#define BRCIMPORTOBJECT_H

@class NSURL, NSString, NSData;

#import <Foundation/Foundation.h>

#import "BRCGenerationID.h"
#import "BRCAppLibrary.h"
#import "BRCItemGlobalID.h"
#import "BRCAccountSession.h"

@interface BRCImportObject : NSObject {
    BRCGenerationID *_generationID;
    unsigned char _finderInfo;
    unsigned short _mode;
    timespec _birthtime;
    timespec _mtime;
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
}


@property (readonly, nonatomic) BRCAppLibrary *appLibrary; // ivar: _appLibrary
@property (readonly, nonatomic) NSInteger birthTime;
@property (readonly, nonatomic) int deviceID; // ivar: _deviceID
@property (readonly, nonatomic) NSUInteger fileID; // ivar: _fileID
@property (readonly, nonatomic) unsigned int fileType;
@property (readonly, nonatomic) NSURL *fileURL; // ivar: _fileURL
@property (readonly, nonatomic) unsigned int fsGenerationID; // ivar: _fsGenerationID
@property (readonly, nonatomic) BRCGenerationID *generationID;
@property (readonly, nonatomic) unsigned int hardlinkCount; // ivar: _nlink
@property (readonly, nonatomic) BOOL hasFinderTags;
@property (readonly, nonatomic) BOOL isBRAlias;
@property (readonly, nonatomic) BOOL isBundle;
@property (readonly, nonatomic) BOOL isBusy;
@property (readonly, nonatomic) BOOL isDocument;
@property (readonly, nonatomic) BOOL isDocumentsFolder; // ivar: _isDocumentsFolder
@property (readonly, nonatomic) BOOL isExcluded;
@property (readonly, nonatomic) BOOL isExecutable;
@property (readonly, nonatomic) BOOL isFault;
@property (readonly, nonatomic) BOOL isFile;
@property (readonly, nonatomic) BOOL isFinderAlias;
@property (readonly, nonatomic) BOOL isHiddenExtension;
@property (readonly, nonatomic) BOOL isHiddenFile;
@property (readonly, nonatomic) BOOL isPackageRoot;
@property (readonly, nonatomic) BOOL isSymLink;
@property (readonly, nonatomic) BOOL isUnixDir;
@property (readonly, nonatomic) BOOL isUserVisible; // ivar: _isUserVisible
@property (readonly, nonatomic) BOOL isWritable;
@property (readonly, nonatomic) unsigned char itemScope; // ivar: _itemScope
@property (readonly, nonatomic) NSString *logicalName; // ivar: _logicalName
@property (readonly, nonatomic) NSInteger modificationTime;
@property (readonly, nonatomic) BRCItemGlobalID *parentItemGlobalID; // ivar: _parentItemGlobalID
@property (readonly, nonatomic) NSData *quarantineInfo; // ivar: _quarantineInfo
@property (readonly, nonatomic) BRCAccountSession *session; // ivar: _session
@property (readonly, nonatomic) NSUInteger sharingOptions; // ivar: _sharingOptions
@property (readonly, nonatomic) NSInteger size; // ivar: _size
@property (readonly, nonatomic) NSString *symlinkContent; // ivar: _symlinkContent
@property (readonly, nonatomic) NSData *xattrs; // ivar: _xattrs


-(id)initAsNewDirectoryWithLogicalName:(id)arg0 parentItem:(id)arg1 error:(*id)arg2 ;
-(id)initAsSymlinkWithTarget:(id)arg0 parentItem:(id)arg1 logicalName:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 existingItem:(id)arg1 quarantineInfo:(id)arg2 error:(*id)arg3 ;
-(id)initWithURL:(id)arg0 logicalName:(id)arg1 quarantineInfo:(id)arg2 parentItem:(id)arg3 error:(*id)arg4 ;
-(id)initWithURL:(id)arg0 packageRoot:(id)arg1 error:(*id)arg2 ;
-(int)_resolveAgainstFileDescriptor:(int)arg0 ;
-(void)_resolveParentBasedPropertiesWithParent:(id)arg0 logicalName:(id)arg1 ;


@end


#endif