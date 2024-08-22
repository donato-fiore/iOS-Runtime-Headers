// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPFONTMETRICSCACHE_H
#define TSWPFONTMETRICSCACHE_H


#import <Foundation/Foundation.h>


@interface TSWPFontMetricsCache : NSObject {
    list<unsigned long, std::allocator<unsigned long>> _fontHashList;
    map<unsigned long, TSWPFontMetricsCacheEntry, std::less<unsigned long>, std::allocator<std::pair<const unsigned long, TSWPFontMetricsCacheEntry>>> _fontHashToInfoMap;
    unsigned int _cacheSize;
    unsigned int _maxCacheSize;
    _opaque_pthread_rwlock_t _lock;
}




+(id)_singletonAlloc;
+(id)allocWithZone:(struct _NSZone *)arg0 ;
+(id)sharedCache;
-(BOOL)p_findEntryForFont:(struct __CTFont *)arg0 outHeightInfo:(struct TSWPFontHeightInfo *)arg1 outWidths:(*NSUInteger)arg2 outCollision:(*BOOL)arg3 ;
-(NSUInteger)supportedFractionalWidthsForFont:(struct __CTFont *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(struct TSWPFontHeightInfo )fontHeightInfoForFont:(struct __CTFont *)arg0 ;
-(struct TSWPFontHeightInfo )p_fontHeightInfoForFont:(struct __CTFont *)arg0 outWidths:(*NSUInteger)arg1 ;
-(void)dealloc;
-(void)noop;
-(void)p_addEntryForFont:(struct __CTFont *)arg0 heightInfo:(struct TSWPFontHeightInfo *)arg1 widths:(NSUInteger)arg2 ;
-(void)validateFontHeightInfo:(struct TSWPFontHeightInfo *)arg0 description:(id)arg1 ;


@end


#endif