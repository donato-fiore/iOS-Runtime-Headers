// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CCVEGAJSFONTCACHE_H
#define CCVEGAJSFONTCACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CCVegaJSFontCache : NSObject {
    NSMutableDictionary *_cache;
    NSMutableDictionary *_styleCache;
    NSMutableDictionary *_internalNameCache;
}




+(id)fontMetricsForTextStyle:(id)arg0 options:(id)arg1 ;
+(id)fontWithCSSFontString:(id)arg0 options:(id)arg1 ;
+(id)fontWithFontFamily:(id)arg0 fontSize:(CGFloat)arg1 fontWeight:(id)arg2 fontStyle:(id)arg3 fontVariant:(id)arg4 options:(id)arg5 ;
+(id)sharedCache;
+(struct __CTFont *)cacheedFontForInternalName:(id)arg0 ;
+(void)cacheFont:(struct __CTFont *)arg0 forInternalName:(id)arg1 ;
+(void)cleanUp;
-(id)init;


@end


#endif