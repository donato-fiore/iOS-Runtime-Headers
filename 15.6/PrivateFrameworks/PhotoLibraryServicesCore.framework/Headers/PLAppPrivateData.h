// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAPPPRIVATEDATA_H
#define PLAPPPRIVATEDATA_H

@class NSMutableDictionary, NSURL;

#import <Foundation/Foundation.h>

#import "PLPhotoLibraryPathManager.h"

@interface PLAppPrivateData : NSObject

@property (retain) NSMutableDictionary *backingDictionary; // ivar: _backingDictionary
@property (retain) NSURL *libraryURL; // ivar: _libraryURL
@property (retain) PLPhotoLibraryPathManager *pathManager; // ivar: _pathManager


+(BOOL)accessInstanceVariablesDirectly;
+(id)appPrivateDataForLibraryURL:(id)arg0 ;
-(BOOL)_saveToFilesystemWithError:(*id)arg0 ;
-(BOOL)setValue:(id)arg0 forKey:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValue:(id)arg0 forKeyPath:(id)arg1 error:(*id)arg2 ;
-(BOOL)setValuesForKeysWithDictionary:(id)arg0 error:(*id)arg1 ;
-(id)_appPrivateDataFolderURL;
-(id)_dictionaryStorageURL;
-(id)allKeys;
-(id)debugDescription;
-(id)dictionaryWithValuesForKeys:(id)arg0 ;
-(id)initWithLibraryURL:(id)arg0 ;
-(id)valueForKey:(id)arg0 ;
-(id)valueForKeyPath:(id)arg0 ;
-(void)_readFromFilesystem;
-(void)_recursiveCreateSubDictionariesIfMissing:(id)arg0 index:(NSUInteger)arg1 parentDictionary:(id)arg2 ;
-(void)setValue:(id)arg0 forKey:(id)arg1 ;
-(void)setValue:(id)arg0 forKeyPath:(id)arg1 ;
-(void)setValuesForKeysWithDictionary:(id)arg0 ;


@end


#endif