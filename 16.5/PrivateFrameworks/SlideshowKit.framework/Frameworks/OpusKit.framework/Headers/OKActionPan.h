// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONPAN_H
#define OKACTIONPAN_H

@protocol OKActionPanExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionPan : OKAction <OKActionPanExports, NSSecureCoding>



@property (nonatomic) NSUInteger direction; // ivar: _direction
@property (nonatomic) CGPoint translation; // ivar: _translation
@property (nonatomic) CGPoint velocity; // ivar: _velocity


+(BOOL)supportsSecureCoding;
+(id)panActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 translation:(struct CGPoint )arg3 velocity:(struct CGPoint )arg4 direction:(NSUInteger)arg5 context:(id)arg6 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif