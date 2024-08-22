// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNAUTOCOMPLETEFONTMETRICCACHE_H
#define CNAUTOCOMPLETEFONTMETRICCACHE_H

@class NSString, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface CNAutocompleteFontMetricCache : NSObject {
    NSString *_preferredSizeValidationKey;
    NSMutableDictionary *_metricCacheDictionary;
}




+(id)sharedFontMetricCache;
-(BOOL)ensureCacheIsValid;
// -(CGFloat)cachedFloat:(id)arg0 forKey:(unk)arg1  ;
-(CGFloat)cachedScaledFloatWithValue:(CGFloat)arg0 fontStyle:(id)arg1 ;
-(CGFloat)cachedScaledFloatWithValue:(CGFloat)arg0 forKey:(id)arg1 ;
// -(id)cachedFont:(id)arg0 forKey:(unk)arg1  ;
-(id)cachedPreferredFontForStyle:(id)arg0 ;
-(id)init;
-(id)metricCacheDictionary;
-(void)_didReceivePreferredFontChangedNotification:(id)arg0 ;
-(void)_invalidateCache;


@end


#endif