// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATALISTITEMCACHE_H
#define TSTTABLEDATALISTITEMCACHE_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface TSTTableDataListItemCache : NSObject {
    NSMapTable *_data;
}




+(id)cache;
-(id)init;
-(id)objectForKey:(unsigned int)arg0 ;
-(void)removeAllObjects;
-(void)setObject:(id)arg0 forKey:(unsigned int)arg1 ;


@end


#endif