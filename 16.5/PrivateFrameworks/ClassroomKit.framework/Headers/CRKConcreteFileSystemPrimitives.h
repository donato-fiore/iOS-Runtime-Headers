// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETEFILESYSTEMPRIMITIVES_H
#define CRKCONCRETEFILESYSTEMPRIMITIVES_H

@class NSOperationQueue, NSFileManager, NSURL;
@protocol CRKFileSystemPrimitives;

#import <Foundation/Foundation.h>


@interface CRKConcreteFileSystemPrimitives : NSObject <CRKFileSystemPrimitives>



@property (readonly, nonatomic) NSOperationQueue *accessQueue; // ivar: _accessQueue
@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly, nonatomic) NSURL *temporaryDirectoryURL;


+(BOOL)isNoSuchFileError:(id)arg0 ;
-(BOOL)copyItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)fileExistsAtURL:(id)arg0 ;
-(BOOL)makeDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)moveItemAtURL:(id)arg0 toURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)setResources:(id)arg0 onURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)startAccessingBookmarkURL:(id)arg0 ;
-(BOOL)writeData:(id)arg0 toURL:(id)arg1 options:(NSUInteger)arg2 error:(*id)arg3 ;
-(id)URLFromBookmarkData:(id)arg0 error:(*id)arg1 ;
-(id)URLsForResourcesWithExtension:(id)arg0 inBundle:(id)arg1 ;
-(id)bookmarkDataForURL:(id)arg0 error:(*id)arg1 ;
-(id)contentsOfDirectoryAtURL:(id)arg0 error:(*id)arg1 ;
-(id)dataWithContentsOfURL:(id)arg0 error:(*id)arg1 ;
-(id)dispatchSourceForFileDescriptor:(id)arg0 options:(NSUInteger)arg1 ;
-(id)emptyDirectoryNode;
-(id)init;
-(id)nodeForURL:(id)arg0 error:(*id)arg1 ;
-(id)openURL:(id)arg0 options:(int)arg1 error:(*id)arg2 ;
-(id)promisedResourceValuesForKeys:(id)arg0 fromURL:(id)arg1 error:(*id)arg2 ;
-(id)resourceValuesForKeys:(id)arg0 fromURL:(id)arg1 error:(*id)arg2 ;
-(id)resourcesDirectoryURLForBundle:(id)arg0 ;
-(void)coordinateCopyWithActionPairs:(id)arg0 completion:(id)arg1 ;
-(void)coordinateMoveWithActionPairs:(id)arg0 completion:(id)arg1 ;
-(void)removeCoordinatedItemsAtURLs:(id)arg0 completion:(id)arg1 ;
-(void)stopAccessingBookmarkURL:(id)arg0 ;


@end


#endif