// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPHOTOLIBRARYFILEIDENTIFIER_H
#define PLPHOTOLIBRARYFILEIDENTIFIER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface PLPhotoLibraryFileIdentifier : NSObject

@property (readonly, nonatomic) unsigned short bundleScope; // ivar: _bundleScope
@property (readonly, nonatomic) BOOL isData; // ivar: _isData
@property (retain, nonatomic) NSString *originalFilename; // ivar: _originalFilename
@property (readonly, nonatomic) unsigned int recipeId; // ivar: _recipeId
@property (readonly, nonatomic) unsigned int resourceType; // ivar: _resourceType
@property (readonly, nonatomic) unsigned int resourceVersion; // ivar: _resourceVersion
@property (retain, nonatomic) NSString *uti; // ivar: _uti
@property (retain, nonatomic) NSString *uuid; // ivar: _uuid


+(BOOL)isValidFileIdentifierParametersForUUID:(id)arg0 utiString:(id)arg1 originalFilename:(id)arg2 ;
+(BOOL)isValidOriginalURL:(id)arg0 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg0 ;
+(id)fileIdentifierForValidOriginalURL:(id)arg0 originalsDirectoryName:(id)arg1 ;
+(id)uuidFromURL:(id)arg0 ;
-(id)description;
-(id)extension;
-(id)init;


@end


#endif