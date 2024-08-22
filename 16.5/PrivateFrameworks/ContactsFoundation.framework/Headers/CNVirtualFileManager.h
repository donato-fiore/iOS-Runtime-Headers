// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNVIRTUALFILEMANAGER_H
#define CNVIRTUALFILEMANAGER_H

@class NSMutableDictionary, NSMutableOrderedSet, NSString;
@protocol CNFileManager;

#import <Foundation/Foundation.h>


@interface CNVirtualFileManager : NSObject <CNFileManager>

 {
    NSMutableDictionary *_files;
    NSMutableOrderedSet *_directories;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isHiddenURL:(id)arg0 ;
+(id)URLByNormalizingDirectoryURL:(id)arg0 ;
+(id)allParentFoldersOfURL:(id)arg0 ;
-(BOOL)fileExistsAtURL:(id)arg0 ;
-(BOOL)fileExistsAtURL:(id)arg0 isDirectory:(*BOOL)arg1 ;
-(BOOL)getValue:(*id)arg0 forExtendendAttribute:(id)arg1 url:(id)arg2 error:(*id)arg3 ;
-(id)asyncDataWithContentsOfURL:(id)arg0 ;
-(id)asyncWriteData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 ;
-(id)contentsOfDirectoryAtURL:(id)arg0 includingPropertiesForKeys:(id)arg1 options:(NSUInteger)arg2 ;
-(id)createDirectoryAtURL:(id)arg0 withIntermediateDirectories:(BOOL)arg1 attributes:(id)arg2 ;
-(id)dataWithContentsOfURL:(id)arg0 ;
-(id)init;
-(id)observableWithContentsOfURL:(id)arg0 ;
-(id)removeExtendedAttribute:(id)arg0 atURL:(id)arg1 ;
-(id)removeItemAtURL:(id)arg0 ;
-(id)setValue:(id)arg0 forExtendedAttribute:(id)arg1 atURL:(id)arg2 ;
-(id)valueForExtendedAttribute:(id)arg0 atURL:(id)arg1 ;
-(id)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif