// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICQAPPCLOUDSTORAGECACHE_H
#define ICQAPPCLOUDSTORAGECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface ICQAppCloudStorageCache : NSObject {
    NSMutableDictionary *_hashMap;
    os_unfair_lock_s _cacheLock;
}




+(id)sharedInstance;
-(id)cloudStorageByApp:(id)arg0 forAltDSID:(id)arg1 ;
-(id)init;
-(void)setCloudStorage:(id)arg0 byApp:(id)arg1 forAltDSID:(id)arg2 ;


@end


#endif