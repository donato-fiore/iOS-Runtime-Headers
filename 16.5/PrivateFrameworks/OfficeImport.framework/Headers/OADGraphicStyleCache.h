// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OADGRAPHICSTYLECACHE_H
#define OADGRAPHICSTYLECACHE_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>

#import "OADGraphicFeatureCache.h"

@interface OADGraphicStyleCache : NSObject {
    OADGraphicFeatureCache" mFillCacheArray;
    OADGraphicFeatureCache *mStrokeCache;
    OADGraphicFeatureCache *mShadowCache;
    OADGraphicFeatureCache *mColorCache;
    OADGraphicFeatureCache *mFontFaceCache;
    OADGraphicFeatureCache *mTextStyleCache;
    OADGraphicFeatureCache *mTableIdCache;
    NSMutableDictionary *mTableStyleCache;
    OADGraphicFeatureCache *mChartIdCache;
    OADGraphicFeatureCache" mDrawableStyleCacheArray;
}




+(int)fillCatagory:(id)arg0 ;
-(NSUInteger)cacheDrawablePropertiesOfCategory:(int)arg0 withFillCategory:(int)arg1 fillIndex:(NSUInteger)arg2 strokeIndex:(NSUInteger)arg3 shadowIndex:(NSUInteger)arg4 reflectionOpacity:(float)arg5 textStyleIndex:(NSUInteger)arg6 ;
-(NSUInteger)cacheDrawablePropertiesOfCategory:(int)arg0 withGraphicProperties:(id)arg1 textBodyProperties:(id)arg2 paragraphProperties:(id)arg3 characterProperties:(id)arg4 colorContext:(id)arg5 ;
-(NSUInteger)cacheFill:(id)arg0 returnCategory:(*int)arg1 ;
-(NSUInteger)cacheShadow:(id)arg0 ;
-(NSUInteger)cacheStroke:(id)arg0 ;
-(id)cachedDrawableStylesOfCategory:(int)arg0 ;
-(id)chartStyleIds;
-(id)colorCache;
-(id)countedDrawableStyleOfCategory:(int)arg0 atIndex:(NSUInteger)arg1 ;
-(id)fillsOfCategory:(int)arg0 ;
-(id)fontFaceCache;
-(id)init;
-(id)shadows;
-(id)strokes;
-(id)tableStyleForId:(id)arg0 ;
-(id)tableStyleIds;
-(void)applyCachedDrawableStyle:(id)arg0 toGraphicProperties:(id)arg1 ;
-(void)applyCachedDrawableStyle:(id)arg0 toParagraphProperties:(id)arg1 ;
-(void)applyCachedDrawableStyle:(id)arg0 toTextBodyProperties:(id)arg1 ;
-(void)cacheChartStyleId:(int)arg0 ;
-(void)cacheTableStyle:(id)arg0 ;
-(void)dealloc;


@end


#endif