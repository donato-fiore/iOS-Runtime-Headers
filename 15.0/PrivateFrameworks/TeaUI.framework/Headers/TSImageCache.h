// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSIMAGECACHE_H
#define TSIMAGECACHE_H


#import <Foundation/Foundation.h>


@interface TSImageCache : NSObject {
    ? downloader;
    ? processor;
    ? underlyingCache;
    ? fetchDeduper;
    ? mainLRU;
}




-(id)init;
-(id)initWithUnderlyingCache:(id)arg0 processor:(id)arg1 downloader:(id)arg2 ;
-(void)dealloc;
-(void)didReceiveMemoryWarning:(id)arg0 ;


@end


#endif