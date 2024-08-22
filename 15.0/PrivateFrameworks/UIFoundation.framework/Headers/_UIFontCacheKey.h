// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UIFONTCACHEKEY_H
#define _UIFONTCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIFontCacheKey : NSObject <NSCopying>

 {
    NSUInteger _hash;
}




+(id)newFontCacheKeyWithFontDescriptor:(id)arg0 pointSize:(CGFloat)arg1 textStyleForScaling:(id)arg2 pointSizeForScaling:(CGFloat)arg3 maximumPointSizeAfterScaling:(CGFloat)arg4 textLegibility:(BOOL)arg5 ;
+(id)newFontCacheKeyWithFontName:(id)arg0 traits:(int)arg1 pointSize:(CGFloat)arg2 ;
+(id)newFontCacheKeyWithTextStyle:(id)arg0 contentSizeCategory:(id)arg1 textLegibility:(BOOL)arg2 ;
+(id)newSystemFontCacheKeyWithDesign:(id)arg0 weight:(CGFloat)arg1 pointSize:(CGFloat)arg2 monospacedDigits:(BOOL)arg3 ;
+(id)newSystemFontCacheKeyWithTraits:(int)arg0 pointSize:(CGFloat)arg1 ;
-(BOOL)_isEqualToKey:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)_hash;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)_precalculateHash;


@end


#endif