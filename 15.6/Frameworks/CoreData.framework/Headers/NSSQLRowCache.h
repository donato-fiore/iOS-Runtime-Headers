// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NSSQLROWCACHE_H
#define NSSQLROWCACHE_H



#import "NSPersistentStoreCache.h"
#import "NSSQLCore.h"

@interface NSSQLRowCache : NSPersistentStoreCache {
    NSSQLCore *_sqlCore;
    int _debug;
}




+(void)initialize;
-(id)initWithPersistentStore:(id)arg0 ;
-(id)sqlCore;
-(void)dealloc;


@end


#endif