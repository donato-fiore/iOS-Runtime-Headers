// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CKDCLONEDFILECACHE_H
#define CKDCLONEDFILECACHE_H

@class NSURL, NSMutableArray;

#import <Foundation/Foundation.h>


@interface CKDClonedFileCache : NSObject {
    NSURL *_cacheDirectory;
    NSUInteger _entryLimit;
    NSMutableArray *_entries;
}




-(NSUInteger)entryCount;
-(id)cacheEntries;
-(id)cloneFileDescriptor:(int)arg0 error:(*id)arg1 ;
-(id)cloneMMCSItem:(id)arg0 error:(*id)arg1 ;
-(id)initWithCacheDirectory:(id)arg0 limit:(NSUInteger)arg1 ;
-(void)prune;


@end


#endif