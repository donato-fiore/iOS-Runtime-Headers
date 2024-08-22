// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXGPATH_H
#define PXGPATH_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface PXGPath : NSObject <NSCopying>



@property (readonly, nonatomic) *CGPath CGPath; // ivar: _CGPath
@property (readonly, nonatomic) CGRect bounds; // ivar: _bounds
@property (readonly, nonatomic) int drawingMode; // ivar: _drawingMode
@property (readonly, copy, nonatomic) UIColor *fillColor; // ivar: _fillColor
@property (readonly, nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (readonly, copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithBounds:(struct CGRect )arg0 CGPath:(struct CGPath *)arg1 strokeColor:(id)arg2 lineWidth:(CGFloat)arg3 fillColor:(id)arg4 drawingMode:(int)arg5 ;
-(void)dealloc;


@end


#endif