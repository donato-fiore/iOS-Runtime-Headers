// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCROPENDINGBRAILLEMODIFIERPAIR_H
#define SCROPENDINGBRAILLEMODIFIERPAIR_H

@class NSArray, NSString;


#import "SCROPendingBrailleEdit.h"

@interface SCROPendingBrailleModifierPair : SCROPendingBrailleEdit

@property (readonly, nonatomic) NSArray *modifiers; // ivar: _modifiers
@property (readonly, nonatomic) NSString *pendingBraille; // ivar: _pendingBraille


-(id)initWithPendingBraille:(id)arg0 modifiers:(id)arg1 ;


@end


#endif