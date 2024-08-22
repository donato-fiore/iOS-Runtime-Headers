// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UISTATUSBARSIGNALVIEWCACHEKEY_H
#define _UISTATUSBARSIGNALVIEWCACHEKEY_H

@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIStatusBarSignalViewCacheKey : NSObject <NSCopying>

 {
    Class _classType;
    CGSize _size;
    CGRect _rect;
    CGFloat _radius;
    CGFloat _lineWidth;
    CGSize _secondarySize;
    CGRect _secondaryRect;
    BOOL _alternate;
    CGFloat _scale;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToCacheKey:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithClass:(Class)arg0 size:(struct CGSize )arg1 rect:(struct CGRect )arg2 radius:(CGFloat)arg3 lineWidth:(CGFloat)arg4 alternate:(BOOL)arg5 scale:(CGFloat)arg6 ;
-(id)initWithClass:(Class)arg0 size:(struct CGSize )arg1 rect:(struct CGRect )arg2 radius:(CGFloat)arg3 lineWidth:(CGFloat)arg4 secondarySize:(struct CGSize )arg5 secondaryRect:(struct CGRect )arg6 alternate:(BOOL)arg7 scale:(CGFloat)arg8 ;


@end


#endif