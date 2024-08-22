// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PFUBIQUITYPEERRANGECACHE_H
#define PFUBIQUITYPEERRANGECACHE_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>

#import "NSPersistentStore.h"

@interface PFUbiquityPeerRangeCache : NSObject {
    NSMutableDictionary *_cachedRanges;
    NSMutableDictionary *_allEntityRanges;
    NSMutableDictionary *_translatedGlobalIDs;
    NSString *_localPeerID;
    NSString *_storeName;
    NSPersistentStore *_privateStore;
    BOOL _cachedStorePeerRanges;
}




+(void)initialize;
-(id)description;
-(id)initWithPrivateStore:(id)arg0 storeName:(id)arg1 andLocalPeerID:(id)arg2 ;
-(void)dealloc;


@end


#endif