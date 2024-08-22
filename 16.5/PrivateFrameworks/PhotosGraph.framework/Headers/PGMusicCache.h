// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGMUSICCACHE_H
#define PGMUSICCACHE_H


#import <Foundation/Foundation.h>


@interface PGMusicCache : NSObject {
    ? cacheURL;
    ? persistentStoreCoordinator;
    ? managedObjectContext;
}




+(id)cacheAtURL:(id)arg0 error:(*id)arg1 ;
+(id)cacheWithPhotoLibrary:(id)arg0 error:(*id)arg1 ;
-(BOOL)removeAllWithProgressReporter:(id)arg0 error:(*id)arg1 ;
-(id)init;


@end


#endif