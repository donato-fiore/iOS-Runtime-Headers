// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef QL_UIBEZIERPATH_H
#define QL_UIBEZIERPATH_H


#import <Foundation/Foundation.h>


@interface QL_UIBezierPath : NSObject

@property (nonatomic) *CGPath CGPath; // ivar: _CGPath
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth


+(id)_bezierPathWithRoundedRect:(struct CGRect )arg0 byRoundingCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 ;
+(id)_continuousRoundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadii:(id)arg2 segments:(int)arg3 smoothPillShapes:(BOOL)arg4 ;
+(id)_continuousRoundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadius:(struct CGSize )arg2 segments:(int)arg3 ;
+(id)_roundedRectBezierPath:(struct CGRect )arg0 withRoundedCorners:(NSUInteger)arg1 cornerRadius:(CGFloat)arg2 segments:(int)arg3 legacyCorners:(BOOL)arg4 ;
+(id)bezierPathWithRoundedRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)valueWithCGSize:(struct CGSize )arg0 ;
-(id)_initWithCGMutablePath:(struct CGPath *)arg0 ;


@end


#endif