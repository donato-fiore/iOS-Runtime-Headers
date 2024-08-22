// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef OKACTIONTAP_H
#define OKACTIONTAP_H

@protocol OKActionTapExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionTap : OKAction <OKActionTapExports, NSSecureCoding>



@property (nonatomic) NSUInteger tapCount; // ivar: _tapCount


+(BOOL)supportsSecureCoding;
+(id)tapActionWithLocation:(struct CGPoint )arg0 tapCount:(NSUInteger)arg1 touchCount:(NSUInteger)arg2 context:(id)arg3 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif