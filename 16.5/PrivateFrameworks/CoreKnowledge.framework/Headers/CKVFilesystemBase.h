// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKVFILESYSTEMBASE_H
#define CKVFILESYSTEMBASE_H

@class NSURL;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface CKVFilesystemBase : NSObject <NSCopying>



@property (readonly, nonatomic) NSURL *rootDirectory; // ivar: _rootDirectory


+(id)baseURLWithTargetDirectoryPath:(id)arg0 relativeToDirectoryPath:(id)arg1 ;
+(id)defaultBase;
-(BOOL)_fileExistsAtURL:(id)arg0 ;
-(BOOL)fileExistsWithName:(id)arg0 inDirectory:(id)arg1 ;
-(BOOL)isChildOfRootDirectory:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFileManager:(id)arg0 ;
-(BOOL)removeAllContents;
-(BOOL)removeItemAtURL:(id)arg0 ;
-(BOOL)writeDictionary:(id)arg0 toPlistFileWithName:(id)arg1 inDirectory:(id)arg2 ;
-(BOOL)writeObject:(id)arg0 toFileWithName:(id)arg1 inDirectory:(id)arg2 ;
-(NSUInteger)hash;
-(id)_resolveFileURLFromName:(id)arg0 directory:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getOrCreateDirectoryWithRelativePath:(id)arg0 ;
-(id)init;
-(id)initWithTargetDirectoryPath:(id)arg0 relativeToDirectoryPath:(id)arg1 ;
-(id)readDictionaryFromPlistFileWithName:(id)arg0 inDirectory:(id)arg1 ;
-(id)readFileWithName:(id)arg0 objectClass:(Class)arg1 inDirectory:(id)arg2 ;


@end


#endif