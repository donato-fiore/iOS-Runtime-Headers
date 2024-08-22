// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDKEYCHAINITEMCACHE_H
#define ACDKEYCHAINITEMCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ACDKeychainItemCache : NSObject {
    NSMutableDictionary *_nonSyncableItems;
    NSMutableDictionary *_syncableItems;
}


@property (readonly) NSMutableDictionary *nonSyncableItems;
@property (readonly) NSMutableDictionary *syncableItems;




@end


#endif