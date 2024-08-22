// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PPCONTACTDISKCACHEMANAGER_H
#define PPCONTACTDISKCACHEMANAGER_H

@class _PASLock;

#import <Foundation/Foundation.h>


@interface PPContactDiskCacheManager : NSObject {
    _PASLock *_lock;
}




-(id)init;
-(id)initWithPath:(id)arg0 ;
-(void)accessCacheWithBlock:(id)arg0 ;
-(void)mutateCacheWithBlock:(id)arg0 ;


@end


#endif