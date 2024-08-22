// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONMOTION_H
#define OKACTIONMOTION_H

@protocol NSSecureCoding, OKActionMotionExports;


#import "OKAction.h"

@interface OKActionMotion : OKAction <NSSecureCoding, OKActionMotionExports>



@property (readonly, nonatomic) CGFloat rotationX; // ivar: _rotationX
@property (readonly, nonatomic) CGFloat rotationY; // ivar: _rotationY
@property (readonly, nonatomic) CGFloat rotationZ; // ivar: _rotationZ


+(BOOL)supportsSecureCoding;
+(id)motionActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 rotationX:(CGFloat)arg3 rotationY:(CGFloat)arg4 rotationZ:(CGFloat)arg5 context:(id)arg6 ;
+(id)motionActionWithState:(NSUInteger)arg0 rotationX:(CGFloat)arg1 rotationY:(CGFloat)arg2 rotationZ:(CGFloat)arg3 context:(id)arg4 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif