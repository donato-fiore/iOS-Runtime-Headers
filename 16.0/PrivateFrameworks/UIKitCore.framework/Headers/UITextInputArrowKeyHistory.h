// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UITEXTINPUTARROWKEYHISTORY_H
#define UITEXTINPUTARROWKEYHISTORY_H


#import <Foundation/Foundation.h>

#import "UITextPosition.h"

@interface UITextInputArrowKeyHistory : NSObject

@property (nonatomic) BOOL affinityDownstream; // ivar: affinityDownstream
@property (nonatomic) NSInteger amount; // ivar: amount
@property (nonatomic) int anchor; // ivar: anchor
@property (retain, nonatomic) UITextPosition *cursor; // ivar: cursor
@property (retain, nonatomic) UITextPosition *end; // ivar: end
@property (retain, nonatomic) UITextPosition *start; // ivar: start
@property (retain, nonatomic) UITextPosition *startPosition; // ivar: startPosition




@end


#endif