// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SLRBSASSERTION_H
#define SLRBSASSERTION_H

@class RBSAssertion;

#import <Foundation/Foundation.h>


@interface SLRBSAssertion : NSObject

@property (readonly, nonatomic) RBSAssertion *assertion; // ivar: _assertion
@property (readonly, nonatomic, getter=isValid) BOOL valid;


+(id)assertionNameForType:(NSInteger)arg0 ;
+(id)assertionWithType:(NSInteger)arg0 pid:(int)arg1 error:(*id)arg2 ;
-(id)initWithType:(NSInteger)arg0 pid:(int)arg1 error:(*id)arg2 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif