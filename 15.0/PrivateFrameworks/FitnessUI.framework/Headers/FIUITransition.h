// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUITRANSITION_H
#define FIUITRANSITION_H

@class NSString;

#import <Foundation/Foundation.h>

#import "FIUIState.h"

@interface FIUITransition : NSObject

@property (nonatomic) NSInteger event; // ivar: _event
@property (copy, nonatomic) id *gate; // ivar: _gate
@property (copy, nonatomic) id *handler; // ivar: _handler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (weak, nonatomic) FIUIState *toState; // ivar: _toState




@end


#endif