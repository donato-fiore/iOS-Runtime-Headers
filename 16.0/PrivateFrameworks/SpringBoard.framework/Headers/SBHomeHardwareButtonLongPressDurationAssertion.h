// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBHOMEHARDWAREBUTTONLONGPRESSDURATIONASSERTION_H
#define SBHOMEHARDWAREBUTTONLONGPRESSDURATIONASSERTION_H

@class NSString;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface SBHomeHardwareButtonLongPressDurationAssertion : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CGFloat duration; // ivar: _duration
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *reason; // ivar: _reason
@property (readonly) Class superclass;


-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithReason:(id)arg0 duration:(CGFloat)arg1 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif