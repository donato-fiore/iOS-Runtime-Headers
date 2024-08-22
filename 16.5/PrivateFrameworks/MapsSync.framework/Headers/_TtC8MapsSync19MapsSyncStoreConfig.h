// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC8MAPSSYNC19MAPSSYNCSTORECONFIG_H
#define _TTC8MAPSSYNC19MAPSSYNCSTORECONFIG_H


#import <Foundation/Foundation.h>

#import "_TtC8MapsSync13MapsSyncStore.h"

@interface _TtC8MapsSync19MapsSyncStoreConfig : NSObject {
    ? _primaryContainer;
    ? _cacheContainer;
    ? _store;
    ? _storeLock;
}


@property (nonatomic, retain) _TtC8MapsSync13MapsSyncStore *store;


+(id)createInMemoryStore;
+(id)defaultStoreConfig;
+(id)getDefault;
-(id)init;


@end


#endif