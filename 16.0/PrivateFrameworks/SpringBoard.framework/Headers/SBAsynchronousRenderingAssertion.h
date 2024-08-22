// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SBASYNCHRONOUSRENDERINGASSERTION_H
#define SBASYNCHRONOUSRENDERINGASSERTION_H

@class BSSimpleAssertion;



@interface SBAsynchronousRenderingAssertion : BSSimpleAssertion

@property (nonatomic) BOOL wantsMinificationFilter; // ivar: _wantsMinificationFilter


-(id)initWithReason:(id)arg0 ;
-(id)initWithReason:(id)arg0 wantsMinificationFilter:(BOOL)arg1 ;


@end


#endif