// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _AFUIASSERTINGDELAYEDACTIONCOMMAND_H
#define _AFUIASSERTINGDELAYEDACTIONCOMMAND_H

@class BKSProcessAssertion, SAUIDelayedActionCommand;

#import <Foundation/Foundation.h>


@interface _AFUIAssertingDelayedActionCommand : NSObject

@property (readonly, nonatomic) BKSProcessAssertion *assertion; // ivar: _assertion
@property (readonly, nonatomic) SAUIDelayedActionCommand *command; // ivar: _command


-(id)initWithCommand:(id)arg0 assertion:(id)arg1 ;


@end


#endif