// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WEBSTORAGEMANAGER_H
#define WEBSTORAGEMANAGER_H


#import <Foundation/Foundation.h>


@interface WebStorageManager : NSObject



+(id)_storageDirectoryPath;
+(id)sharedWebStorageManager;
+(void)closeIdleLocalStorageDatabases;
+(void)setStorageDatabaseIdleInterval:(CGFloat)arg0 ;
-(NSUInteger)diskUsageForOrigin:(id)arg0 ;
-(id)init;
-(id)origins;
-(void)deleteAllOrigins;
-(void)deleteOrigin:(id)arg0 ;
-(void)syncFileSystemAndTrackerDatabase;
-(void)syncLocalStorage;


@end


#endif