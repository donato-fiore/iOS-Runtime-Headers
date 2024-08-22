// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSMEMORYIMAGECACHE_H
#define TSMEMORYIMAGECACHE_H


#import <Foundation/Foundation.h>


@interface TSMemoryImageCache : NSObject {
    ? lruCache;
    ? accessor;
}




-(id)imageForKey:(id)arg0 ;
-(id)init;
-(id)initWithMaxSize:(NSInteger)arg0 accessor:(id)arg1 ;
-(void)cacheImage:(id)arg0 forKey:(id)arg1 expires:(BOOL)arg2 ;


@end


#endif