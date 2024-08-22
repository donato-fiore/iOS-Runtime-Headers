// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PFFILE_H
#define PFFILE_H

@class NSString, NSDate, NSURL;
@protocol PFFile, NSCopying;

#import <Foundation/Foundation.h>


@interface PFFile : NSObject <PFFile, NSCopying>

 {
    NSString *_uti;
    *stat _fileInfo;
    NSString *_cachedPath;
}


@property (readonly) NSString *UTI;
@property (readonly) NSDate *fileCreationDate;
@property (readonly) NSString *fileExtension;
@property (readonly) NSDate *fileModificationDate;
@property (readonly) NSString *fileName;
@property (readonly) NSUInteger fileSize;
@property (readonly) BOOL isDirectory;
@property (readonly) NSString *path;
@property (readonly, nonatomic) NSUInteger pathHash; // ivar: _pathHash
@property (readonly) NSURL *url; // ivar: _url


+(BOOL)createEmptyFileAtURL:(id)arg0 ;
+(BOOL)directoryExists:(id)arg0 ;
+(BOOL)fileExists:(id)arg0 ;
+(BOOL)pathExists:(id)arg0 ;
+(NSInteger)sizeOf:(id)arg0 includeSubFolders:(BOOL)arg1 ;
+(id)assetType:(id)arg0 ;
+(id)createEmptyTempFileInBaseDirectory:(id)arg0 withSubDirectoryNamed:(id)arg1 filenamePrefix:(id)arg2 pathExtension:(id)arg3 error:(*id)arg4 ;
+(id)createEmptyTempFileInDirectoryNamed:(id)arg0 filenamePrefix:(id)arg1 pathExtension:(id)arg2 error:(*id)arg3 ;
+(id)fileAttributesAtPath:(id)arg0 traverseLink:(BOOL)arg1 ;
+(id)fileAttributesAtPath:(id)arg0 traverseLink:(BOOL)arg1 fixCreationDate:(BOOL)arg2 ;
+(id)fileWithPath:(id)arg0 ;
+(id)fileWithURL:(id)arg0 ;
+(id)pathByTidyingExtensionInPath:(id)arg0 withExtension:(id)arg1 ;
+(id)realPathFromFileAlias:(id)arg0 ;
+(id)resourceIdentifierForURL:(id)arg0 ;
+(id)uniqueFileSystemNameForName:(id)arg0 inDirectory:(id)arg1 ;
+(int)disableOSCachingForURL:(id)arg0 ;
+(void)reenableOSCachingForFileDescriptor:(int)arg0 ;
-(BOOL)exists;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFile:(id)arg0 ;
-(BOOL)isFile;
-(BOOL)isFileAlias;
-(BOOL)isInTrash;
-(BOOL)isLockedInFinder;
-(BOOL)isSymLink;
-(BOOL)isXMPType;
-(BOOL)tryLock;
-(NSInteger)folderSize_recursive:(BOOL)arg0 ;
-(NSInteger)size;
-(NSUInteger)hash;
-(char *)fileSystemRepresentation;
-(id)assetType;
-(id)attributes;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)creationDate;
-(id)directoryEnumerator;
-(id)extension;
-(id)fileByResolvingFileAlias;
-(id)fileComponent;
-(id)folderPath;
-(id)initWithPath:(id)arg0 ;
-(id)initWithURL:(id)arg0 ;
-(id)labelNumber;
-(id)lockInFinder;
-(id)modificationDate;
-(id)name;
-(id)newFileByAppendingPathComponent:(id)arg0 ;
-(id)newFileIOStream;
-(id)newFileIStream;
-(id)unlockInFinder;
-(id)volume;
-(int)fileType;
-(struct stat *)cachedStat;
-(unsigned short)posixPermissions;
-(void)dealloc;
-(void)lock;
-(void)logFileAccess;
-(void)setLabelNumber:(id)arg0 ;
-(void)uncacheStat;
-(void)unlock;


@end


#endif