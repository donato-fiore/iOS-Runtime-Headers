// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNUILIKENESSRENDERINGSCOPE_H
#define CNUILIKENESSRENDERINGSCOPE_H

@class PRMonogramColor, NSIndexSet;

#import <Foundation/Foundation.h>


@interface CNUILikenessRenderingScope : NSObject

@property (readonly, nonatomic) NSUInteger backgroundStyle; // ivar: _backgroundStyle
@property (readonly, nonatomic) PRMonogramColor *color; // ivar: _color
@property (nonatomic) BOOL excludePointSizeInEqualityCheck; // ivar: _excludePointSizeInEqualityCheck
@property (readonly, nonatomic) NSIndexSet *maskedAvatarIndices; // ivar: _maskedAvatarIndices
@property (readonly, nonatomic) CGSize pointSize; // ivar: _pointSize
@property (readonly, nonatomic) BOOL rightToLeft; // ivar: _rightToLeft
@property (readonly, nonatomic) CGFloat scale; // ivar: _scale
@property (readonly, nonatomic) *CGColor strokeColor; // ivar: _strokeColor
@property (readonly, nonatomic) CGFloat strokeWidth; // ivar: _strokeWidth
@property (readonly, nonatomic) NSUInteger style; // ivar: _style


+(id)renderingScopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rightToLeft:(BOOL)arg2 style:(NSUInteger)arg3 color:(id)arg4 ;
+(id)renderingScopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(struct CGColor *)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 backgroundStyle:(NSUInteger)arg6 color:(id)arg7 maskedAvatarIndices:(id)arg8 ;
+(id)renderingScopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(struct CGColor *)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 color:(id)arg6 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(struct CGColor *)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 backgroundStyle:(NSUInteger)arg6 color:(id)arg7 maskedAvatarIndices:(id)arg8 ;
-(void)dealloc;


@end


#endif