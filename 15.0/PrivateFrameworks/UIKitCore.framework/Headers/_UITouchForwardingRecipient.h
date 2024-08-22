// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UITOUCHFORWARDINGRECIPIENT_H
#define _UITOUCHFORWARDINGRECIPIENT_H


#import <Foundation/Foundation.h>

#import "UIResponder.h"

@interface _UITouchForwardingRecipient : NSObject {
    UIResponder *fromResponder;
    NSInteger recordedPhase;
    NSInteger autocompletedPhase;
}


@property (weak, nonatomic) UIResponder *responder; // ivar: responder


-(id)description;


@end


#endif