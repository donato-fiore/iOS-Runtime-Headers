// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTIMAGESTORE_H
#define AVTIMAGESTORE_H

@class NSString, NSFileManager, NSURL;
@protocol AVTImageCache, AVTImageEncoder, AVTUILogger, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AVTImageStore : NSObject <AVTImageCache>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSFileManager *fileManager; // ivar: _fileManager
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<AVTImageEncoder> *imageEncoder; // ivar: _imageEncoder
@property (readonly, copy, nonatomic) NSURL *location; // ivar: _location
@property (readonly, nonatomic) NSObject<AVTUILogger> *logger; // ivar: _logger
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *stateLock; // ivar: _stateLock
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL validateImages; // ivar: _validateImages


+(id)resourceURLForItem:(id)arg0 scope:(id)arg1 baseURL:(id)arg2 encoder:(id)arg3 ;
+(void)clearContentAtLocation:(id)arg0 logger:(id)arg1 ;
-(BOOL)applyFileProtectionForResourceAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)copyImagesForPersistentIdentifierPrefix:(id)arg0 toPersistentIdentifierPrefix:(id)arg1 error:(*id)arg2 ;
-(BOOL)createDirectoryIfNeeded:(*id)arg0 ;
-(BOOL)deleteImagesForItemsWithPersistentIdentifierPrefix:(id)arg0 error:(*id)arg1 ;
-(BOOL)resourceExistsInCacheForItem:(id)arg0 scope:(id)arg1 ;
-(BOOL)saveImage:(id)arg0 forItem:(id)arg1 scope:(id)arg2 error:(*id)arg3 ;
-(BOOL)saveImage:(id)arg0 withImageData:(id)arg1 forItem:(id)arg2 scope:(id)arg3 error:(*id)arg4 ;
-(id)_imageForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(id)imageForItem:(id)arg0 scope:(id)arg1 error:(*id)arg2 ;
-(id)initWithEnvironment:(id)arg0 validateImages:(BOOL)arg1 location:(id)arg2 ;
-(id)initWithEnvironment:(id)arg0 validateImages:(BOOL)arg1 location:(id)arg2 encoder:(id)arg3 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 ;
-(id)resourceForItem:(id)arg0 scope:(id)arg1 cacheMissHandler:(id)arg2 ;
-(id)resourceURLForItem:(id)arg0 scope:(id)arg1 ;
-(void)performStateWork:(id)arg0 ;


@end


#endif