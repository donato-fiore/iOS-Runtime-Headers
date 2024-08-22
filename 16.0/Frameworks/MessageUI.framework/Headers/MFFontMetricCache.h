// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MFFONTMETRICCACHE_H
#define MFFONTMETRICCACHE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface MFFontMetricCache : NSObject {
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
    NSMutableDictionary *_bodyLeadingDictionary;
    NSMutableDictionary *_defaultBodyLeadingDictionary;
}




+(id)sharedFontMetricCache;
-(BOOL)ensureCacheIsValid;
// -(CGFloat)cachedFloat:(id)arg0 forKey:(unk)arg1  ;
-(CGFloat)cachedScaledFloatWithValue:(CGFloat)arg0 fontStyle:(id)arg1 ;
-(CGFloat)cachedScaledFloatWithValue:(CGFloat)arg0 fontStyle:(id)arg1 maximumContentSizeCategory:(id)arg2 ;
-(CGFloat)cachedScaledFloatWithValue:(CGFloat)arg0 forKey:(id)arg1 ;
// -(id)cachedFont:(id)arg0 forKey:(unk)arg1  ;
// -(id)cachedImage:(id)arg0 forKey:(unk)arg1  ;
-(id)cachedPreferredFontForStyle:(id)arg0 ;
-(id)cachedPreferredFontForStyle:(id)arg0 maximumContentSizeCategory:(id)arg1 ;
-(id)init;
-(id)metricCacheDictionary;
-(void)_didReceivePreferredFontChangedNotification:(id)arg0 ;
-(void)_invalidateCache;


@end


#endif