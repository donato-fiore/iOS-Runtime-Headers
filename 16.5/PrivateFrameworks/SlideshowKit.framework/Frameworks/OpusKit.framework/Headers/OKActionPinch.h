// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONPINCH_H
#define OKACTIONPINCH_H

@protocol OKActionPinchExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionPinch : OKAction <OKActionPinchExports, NSSecureCoding>



@property (nonatomic) CGFloat angle; // ivar: _angle
@property (nonatomic) CGFloat scale; // ivar: _scale
@property (nonatomic) CGPoint translation; // ivar: _translation
@property (nonatomic) CGFloat velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
+(id)pinchActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 scale:(CGFloat)arg3 angle:(CGFloat)arg4 translation:(struct CGPoint )arg5 velocity:(CGFloat)arg6 context:(id)arg7 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif