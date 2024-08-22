// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSWPADORNMENTLINE_H
#define TSWPADORNMENTLINE_H

@protocol NSCopying, TSWPAdornmentLineRenderingDelegate;

#import <Foundation/Foundation.h>


@interface TSWPAdornmentLine : NSObject <NSCopying>



@property (readonly, nonatomic) int adornmentLocation; // ivar: _adornmentLocation
@property (readonly, nonatomic) BOOL allowAntialiasing; // ivar: _allowAntialiasing
@property (readonly, nonatomic) *CGColor color; // ivar: _color
@property (readonly, nonatomic) BOOL isWhitespace; // ivar: _isWhitespace
@property (readonly, nonatomic) CGFloat length; // ivar: _length
@property (readonly, nonatomic) NSUInteger lineCount; // ivar: _lineCount
@property (retain, nonatomic) NSObject<TSWPAdornmentLineRenderingDelegate> *renderingDelegate; // ivar: _renderingDelegate
@property (readonly, nonatomic) CGPoint start; // ivar: _start
@property (readonly, nonatomic) CGFloat thickness; // ivar: _thickness
@property (readonly, nonatomic) int underline; // ivar: _underline
@property (readonly, nonatomic) CGFloat underlineAdjustment; // ivar: _underlineAdjustment


-(BOOL)merge:(id)arg0 ;
-(BOOL)shouldRenderForLineDrawFlags:(NSUInteger)arg0 ;
-(id)copyWithColor:(struct CGColor *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithStart:(struct CGPoint )arg0 length:(CGFloat)arg1 color:(struct CGColor *)arg2 thickness:(CGFloat)arg3 lineCount:(NSUInteger)arg4 underline:(int)arg5 adornmentLocation:(int)arg6 underLineAdjustment:(CGFloat)arg7 ;
-(id)initWithStart:(struct CGPoint )arg0 length:(CGFloat)arg1 color:(struct CGColor *)arg2 thickness:(CGFloat)arg3 lineCount:(NSUInteger)arg4 underline:(int)arg5 adornmentLocation:(int)arg6 underLineAdjustment:(CGFloat)arg7 isWhitespace:(BOOL)arg8 renderingDelegate:(id)arg9 allowAntialiasing:(BOOL)arg10 ;
-(void)dealloc;


@end


#endif