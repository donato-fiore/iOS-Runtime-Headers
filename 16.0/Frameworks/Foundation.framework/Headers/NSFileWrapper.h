// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NSFILEWRAPPER_H
#define NSFILEWRAPPER_H

@class NSDictionary, NSURL, NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "NSString.h"
#import "NSHashTable.h"
#import "NSError.h"

@interface NSFileWrapper : NSObject <NSSecureCoding>

 {
    NSDictionary *_fileAttributes;
    NSString *_preferredFileName;
    NSString *_fileName;
    id *_contents;
    id *_icon;
    NSURL *_contentsURL;
    NSHashTable *_parents;
    NSError *_contentsLazyReadingError;
    NSDictionary *_cachedDirectoryChildrenAsDictionary;
    BOOL _contentsMustBeReadWithoutMapping;
    BOOL _attributesMustBeWrittenSoNoHardLinking;
}


@property (readonly, getter=isDirectory) BOOL directory;
@property (copy) NSDictionary *fileAttributes;
@property (readonly, copy) NSDictionary *fileWrappers;
@property (copy) NSString *filename;
@property (copy) NSString *preferredFilename;
@property (readonly, getter=isRegularFile) BOOL regularFile;
@property (readonly, copy) NSData *regularFileContents;
@property (readonly, copy) NSData *serializedRepresentation;
@property (readonly, getter=isSymbolicLink) BOOL symbolicLink;
@property (readonly, copy) NSURL *symbolicLinkDestinationURL;


+(BOOL)_canSafelyMapFilesAtPath:(id)arg0 ;
+(BOOL)_finishWritingToURL:(id)arg0 byMovingItemAtURL:(id)arg1 addingAttributes:(id)arg2 error:(*id)arg3 ;
+(BOOL)_finishWritingToURL:(id)arg0 byTakingContentsFromItemAtURL:(id)arg1 addingAttributes:(id)arg2 usingTemporaryDirectoryAtURL:(id)arg3 backupFileName:(id)arg4 error:(*id)arg5 ;
+(BOOL)_forPath:(id)arg0 getItemKind:(*id)arg1 modificationDate:(*id)arg2 ;
+(BOOL)supportsSecureCoding;
+(id)_newContentsAtURL:(id)arg0 path:(id)arg1 itemKind:(id)arg2 oldChildrenByUniqueFileName:(id)arg3 options:(NSUInteger)arg4 error:(*id)arg5 ;
+(id)_pathForURL:(id)arg0 reading:(BOOL)arg1 error:(*id)arg2 ;
+(id)_temporaryDirectoryURLForWritingToURL:(id)arg0 error:(*id)arg1 ;
+(void)_removeTemporaryDirectoryAtURL:(id)arg0 ;
+(void)_writeAttributes:(id)arg0 toURL:(id)arg1 ;
+(void)initialize;
-(BOOL)_forWritingToURL:(id)arg0 returnContentsLazyReadingError:(*id)arg1 ;
-(BOOL)_matchesItemKind:(id)arg0 modificationDate:(id)arg1 ;
-(BOOL)_readContentsFromURL:(id)arg0 path:(id)arg1 itemKind:(id)arg2 options:(NSUInteger)arg3 error:(*id)arg4 ;
-(BOOL)_writeContentsToURL:(id)arg0 path:(id)arg1 originalContentsURL:(id)arg2 tryHardLinking:(BOOL)arg3 didHardLinking:(*BOOL)arg4 error:(*id)arg5 ;
-(BOOL)matchesContentsOfURL:(id)arg0 ;
-(BOOL)readFromURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(BOOL)writeToURL:(id)arg0 options:(NSUInteger)arg1 originalContentsURL:(id)arg2 error:(*id)arg3 ;
-(id)_addChild:(id)arg0 forUniqueFileName:(id)arg1 ;
-(id)_attributesToWrite;
-(id)_fullDescription:(BOOL)arg0 ;
-(id)_initWithImpl:(id)arg0 preferredFileName:(id)arg1 uniqueFileName:(id)arg2 docInfo:(id)arg3 iconData:(id)arg4 ;
-(id)_newImpl;
-(id)_uniqueFileNameOfChild:(id)arg0 ;
-(id)addFileWrapper:(id)arg0 ;
-(id)addRegularFileWithContents:(id)arg0 preferredFilename:(id)arg1 ;
-(id)init;
-(id)initDirectoryWithFileWrappers:(id)arg0 ;
-(id)initRegularFileWithContents:(id)arg0 ;
-(id)initSymbolicLinkWithDestinationURL:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSerializedRepresentation:(id)arg0 ;
-(id)initWithURL:(id)arg0 options:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)keyForFileWrapper:(id)arg0 ;
-(void)_addParent:(id)arg0 ;
-(void)_initDirectoryContents;
-(void)_observePreferredFileNameOfChild:(id)arg0 ;
-(void)_removeChild:(id)arg0 forUniqueFileName:(id)arg1 ;
-(void)_removeParent:(id)arg0 ;
-(void)_resetFileModificationDate;
-(void)_updateDescendantFileNames;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;
-(void)removeFileWrapper:(id)arg0 ;


@end


#endif