// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LIVEFSLRUCACHE_H
#define LIVEFSLRUCACHE_H

@class NSMutableDictionary, NSMutableArray;

#import <Foundation/Foundation.h>


@interface LiveFSLRUCache : NSObject {
    int _countLimit;
}


@property int countLimit;
@property (retain) NSMutableDictionary *mapping; // ivar: _mapping
@property (retain) NSMutableArray *usageOrder; // ivar: _usageOrder


-(id)init;
-(id)objectForKey:(id)arg0 ;
-(id)objectForKeyLocked:(id)arg0 ;
-(void)removeAllObjects;
-(void)removeLastItem;
-(void)removeObjectForKey:(id)arg0 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 ;


@end


#endif