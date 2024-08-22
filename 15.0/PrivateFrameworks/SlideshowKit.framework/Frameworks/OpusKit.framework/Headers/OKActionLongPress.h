// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef OKACTIONLONGPRESS_H
#define OKACTIONLONGPRESS_H

@protocol OKActionLongPressExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionLongPress : OKAction <OKActionLongPressExports, NSSecureCoding>



@property (nonatomic) CGFloat pressDuration; // ivar: _pressDuration
@property (nonatomic) NSUInteger tapCount; // ivar: _tapCount


+(BOOL)supportsSecureCoding;
+(id)longPressActionWithLocation:(struct CGPoint )arg0 tapCount:(NSUInteger)arg1 touchCount:(NSUInteger)arg2 pressDuration:(CGFloat)arg3 context:(id)arg4 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif