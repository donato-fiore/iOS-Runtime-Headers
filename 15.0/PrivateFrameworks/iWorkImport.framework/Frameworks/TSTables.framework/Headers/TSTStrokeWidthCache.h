// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSTSTROKEWIDTHCACHE_H
#define TSTSTROKEWIDTHCACHE_H


#import <Foundation/Foundation.h>


@interface TSTStrokeWidthCache : NSObject {
    vector<TSTStrokeWidthCacheEntry, std::allocator<TSTStrokeWidthCacheEntry>> _indexToCacheEntriesMap;
}


@property (nonatomic) _opaque_pthread_rwlock_t rwlock; // ivar: _rwlock


-(CGFloat)strokeWidthForGridIndex:(unsigned int)arg0 inRange:(struct TSTSimpleRange )arg1 ;
-(id)init;
-(void)dealloc;
-(void)lockForWriting;
-(void)setCount:(unsigned int)arg0 ;
-(void)strokeWidthForGridIndex:(unsigned int)arg0 outWidth:(*CGFloat)arg1 outNextWidth:(*CGFloat)arg2 ;
-(void)unlock;
-(void)updateCacheForGridIndex:(unsigned int)arg0 withMergedStrokes:(id)arg1 ;


@end


#endif