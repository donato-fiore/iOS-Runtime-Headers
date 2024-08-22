// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REHTTPFILECACHE_H
#define REHTTPFILECACHE_H

@class NSString, NSCache;

#import <Foundation/Foundation.h>


@interface REHTTPFileCache : NSObject {
    NSString *_directory;
    NSCache *_cache;
}




-(id)initWithRootDirectory:(id)arg0 ;
-(id)loadFileAtPath:(id)arg0 ;


@end


#endif