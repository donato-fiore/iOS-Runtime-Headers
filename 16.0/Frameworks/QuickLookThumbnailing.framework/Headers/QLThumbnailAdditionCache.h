// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QLTHUMBNAILADDITIONCACHE_H
#define QLTHUMBNAILADDITIONCACHE_H

@class NSCache;

#import <Foundation/Foundation.h>


@interface QLThumbnailAdditionCache : NSObject {
    NSCache *_additionsCache;
}




+(id)sharedInstance;
-(id)init;
-(id)thumbnailAdditionForItemAtURL:(id)arg0 error:(*id)arg1 ;
-(void)cacheAddition:(id)arg0 forDocumentID:(id)arg1 ;
-(void)purgeCachedAdditionForItemAtURL:(id)arg0 ;


@end


#endif