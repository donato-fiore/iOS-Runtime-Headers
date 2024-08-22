// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONEDGEPAN_H
#define OKACTIONEDGEPAN_H

@protocol OKActionEdgePanExports, NSSecureCoding;


#import "OKActionPan.h"

@interface OKActionEdgePan : OKActionPan <OKActionEdgePanExports, NSSecureCoding>





+(BOOL)supportsSecureCoding;
+(id)edgePanActionWithState:(NSUInteger)arg0 location:(struct CGPoint )arg1 touchCount:(NSUInteger)arg2 translation:(struct CGPoint )arg3 previousTranslation:(struct CGPoint )arg4 velocity:(struct CGPoint )arg5 previousVelocity:(struct CGPoint )arg6 direction:(NSUInteger)arg7 context:(id)arg8 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif