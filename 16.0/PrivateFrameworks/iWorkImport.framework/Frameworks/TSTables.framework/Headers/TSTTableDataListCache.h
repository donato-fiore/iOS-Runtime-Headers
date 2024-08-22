// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSTTABLEDATALISTCACHE_H
#define TSTTABLEDATALISTCACHE_H

@class TSULocale;

#import <Foundation/Foundation.h>

#import "TSTTableDataStore.h"
#import "TSTTableDataListItemCache.h"

@interface TSTTableDataListCache : NSObject

@property (retain, nonatomic) TSTTableDataStore *dataStore; // ivar: _dataStore
@property (retain, nonatomic) TSTTableDataListItemCache *formats; // ivar: _formats
@property (retain, nonatomic) TSULocale *locale; // ivar: _locale
@property (retain, nonatomic) TSTTableDataListItemCache *styles; // ivar: _styles


+(id)cacheWithDataStore:(id)arg0 ;
-(id)formatForKey:(unsigned int)arg0 ;
-(id)initWithDataStore:(id)arg0 ;
-(id)styleForKey:(unsigned int)arg0 ;


@end


#endif