// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONDYNAMICPAN_H
#define OKACTIONDYNAMICPAN_H

@protocol OKActionDynamicPanExports, NSSecureCoding;


#import "OKActionPan.h"

@interface OKActionDynamicPan : OKActionPan <OKActionDynamicPanExports, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)dynamicPanActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 translation:(struct CGPoint )arg3 velocity:(struct CGPoint )arg4 direction:(NSUInteger)arg5 context:(id)arg6 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif