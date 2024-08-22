// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLEXTERNALTHUMBNAILCACHEDATABASE_H
#define QLEXTERNALTHUMBNAILCACHEDATABASE_H

@class NSURL, PQLConnection;

#import <Foundation/Foundation.h>


@interface QLExternalThumbnailCacheDatabase : NSObject

@property (readonly, nonatomic) NSURL *databaseURL; // ivar: _databaseURL
@property (readonly, nonatomic) PQLConnection *db; // ivar: _db


-(BOOL)deleteOldestThumbnail;
-(BOOL)insertOrReplaceThumbnailRepresentingFPItem:(id)arg0 size:(NSUInteger)arg1 modificationDate:(id)arg2 fileExtension:(id)arg3 error:(*id)arg4 ;
-(BOOL)open;
-(BOOL)removeAllThumbnails:(*id)arg0 ;
-(NSUInteger)totalThumbnailCount;
-(NSUInteger)totalThumbnailsSize;
-(id)_createDatabaseIfNeededAtURL:(id)arg0 error:(*id)arg1 ;
-(id)_openDatabaseAtURL:(id)arg0 ;
-(id)_setupDatabaseTablesIfNeeded:(id)arg0 error:(*id)arg1 ;
-(id)deleteOldestThumbnailsToFreeAtLeastSpace:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 ;
-(id)oldestThumbnailsToFreeAtLeastSpace:(NSUInteger)arg0 error:(*id)arg1 ;
-(id)pathExtensionForItem:(id)arg0 error:(*id)arg1 ;
-(id)whereClauseForItem:(id)arg0 ;
-(void)_closeDatabaseOnItsQueue:(id)arg0 ;
-(void)close;
-(void)logError:(id)arg0 onDB:(id)arg1 statement:(id)arg2 ;


@end


#endif