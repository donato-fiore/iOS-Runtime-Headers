// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CNAVATARIMAGERENDERINGSCOPE_H
#define CNAVATARIMAGERENDERINGSCOPE_H


#import <Foundation/Foundation.h>


@interface CNAvatarImageRenderingScope : NSObject



+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rightToLeft:(BOOL)arg2 style:(NSUInteger)arg3 ;
+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rightToLeft:(BOOL)arg2 style:(NSUInteger)arg3 backgroundStyle:(NSUInteger)arg4 ;
+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 rightToLeft:(BOOL)arg2 style:(NSUInteger)arg3 color:(id)arg4 ;
+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(id)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 ;
+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(id)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 backgroundStyle:(NSUInteger)arg6 color:(id)arg7 maskedAvatarIndices:(id)arg8 ;
+(id)scopeWithPointSize:(struct CGSize )arg0 scale:(CGFloat)arg1 strokeWidth:(CGFloat)arg2 strokeColor:(id)arg3 rightToLeft:(BOOL)arg4 style:(NSUInteger)arg5 color:(id)arg6 ;


@end


#endif