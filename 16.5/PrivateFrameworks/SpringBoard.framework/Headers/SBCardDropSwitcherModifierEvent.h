// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBCARDDROPSWITCHERMODIFIEREVENT_H
#define SBCARDDROPSWITCHERMODIFIEREVENT_H



#import "SBSwitcherModifierEvent.h"
#import "SBSwitcherDropRegionContext.h"

@interface SBCardDropSwitcherModifierEvent : SBSwitcherModifierEvent

@property (readonly, nonatomic) SBSwitcherDropRegionContext *context; // ivar: _context
@property (readonly, nonatomic) NSUInteger phase; // ivar: _phase


-(NSInteger)type;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithPhase:(NSUInteger)arg0 context:(id)arg1 ;


@end


#endif