// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSTFONTINFOCACHEENTRY_H
#define TSTFONTINFOCACHEENTRY_H

@class TSWPTextMeasurerBundle;

#import <Foundation/Foundation.h>


@interface TSTFontInfoCacheEntry : NSObject {
    os_unfair_lock_s _lock;
    unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>> _dupContentEntryToHeightCache;
    unordered_map<TSTFontInfoCacheDupContentEntry, double, std::hash<TSTFontInfoCacheDupContentEntry>, std::equal_to<TSTFontInfoCacheDupContentEntry>, std::allocator<std::pair<const TSTFontInfoCacheDupContentEntry, double>>> _dupContentEntryToWidthCache;
}


@property (retain, nonatomic) TSWPTextMeasurerBundle *textMeasurerBundle; // ivar: _textMeasurerBundle


-(CGFloat)heightForString:(id)arg0 width:(CGFloat)arg1 outFitWidth:(*CGFloat)arg2 ;
-(CGFloat)widthForString:(id)arg0 ;
-(id)initWithTextMeasurerBundle:(id)arg0 ;


@end


#endif