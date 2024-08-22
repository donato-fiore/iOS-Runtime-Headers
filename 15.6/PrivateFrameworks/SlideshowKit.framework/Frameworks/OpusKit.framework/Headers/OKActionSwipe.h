// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef OKACTIONSWIPE_H
#define OKACTIONSWIPE_H

@protocol OKActionSwipeExports, NSSecureCoding;


#import "OKAction.h"

@interface OKActionSwipe : OKAction <OKActionSwipeExports, NSSecureCoding>



@property (nonatomic) NSUInteger direction; // ivar: _direction


+(BOOL)supportsSecureCoding;
+(id)swipeActionWithLocation:(struct CGPoint )arg0 direction:(NSUInteger)arg1 touchCount:(NSUInteger)arg2 context:(id)arg3 ;
+(void)setupJavascriptContext:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif