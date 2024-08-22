// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef KPERSISTENTMOVIEINFO_H
#define KPERSISTENTMOVIEINFO_H


#import <Foundation/Foundation.h>


@interface KPersistentMovieInfo : NSObject



+(NSInteger)cacheCount;
+(id)cachedCreationDateForURL:(id)arg0 ;
+(id)infoCachePath;
+(void)addURL:(id)arg0 withDate:(id)arg1 ;
+(void)createOrLoadPersistentDict;
+(void)ensureCacheDirectoryExists;
+(void)noteApplicationDidReceiveMemoryWarning;
+(void)nukeCaches;
+(void)reallySaveDict:(id)arg0 ;
+(void)savePersistentDict;


@end


#endif