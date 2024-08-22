// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIACTIVITYINDICATORVIEWARTWORKCACHEKEY_H
#define _UIACTIVITYINDICATORVIEWARTWORKCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIActivityIndicatorViewArtworkCacheKey : NSObject <NSCopying>

 {
    NSInteger _style;
    CGFloat _width;
    NSInteger _spokeCount;
    NSInteger _spokeFrameRatio;
    CGSize _shadowOffset;
    *CGColor _color;
    *CGColor _shadowColor;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStyle:(NSInteger)arg0 width:(CGFloat)arg1 spokeCount:(NSInteger)arg2 spokeFrameRatio:(NSInteger)arg3 shadowOffset:(struct CGSize )arg4 color:(struct CGColor *)arg5 shadowColor:(struct CGColor *)arg6 ;
-(void)dealloc;


@end


#endif