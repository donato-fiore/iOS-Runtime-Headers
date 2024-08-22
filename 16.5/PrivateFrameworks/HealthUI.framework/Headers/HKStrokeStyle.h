// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSTROKESTYLE_H
#define HKSTROKESTYLE_H

@class UIColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKStrokeStyle : NSObject <NSCopying>



@property (nonatomic) int blendMode; // ivar: _blendMode
@property (nonatomic) NSInteger dashStyle; // ivar: _dashStyle
@property (nonatomic) int lineCap; // ivar: _lineCap
@property (nonatomic) int lineJoin; // ivar: _lineJoin
@property (nonatomic) CGFloat lineWidth; // ivar: _lineWidth
@property (copy, nonatomic) UIColor *strokeColor; // ivar: _strokeColor


+(id)strokeStyleWithColor:(id)arg0 lineWidth:(CGFloat)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)applyToContext:(struct CGContext *)arg0 ;
-(void)applyToContext:(struct CGContext *)arg0 dashPhase:(CGFloat)arg1 ;


@end


#endif