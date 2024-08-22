// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SBSWITCHERMODIFIERTIMELINEENTRY_H
#define SBSWITCHERMODIFIERTIMELINEENTRY_H


#import <Foundation/Foundation.h>

#import "SBSwitcherModifierEventSnapshot.h"
#import "SBSwitcherModifierStackSnapshot.h"
#import "SBSwitcherModifierEventResponseSnapshot.h"

@interface SBSwitcherModifierTimelineEntry : NSObject

@property (retain, nonatomic) SBSwitcherModifierEventSnapshot *eventSnapshot; // ivar: _eventSnapshot
@property (retain, nonatomic) SBSwitcherModifierStackSnapshot *postEventStackSnapshot; // ivar: _postEventStackSnapshot
@property (retain, nonatomic) SBSwitcherModifierEventResponseSnapshot *responseSnapshot; // ivar: _responseSnapshot




@end


#endif