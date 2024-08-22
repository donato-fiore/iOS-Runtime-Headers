// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLEXTERNALTHUMBNAILCACHE_H
#define QLEXTERNALTHUMBNAILCACHE_H

@class NSURL;
@protocol QLThumbnailCache;

#import <Foundation/Foundation.h>

#import "QLExternalThumbnailCacheDatabase.h"

@interface QLExternalThumbnailCache : NSObject <QLThumbnailCache>



@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (retain, nonatomic) QLExternalThumbnailCacheDatabase *db; // ivar: _db
@property (readonly, nonatomic) NSURL *directoryURL; // ivar: _directoryURL
@property (readonly, nonatomic) NSUInteger maximumCacheSize; // ivar: _maximumCacheSize
@property (readonly, nonatomic) NSURL *thumbnailsDirectoryURL; // ivar: _thumbnailsDirectoryURL


+(id)writeThumbnailImage:(struct CGImage *)arg0 inInboxAtURL:(id)arg1 ;
-(BOOL)_createDirectoryWithURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)_freeDiskSpaceToSaveThumbnailRepresentingFPItem:(id)arg0 withFileAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_saveOrUpdateCachedThumbnailRepresentingFPItem:(id)arg0 withFileAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_saveToDiskCachedThumbnailRepresentingFPItem:(id)arg0 withFileAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)_updateDatabaseWithCachedThumbnailRepresentingFPItem:(id)arg0 withFileAtURL:(id)arg1 error:(*id)arg2 ;
-(BOOL)removeAllThumbnails:(*id)arg0 ;
-(BOOL)storeThumbnailAtURL:(id)arg0 forItem:(id)arg1 error:(*id)arg2 ;
-(id)_urlForThumbnailWithFPItem:(id)arg0 originalThumbnailURL:(id)arg1 ;
-(id)_urlForThumbnailWithFPItemIdentifier:(id)arg0 fileExtension:(id)arg1 ;
-(id)inboxDirectoryURL;
-(id)initWithDirectoryURL:(id)arg0 maximumCacheSize:(NSUInteger)arg1 error:(*id)arg2 ;
-(id)thumbnailURLForItem:(id)arg0 error:(*id)arg1 ;
-(id)writeThumbnailImageInInbox:(struct CGImage *)arg0 ;
-(void)close;
-(void)dealloc;
-(void)getThumbnailCacheURLWrappersWithCompletion:(id)arg0 ;
-(void)getThumbnailURLForItem:(id)arg0 completion:(id)arg1 ;
-(void)storeThumbnailAtURL:(id)arg0 forItem:(id)arg1 completion:(id)arg2 ;


@end


#endif