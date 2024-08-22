// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AMSFAILINGMOCKBAGBUILDER_H
#define AMSFAILINGMOCKBAGBUILDER_H

@class NSError;


#import "AMSMockBagBuilder.h"

@interface AMSFailingMockBagBuilder : AMSMockBagBuilder

@property (nonatomic) CGFloat delay; // ivar: _delay
@property (retain, nonatomic) NSError *error; // ivar: _error


-(id)createMockBag;


@end


#endif